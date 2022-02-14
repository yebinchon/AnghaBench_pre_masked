
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sqlvar_compat {char* sqlname; int sqltypelen; int sqlxid; int sqltype; } ;
struct sqlda_compat {int sqld; long desc_occ; struct sqlvar_compat* sqlvar; } ;
typedef enum COMPAT_MODE { ____Placeholder_COMPAT_MODE } COMPAT_MODE ;
typedef int PGresult ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (long,int) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (struct sqlda_compat*,int ,long) ;
 long FUNC_7 (int *,int,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (char*,int ) ;
 scalar_t__ FUNC_10 (char*) ;

struct sqlda_compat *
FUNC_11(int VAR_0, PGresult *VAR_1, int VAR_2, enum COMPAT_MODE VAR_3)
{
 struct sqlda_compat *VAR_4;
 struct sqlvar_compat *VAR_5;
 char *VAR_6;
 long VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_7 = FUNC_7(VAR_1, VAR_2, VAR_3);
 VAR_4 = (struct sqlda_compat *) FUNC_4(VAR_7, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_6(VAR_4, 0, VAR_7);
 VAR_5 = (struct sqlvar_compat *) (VAR_4 + 1);
 VAR_8 = FUNC_3(VAR_1);
 VAR_6 = (char *) (VAR_5 + VAR_8);

 VAR_4->sqld = VAR_8;
 FUNC_5("ecpg_build_compat_sqlda on line %d sqld = %d\n", VAR_0, VAR_8);
 VAR_4->desc_occ = VAR_7;
 VAR_4->sqlvar = VAR_5;

 for (VAR_9 = 0; VAR_9 < VAR_4->sqld; VAR_9++)
 {
  VAR_4->sqlvar[VAR_9].sqltype = FUNC_8(FUNC_2(VAR_1, VAR_9), VAR_3);
  FUNC_9(VAR_6, FUNC_0(VAR_1, VAR_9));
  VAR_4->sqlvar[VAR_9].sqlname = VAR_6;
  VAR_6 += FUNC_10(VAR_4->sqlvar[VAR_9].sqlname) + 1;






  VAR_4->sqlvar[VAR_9].sqlxid = FUNC_2(VAR_1, VAR_9);
  VAR_4->sqlvar[VAR_9].sqltypelen = FUNC_1(VAR_1, VAR_9);
 }

 return VAR_4;
}
