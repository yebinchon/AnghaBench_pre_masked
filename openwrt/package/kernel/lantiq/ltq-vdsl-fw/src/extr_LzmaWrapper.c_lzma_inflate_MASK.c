
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int properties ;
typedef int UInt32 ;
struct TYPE_3__ {int * Probs; int Properties; } ;
typedef int SizeT ;
typedef int CProb ;
typedef TYPE_1__ CLzmaDecoderState ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,unsigned char*,int,int*,unsigned char*,int,int*) ;
 scalar_t__ FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *) ;
 char* VAR_4 ;
 char* VAR_5 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*,...) ;
 int VAR_6 ;

int FUNC_7(unsigned char *VAR_7, int VAR_8, unsigned char *VAR_9, int *VAR_10)
{



  UInt32 VAR_11 = 0;
  UInt32 VAR_12 = 0;
  SizeT VAR_13;
  unsigned char *VAR_14;

  int VAR_15 = 1;



  SizeT VAR_16;
  unsigned char *VAR_17;

  CLzmaDecoderState VAR_18;
  unsigned char VAR_19[VAR_0];

  int VAR_20;

  VAR_6=0; VAR_3=0;

  if (sizeof(UInt32) < 4)
  {

    FUNC_6("LZMA decoder needs correct UInt32\n");

    return VAR_1;
  }

  {
    long VAR_21=VAR_8;
    if ((long)(SizeT)VAR_21 != VAR_21)
    {

      FUNC_6("Too big compressed stream\n");

      return VAR_1;
    }
    VAR_16 = (SizeT)(VAR_21 - (VAR_0 + 8));
  }



  if (!FUNC_3(VAR_7, VAR_19, sizeof(VAR_19)))
  {

    FUNC_6("%s\n", VAR_5);

    return VAR_1;
  }


  {
    int VAR_22;
    for (VAR_22 = 0; VAR_22 < 8; VAR_22++)
    {
      unsigned char VAR_23;
      if (!FUNC_3(VAR_7, &VAR_23, 1))
      {

        FUNC_6("%s\n", VAR_5);

        return VAR_1;
      }
      if (VAR_23 != 0xFF)
        VAR_15 = 0;
      if (VAR_22 < 4)
        VAR_11 += (UInt32)(VAR_23) << (VAR_22 * 8);
      else
        VAR_12 += (UInt32)(VAR_23) << ((VAR_22 - 4) * 8);
    }

    if (VAR_15)
    {

      FUNC_6("Stream with EOS marker is not supported");

      return VAR_1;
    }
    VAR_13 = (SizeT)VAR_11;
    if (sizeof(SizeT) >= 8)
      VAR_13 |= (((SizeT)VAR_12 << 16) << 16);
    else if (VAR_12 != 0 || (UInt32)(SizeT)VAR_11 != VAR_11)
    {

      FUNC_6("Too big uncompressed stream");

      return VAR_1;
    }
  }


  if (FUNC_1(&VAR_18.Properties, VAR_19, VAR_0) != VAR_2)
  {

    FUNC_6("Incorrect stream properties");

    return VAR_1;
  }
  VAR_18.Probs = (CProb *)FUNC_5(FUNC_2(&VAR_18.Properties) * sizeof(CProb));

  if (VAR_13 == 0)
    VAR_14 = 0;
  else
  {
    if (VAR_13 > *VAR_10)
      VAR_14 = 0;
    else
      VAR_14 = VAR_9;
  }

  if (VAR_16 == 0)
    VAR_17 = 0;
  else
  {
    if ((VAR_16+VAR_6) > VAR_8 )
      VAR_17 = 0;
    else
      VAR_17 = VAR_7 + VAR_6;
  }

  if (VAR_18.Probs == 0
    || (VAR_14 == 0 && VAR_13 != 0)
    || (VAR_17 == 0 && VAR_16 != 0)
    )
  {
    FUNC_4(VAR_18.Probs);

    FUNC_6("%s\n", VAR_4);

    return VAR_1;
  }


  {
    SizeT VAR_24;
    SizeT VAR_25;
    VAR_20 = FUNC_0(&VAR_18,
      VAR_17, VAR_16, &VAR_24,
      VAR_14, VAR_13, &VAR_25);
    if (VAR_20 != 0)
    {

      FUNC_6("\nDecoding error = %d\n", VAR_20);

      VAR_20 = 1;
    }
    else
    {
      *VAR_10 = VAR_25;
    }
  }

  FUNC_4(VAR_18.Probs);
  return VAR_20;
}
