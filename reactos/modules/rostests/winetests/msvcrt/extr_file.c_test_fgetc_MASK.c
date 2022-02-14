
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* FUNC_0 (char*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10( void )
{
  char* VAR_0;
  FILE *VAR_1;
  int VAR_2=0xe0, VAR_3;

  VAR_0=FUNC_0(".","wne");
  VAR_1 = FUNC_3(VAR_0,"w+");
  FUNC_4(VAR_2, VAR_1);
  FUNC_4(VAR_2, VAR_1);
  FUNC_7(VAR_1);
  VAR_3 = FUNC_2(VAR_1);
  FUNC_6(VAR_2 == VAR_3, "First fgetc expected %x got %x\n", VAR_2, VAR_3);
  VAR_3 = FUNC_2(VAR_1);
  FUNC_6(VAR_2 == VAR_3, "Second fgetc expected %x got %x\n", VAR_2, VAR_3);
  FUNC_1(VAR_1);
  VAR_1 = FUNC_3(VAR_0,"wt");
  FUNC_4('\n', VAR_1);
  FUNC_1(VAR_1);
  VAR_1 = FUNC_3(VAR_0,"wt");
  FUNC_8(VAR_1, ((void*)0));
  VAR_3 = FUNC_2(VAR_1);
  FUNC_6(VAR_3 == -1, "Unbuffered fgetc in text mode must failed on \\r\\n\n");
  FUNC_1(VAR_1);
  FUNC_9(VAR_0);
  FUNC_5(VAR_0);
}
