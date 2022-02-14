
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int txt; scalar_t__ rem_bytes; int * buffer; } ;
typedef TYPE_1__ parse_buffer ;
typedef int header ;
typedef int decomp_file_size ;
typedef int decomp_chunk_size ;
typedef int comp_chunk_size ;
typedef scalar_t__ WORD ;
typedef int * LPBYTE ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,int *) ;
 int VAR_4 ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*,scalar_t__*,int) ;
 int FUNC_9 (scalar_t__,scalar_t__,char*,char*) ;
 int FUNC_10 (TYPE_1__*,scalar_t__*,int) ;

HRESULT FUNC_11(parse_buffer * VAR_15, BYTE ** VAR_16)
{





  DWORD VAR_17[4];

  if (!FUNC_10(VAR_15, VAR_17, sizeof(VAR_17)))
    return VAR_2;

  if (FUNC_5(VAR_14))
  {
    char VAR_18[17];
    FUNC_8(VAR_18, VAR_17, 16);
    VAR_18[16] = 0;
    FUNC_4("header = '%s'\n", VAR_18);
  }

  if (VAR_17[0] != VAR_9)
    return VAR_2;

  if (VAR_17[1] != VAR_12 && VAR_17[1] != VAR_13)
    return VAR_3;

  if (VAR_17[2] != VAR_5 && VAR_17[2] != VAR_10 &&
      VAR_17[2] != VAR_6 && VAR_17[2] != VAR_11)
  {
    FUNC_6("File type %s unknown\n", FUNC_7(VAR_17[2]));
    return VAR_2;
  }

  if (VAR_17[3] != VAR_7 && VAR_17[3] != VAR_8)
    return VAR_1;

  VAR_15->txt = VAR_17[2] == VAR_10 || VAR_17[2] == VAR_11;

  if (VAR_17[2] == VAR_6 || VAR_17[2] == VAR_11)
  {







    int VAR_19;
    DWORD VAR_20;
    WORD VAR_21;
    WORD VAR_22;
    LPBYTE VAR_23;

    if (!FUNC_10(VAR_15, &VAR_20, sizeof(VAR_20)))
      return VAR_2;

    FUNC_4("Compressed format %s detected: decompressed file size with xof header = %d\n",
          FUNC_7(VAR_17[2]), VAR_20);


    VAR_20 -= 16;

    VAR_23 = FUNC_2(FUNC_1(), 0, VAR_20);
    if (!VAR_23)
    {
        FUNC_0("Out of memory\n");
        return VAR_0;
    }
    *VAR_16 = VAR_23;

    while (VAR_15->rem_bytes)
    {
      if (!FUNC_10(VAR_15, &VAR_21, sizeof(VAR_21)))
        return VAR_2;
      if (!FUNC_10(VAR_15, &VAR_22, sizeof(VAR_22)))
        return VAR_2;

      FUNC_4("Process chunk: compressed_size = %d, decompressed_size = %d\n",
            VAR_22, VAR_21);

      VAR_19 = FUNC_9(VAR_22, VAR_21, (char*)VAR_15->buffer, (char*)VAR_23);
      if (VAR_19)
      {
        FUNC_6("Error while decompressing MSZIP chunk %d\n", VAR_19);
        FUNC_3(FUNC_1(), 0, VAR_23);
        return VAR_0;
      }
      VAR_15->rem_bytes -= VAR_22;
      VAR_15->buffer += VAR_22;
      VAR_23 += VAR_21;
    }

    if ((VAR_23 - *VAR_16) != VAR_20)
      FUNC_0("Size of all decompressed chunks (%u) does not match decompressed file size (%u)\n",
          (DWORD)(VAR_23 - *VAR_16), VAR_20);


    VAR_15->buffer = *VAR_16;
    VAR_15->rem_bytes = VAR_20;
  }

  FUNC_4("Header is correct\n");

  return VAR_4;
}
