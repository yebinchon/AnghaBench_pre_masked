
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int VAR_1 ;
 int FUNC_8 (char*,...) ;
 char* FUNC_9 (int ) ;

__attribute__((used)) static char *
FUNC_10(const char *VAR_2)
{
 PGresult *VAR_3;
 char *VAR_4;

 VAR_3 = FUNC_1(VAR_1, VAR_2);

 if (FUNC_7(VAR_3) != VAR_0)
  FUNC_8("error running query (%s) in source server: %s",
     VAR_2, FUNC_6(VAR_3));


 if (FUNC_4(VAR_3) != 1 || FUNC_5(VAR_3) != 1 || FUNC_2(VAR_3, 0, 0))
  FUNC_8("unexpected result set from query");

 VAR_4 = FUNC_9(FUNC_3(VAR_3, 0, 0));

 FUNC_0(VAR_3);

 return VAR_4;
}
