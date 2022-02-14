
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int Type ;
struct TYPE_2__ {int typcollation; } ;
typedef int Oid ;
typedef TYPE_1__* Form_pg_type ;


 scalar_t__ FUNC_0 (int ) ;

Oid
FUNC_1(Type VAR_0)
{
 Form_pg_type VAR_1;

 VAR_1 = (Form_pg_type) FUNC_0(VAR_0);
 return VAR_1->typcollation;
}
