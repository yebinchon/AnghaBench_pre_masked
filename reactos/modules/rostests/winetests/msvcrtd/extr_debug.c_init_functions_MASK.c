
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HMODULE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*) ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static BOOL FUNC_4(void)
{
  HMODULE VAR_4 = FUNC_1("msvcrtd.dll");

  if (!VAR_4) {
    FUNC_3("LoadLibraryA failed to load msvcrtd.dll with GLE=%d\n", FUNC_0());
    return VAR_0;
  }

  if (sizeof(void *) > sizeof(int))
  {
      FUNC_2(VAR_3, "??2@YAPEAX_KHPEBDH@Z");
      FUNC_2(VAR_2, "??3@YAXPEAX@Z");
  }
  else
  {
      FUNC_2(VAR_3, "??2@YAPAXIHPBDH@Z");
      FUNC_2(VAR_2, "??3@YAXPAX@Z");
  }

  if (VAR_3 == ((void*)0))
    return VAR_0;

  return VAR_1;
}
