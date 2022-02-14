
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int typebuf ;
typedef scalar_t__ pid_t ;
typedef int AuxProcType ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char**) ;


 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int * VAR_1 ;

 int VAR_2 ;


 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (char**) ;
 scalar_t__ FUNC_11 (int,char**) ;
 int FUNC_12 (char*,int,char*,int) ;

__attribute__((used)) static pid_t
FUNC_13(AuxProcType VAR_4)
{
 pid_t VAR_5;
 char *VAR_6[10];
 int VAR_7 = 0;
 char VAR_8[32];




 VAR_6[VAR_7++] = "postgres";






 FUNC_12(VAR_8, sizeof(VAR_8), "-x%d", VAR_4);
 VAR_6[VAR_7++] = VAR_8;

 VAR_6[VAR_7] = ((void*)0);
 FUNC_0(VAR_7 < FUNC_10(VAR_6));




 VAR_5 = FUNC_9();

 if (VAR_5 == 0)
 {
  FUNC_4();


  FUNC_2(0);


  FUNC_6(VAR_2);
  FUNC_5(VAR_1);
  VAR_1 = ((void*)0);

  FUNC_1(VAR_7, VAR_6);
  FUNC_3(0);
 }


 if (VAR_5 < 0)
 {

  int VAR_9 = VAR_3;

  VAR_3 = VAR_9;
  switch (VAR_4)
  {
   case 130:
    FUNC_7(VAR_0,
      (FUNC_8("could not fork startup process: %m")));
    break;
   case 132:
    FUNC_7(VAR_0,
      (FUNC_8("could not fork background writer process: %m")));
    break;
   case 131:
    FUNC_7(VAR_0,
      (FUNC_8("could not fork checkpointer process: %m")));
    break;
   case 128:
    FUNC_7(VAR_0,
      (FUNC_8("could not fork WAL writer process: %m")));
    break;
   case 129:
    FUNC_7(VAR_0,
      (FUNC_8("could not fork WAL receiver process: %m")));
    break;
   default:
    FUNC_7(VAR_0,
      (FUNC_8("could not fork process: %m")));
    break;
  }





  if (VAR_4 == 130)
   FUNC_3(1);
  return 0;
 }




 return VAR_5;
}
