
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int str_handle_lines_t ;
typedef scalar_t__ pid_t ;
typedef int RDPCLIENT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char* const,char* const*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int*) ;
 int FUNC_7 (int,char*,int) ;
 int FUNC_8 (int *,char*,char**,int ,void*) ;
 int FUNC_9 (char*) ;

BOOL
FUNC_10(RDPCLIENT * VAR_2, char *const VAR_3[], str_handle_lines_t VAR_4, void *VAR_5)
{
 pid_t VAR_6;
 int VAR_7[2];
 int VAR_8 = 1;
 char VAR_9[256];
 char *VAR_10 = ((void*)0);

 if (FUNC_6(VAR_7) < 0)
 {
  FUNC_5("pipe");
  return VAR_0;
 }

 if ((VAR_6 = FUNC_4()) < 0)
 {
  FUNC_5("fork");
  return VAR_0;
 }


 if (VAR_6 == 0)
 {

  FUNC_1(VAR_7[0]);


  FUNC_2(VAR_7[1], 1);
  FUNC_2(VAR_7[1], 2);


  FUNC_3(VAR_3[0], VAR_3);
  FUNC_5("Error executing child");
  FUNC_0(128);
 }


 FUNC_1(VAR_7[1]);
 while (VAR_8 > 0)
 {
  VAR_8 = FUNC_7(VAR_7[0], VAR_9, 255);
  VAR_9[VAR_8] = '\0';
  FUNC_8(VAR_2, VAR_9, &VAR_10, VAR_4, VAR_5);
 }
 FUNC_9(VAR_10);

 return VAR_1;
}
