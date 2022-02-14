
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;
typedef int PGconn ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char const*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char const*) ;

bool
FUNC_6(PGconn *VAR_1, const char *VAR_2, bool VAR_3)
{
 PGresult *VAR_4;
 bool VAR_5;

 if (VAR_3)
  FUNC_5("%s\n", VAR_2);

 FUNC_4(VAR_1);
 VAR_4 = FUNC_1(VAR_1, VAR_2);
 FUNC_3();

 VAR_5 = (VAR_4 && FUNC_2(VAR_4) == VAR_0);

 if (VAR_4)
  FUNC_0(VAR_4);

 return VAR_5;
}
