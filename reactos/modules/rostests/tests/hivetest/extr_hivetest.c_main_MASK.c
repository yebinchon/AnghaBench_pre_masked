
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 void* FUNC_6 (int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_7 (void*,char*,int,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (char*) ;

int FUNC_11(int VAR_4, char* VAR_5[])
{
  char VAR_6[10];
  DWORD VAR_7;

  FUNC_0();
  VAR_0 = FUNC_6(VAR_2);
  VAR_1 = FUNC_6(VAR_3);
  while(1)
  {
    FUNC_10("choose test :\n");
    FUNC_10("  0 = Exit\n");
    FUNC_10("  1 = Create key\n");
    FUNC_10("  2 = Delete key\n");
    FUNC_10("  3 = Enumerate key\n");
    FUNC_10("  4 = Set value (REG_SZ)\n");
    FUNC_10("  5 = Set value (REG_DWORD)\n");
    FUNC_10("  6 = Delete value\n");
    FUNC_10("  7 = Enumerate value\n");
    FUNC_7(VAR_0, VAR_6, 3, &VAR_7, ((void*)0)) ;
    switch (VAR_6[0])
    {
     case '0':
      return(0);

     case '1':
      FUNC_1();
      break;

     case '2':
      FUNC_2();
      break;

     case '3':
      FUNC_4();
      break;

     case '4':
      FUNC_8();
      break;

     case '5':
      FUNC_9();
      break;

     case '6':
      FUNC_3();
      break;

     case '7':
      FUNC_5();
      break;
    }
  }
  return(0);
}
