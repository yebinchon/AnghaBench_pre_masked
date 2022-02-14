
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int errbuf ;
typedef int TimestampTz ;
typedef int PGresult ;
typedef int PGconn ;
typedef int PGcancel ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;
 int VAR_1 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (int *,int ,int **) ;

__attribute__((used)) static bool
FUNC_10(PGconn *VAR_2)
{
 PGcancel *VAR_3;
 char VAR_4[256];
 PGresult *VAR_5 = ((void*)0);
 TimestampTz VAR_6;





 VAR_6 = FUNC_5(FUNC_0(), 30000);





 if ((VAR_3 = FUNC_4(VAR_2)))
 {
  if (!FUNC_1(VAR_3, VAR_4, sizeof(VAR_4)))
  {
   FUNC_6(VAR_1,
     (FUNC_7(VAR_0),
      FUNC_8("could not send cancel request: %s",
       VAR_4)));
   FUNC_3(VAR_3);
   return 0;
  }
  FUNC_3(VAR_3);
 }


 if (FUNC_9(VAR_2, VAR_6, &VAR_5))
  return 0;
 FUNC_2(VAR_5);

 return 1;
}
