
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oprcode; } ;
typedef int Operator ;
typedef int Oid ;
typedef TYPE_1__* Form_pg_operator ;


 int FUNC_0 (int ) ;

Oid
FUNC_1(Operator VAR_0)
{
 Form_pg_operator VAR_1 = (Form_pg_operator) FUNC_0(VAR_0);

 return VAR_1->oprcode;
}
