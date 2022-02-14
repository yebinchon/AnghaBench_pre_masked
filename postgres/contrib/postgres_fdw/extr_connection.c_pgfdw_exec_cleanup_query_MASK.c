
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TimestampTz ;
typedef int PGresult ;
typedef int PGconn ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int *,int ,int **) ;
 int FUNC_6 (int ,int *,int *,int,char const*) ;

__attribute__((used)) static bool
FUNC_7(PGconn *VAR_2, const char *VAR_3, bool VAR_4)
{
 PGresult *VAR_5 = ((void*)0);
 TimestampTz VAR_6;







 VAR_6 = FUNC_4(FUNC_0(), 30000);





 if (!FUNC_3(VAR_2, VAR_3))
 {
  FUNC_6(VAR_1, ((void*)0), VAR_2, 0, VAR_3);
  return 0;
 }


 if (FUNC_5(VAR_2, VAR_6, &VAR_5))
  return 0;


 if (FUNC_2(VAR_5) != VAR_0)
 {
  FUNC_6(VAR_1, VAR_5, VAR_2, 1, VAR_3);
  return VAR_4;
 }
 FUNC_1(VAR_5);

 return 1;
}
