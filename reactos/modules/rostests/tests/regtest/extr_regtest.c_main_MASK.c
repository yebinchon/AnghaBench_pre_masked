
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int FUNC_0 () ;
 void* FUNC_1 (int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_2 (void*,char*,int,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;

int FUNC_13(int VAR_4, char* VAR_5[])
{
 char VAR_6[10];
 DWORD VAR_7;

  FUNC_0();
  VAR_0 = FUNC_1(VAR_2);
  VAR_1 = FUNC_1(VAR_3);
  while(1)
  {
    FUNC_3("choose test :\n");
    FUNC_3("  0=Exit\n");
    FUNC_3("  1=Ntxxx read functions\n");
    FUNC_3("  2=Ntxxx write functions : volatile keys\n");
    FUNC_3("  3=Ntxxx write functions : non volatile keys\n");
    FUNC_3("  4=Regxxx functions\n");
    FUNC_3("  5=FlushKey \n");
    FUNC_3("  6=Registry link create test\n");
    FUNC_3("  7=Registry link delete test\n");
    FUNC_3("  8=Not available\n");
    FUNC_3("  9=Ntxx read tcp/ip key test\n");
    FUNC_2(VAR_0, VAR_6, 3, &VAR_7, ((void*)0)) ;
    switch (VAR_6[0])
    {
     case '0':
      return(0);
     case '1':
      FUNC_4();
      break;
     case '2':
      FUNC_5();
      break;
     case '3':
      FUNC_6();
      break;
     case '4':
      FUNC_7();
      break;
     case '5':
      FUNC_8();
      break;
     case '6':
      FUNC_9();
      break;
     case '7':
      FUNC_10();
      break;





     case '9':
      FUNC_12();
      break;
    }
  }
  return 0;
}
