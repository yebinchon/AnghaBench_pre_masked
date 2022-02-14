
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RawStmt ;
typedef int QueryEnvironment ;
typedef int Query ;
typedef int Oid ;
typedef int List ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 scalar_t__ VAR_0 ;
 int * FUNC_4 (int *,char const*,int *,int,int *) ;
 int * FUNC_5 (int *) ;

List *
FUNC_6(RawStmt *VAR_1, const char *VAR_2,
        Oid *VAR_3, int VAR_4,
        QueryEnvironment *VAR_5)
{
 Query *VAR_6;
 List *VAR_7;

 FUNC_3(VAR_2);




 if (VAR_0)
  FUNC_0();

 VAR_6 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4,
        VAR_5);

 if (VAR_0)
  FUNC_1("PARSE ANALYSIS STATISTICS");




 VAR_7 = FUNC_5(VAR_6);

 FUNC_2(VAR_2);

 return VAR_7;
}
