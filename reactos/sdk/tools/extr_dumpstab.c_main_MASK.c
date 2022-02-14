
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_8__ {scalar_t__ e_magic; long e_lfanew; } ;
struct TYPE_7__ {int SizeOfOptionalHeader; } ;
struct TYPE_6__ {int ImageBase; } ;
typedef scalar_t__ PIMAGE_SECTION_HEADER ;
typedef TYPE_1__* PIMAGE_OPTIONAL_HEADER ;
typedef TYPE_2__* PIMAGE_FILE_HEADER ;
typedef TYPE_3__* PIMAGE_DOS_HEADER ;


 scalar_t__ FUNC_0 (void*,TYPE_2__*,scalar_t__,int *,void**,int *,void**) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,void*,int ,void*,int ,TYPE_2__*,scalar_t__) ;
 int FUNC_2 (int) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (char*,size_t*) ;
 int FUNC_8 (char*) ;
 int VAR_1 ;

int FUNC_9(int VAR_2, char* VAR_3[])
{
  PIMAGE_DOS_HEADER VAR_4;
  PIMAGE_FILE_HEADER VAR_5;
  PIMAGE_OPTIONAL_HEADER VAR_6;
  PIMAGE_SECTION_HEADER VAR_7;
  ULONG VAR_8;
  void *VAR_9;
  ULONG VAR_10;
  void *VAR_11;
  ULONG VAR_12;
  char* VAR_13;
  size_t VAR_14;
  void *VAR_15;

  if (2 != VAR_2)
    {
      FUNC_5(VAR_1, "Usage: dumpstabs <exefile>\n");
      FUNC_4(1);
    }

  VAR_13 = FUNC_3(VAR_3[1]);

  VAR_15 = FUNC_7 ( VAR_13, &VAR_14 );
  if ( !VAR_15 )
  {
    FUNC_5 ( VAR_1, "An error occured loading '%s'\n", VAR_13 );
    FUNC_4(1);
  }


  VAR_4 = (PIMAGE_DOS_HEADER) VAR_15;
  if (VAR_4->e_magic != VAR_0 || VAR_4->e_lfanew == 0L)
    {
      FUNC_8("Input file is not a PE image.\n");
      FUNC_6(VAR_15);
      FUNC_4(1);
    }



  VAR_5 = (PIMAGE_FILE_HEADER)((char *) VAR_15 + VAR_4->e_lfanew + sizeof(ULONG));


  FUNC_2(sizeof(ULONG) == 4);
  VAR_6 = (PIMAGE_OPTIONAL_HEADER)(VAR_5 + 1);
  VAR_8 = VAR_6->ImageBase;


  VAR_7 = (PIMAGE_SECTION_HEADER)((char *) VAR_6 + VAR_5->SizeOfOptionalHeader);

  if (FUNC_0(VAR_15, VAR_5, VAR_7, &VAR_10, &VAR_9,
                  &VAR_12, &VAR_11))
    {
      FUNC_6(VAR_15);
      FUNC_4(1);
    }

  FUNC_1( VAR_10, VAR_9, VAR_12, VAR_11,
                VAR_8, VAR_5, VAR_7);

  FUNC_6(VAR_15);

  return 0;
}
