
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int * PVOID ;
typedef scalar_t__ HANDLE ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int,int ,int *,int ,int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int *,int ,int ,int,int *) ;
 int VAR_1 ;
 int FUNC_3 (int *,int,char) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;
 scalar_t__ VAR_4 ;
 int * FUNC_5 (scalar_t__,int ,int ,int ,int) ;
 int VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int *,char*) ;

int FUNC_10(int VAR_6, char* VAR_7[])
{
  HANDLE VAR_8;
  HANDLE VAR_9;
  PVOID VAR_10;

  FUNC_8("Section Test\n");

  VAR_8 = FUNC_1(FUNC_7("sectest.txt"),
       VAR_2 | VAR_3,
       0,
       ((void*)0),
       VAR_0,
       0,
       0);
  if (VAR_8 == VAR_4)
    {
      FUNC_8("Failed to create file (err=%ld)", FUNC_4());
      return 1;
    }

  VAR_9 = FUNC_2(VAR_8,
         ((void*)0),
         VAR_5,
         0,
         4096,
         ((void*)0));
  if (VAR_9 == ((void*)0))
    {
      FUNC_8("Failed to create section (err=%ld)", FUNC_4());
      return 1;
    }

  FUNC_8("Mapping view of section\n");
  VAR_10 = FUNC_5(VAR_9,
         VAR_1,
         0,
         0,
         4096);
  FUNC_8("BaseAddress %x\n", (UINT) VAR_10);
  if (VAR_10 == ((void*)0))
    {
      FUNC_8("Failed to map section (%ld)\n", FUNC_4());
      return 1;
    }

  FUNC_8("Clearing section\n");
  FUNC_3(VAR_10, 4096, ' ');
  FUNC_8("Copying test data to section\n");
  FUNC_9(VAR_10, "test data");

  if (!FUNC_6(VAR_10))
    {
      FUNC_8("Failed to unmap view of file (%ld)\n", FUNC_4());
      return 1;
    }

  if (!FUNC_0(VAR_8))
    {
      FUNC_8("Failed to close file (%ld)\n", FUNC_4());
      return 1;
    }

  return 0;
}
