
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int info; } ;
typedef TYPE_1__ DsoJsonObj ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;

DsoJsonObj * FUNC_2 () {
 DsoJsonObj *VAR_1 = FUNC_0 (sizeof (DsoJsonObj), 1);
 if (!VAR_1) return ((void*)0);
 VAR_1->info = FUNC_1 (VAR_0);
 return VAR_1;
}
