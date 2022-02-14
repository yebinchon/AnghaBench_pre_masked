
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int fn_oid; } ;
struct TYPE_4__ {int eq_opr_finfo; TYPE_3__ cast_func_finfo; } ;
typedef TYPE_1__ RI_CompareHashEntry ;
typedef int Oid ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int ,int ) ;

__attribute__((used)) static bool
FUNC_7(Oid VAR_1, Oid VAR_2,
       Datum VAR_3, Datum VAR_4)
{
 RI_CompareHashEntry *VAR_5 = FUNC_6(VAR_1, VAR_2);


 if (FUNC_5(VAR_5->cast_func_finfo.fn_oid))
 {
  VAR_3 = FUNC_3(&VAR_5->cast_func_finfo,
         VAR_3,
         FUNC_4(-1),
         FUNC_0(0));
  VAR_4 = FUNC_3(&VAR_5->cast_func_finfo,
         VAR_4,
         FUNC_4(-1),
         FUNC_0(0));
 }
 return FUNC_1(FUNC_2(&VAR_5->eq_opr_finfo,
            VAR_0,
            VAR_3, VAR_4));
}
