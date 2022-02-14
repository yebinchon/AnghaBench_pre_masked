
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_10__ {scalar_t__ dtype; int dno; } ;
struct TYPE_9__ {int * plan; } ;
typedef TYPE_1__ PLpgSQL_expr ;
typedef int PLpgSQL_execstate ;
typedef TYPE_2__ PLpgSQL_datum ;
typedef int Oid ;
typedef int Datum ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*,int ,int,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*,int*,int *,int *) ;
 int FUNC_4 (int *,TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_5(PLpgSQL_execstate *VAR_1, PLpgSQL_datum *VAR_2,
     PLpgSQL_expr *VAR_3)
{
 Datum VAR_4;
 bool VAR_5;
 Oid VAR_6;
 int32 VAR_7;







 if (VAR_3->plan == ((void*)0))
 {
  FUNC_4(VAR_1, VAR_3, 0, 1);
  if (VAR_2->dtype == VAR_0)
   FUNC_1(VAR_3, VAR_2->dno);
 }

 VAR_4 = FUNC_3(VAR_1, VAR_3, &VAR_5, &VAR_6, &VAR_7);
 FUNC_0(VAR_1, VAR_2, VAR_4, VAR_5, VAR_6, VAR_7);
 FUNC_2(VAR_1);
}
