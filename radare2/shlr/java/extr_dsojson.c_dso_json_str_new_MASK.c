
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int _str; } ;
struct TYPE_6__ {TYPE_1__ val; int info; } ;
typedef int DsoJsonStr ;
typedef TYPE_2__ DsoJsonObj ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (int ) ;

DsoJsonObj * FUNC_3 () {
 DsoJsonObj *VAR_1 = FUNC_1 ();
 if (!VAR_1) return ((void*)0);
 VAR_1->info = FUNC_2 (VAR_0);
 VAR_1->val._str = FUNC_0 (sizeof (DsoJsonStr), 1);
 return VAR_1;
}
