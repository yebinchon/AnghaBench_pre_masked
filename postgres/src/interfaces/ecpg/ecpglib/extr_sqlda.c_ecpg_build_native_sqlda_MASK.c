
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sqlvar_struct {int dummy; } ;
struct sqlda_struct {int sqld; int sqln; int sqldabc; TYPE_2__* sqlvar; int sqldaid; } ;
typedef enum COMPAT_MODE { ____Placeholder_COMPAT_MODE } COMPAT_MODE ;
struct TYPE_3__ {int data; int length; } ;
struct TYPE_4__ {TYPE_1__ sqlname; int sqltype; } ;
typedef int PGresult ;


 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (long,int) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (struct sqlda_struct*,int ,long) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int) ;
 long FUNC_8 (int *,int,int) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (char*) ;

struct sqlda_struct *
FUNC_11(int VAR_0, PGresult *VAR_1, int VAR_2, enum COMPAT_MODE VAR_3)
{
 struct sqlda_struct *VAR_4;
 long VAR_5;
 int VAR_6;

 VAR_5 = FUNC_8(VAR_1, VAR_2, VAR_3);
 VAR_4 = (struct sqlda_struct *) FUNC_3(VAR_5, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_5(VAR_4, 0, VAR_5);

 FUNC_6(VAR_4->sqldaid, "SQLDA  ");
 VAR_4->sqld = VAR_4->sqln = FUNC_2(VAR_1);
 FUNC_4("ecpg_build_native_sqlda on line %d sqld = %d\n", VAR_0, VAR_4->sqld);
 VAR_4->sqldabc = sizeof(struct sqlda_struct) + (VAR_4->sqld - 1) * sizeof(struct sqlvar_struct);

 for (VAR_6 = 0; VAR_6 < VAR_4->sqld; VAR_6++)
 {
  char *VAR_7;

  VAR_4->sqlvar[VAR_6].sqltype = FUNC_7(FUNC_1(VAR_1, VAR_6), VAR_3);
  VAR_7 = FUNC_0(VAR_1, VAR_6);
  VAR_4->sqlvar[VAR_6].sqlname.length = FUNC_10(VAR_7);
  FUNC_9(VAR_4->sqlvar[VAR_6].sqlname.data, VAR_7);
 }

 return VAR_4;
}
