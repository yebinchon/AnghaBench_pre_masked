
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ relkind; scalar_t__ relpersistence; } ;
typedef scalar_t__ Oid ;
typedef TYPE_1__* Form_pg_class ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool
FUNC_1(Oid VAR_3, Form_pg_class VAR_4)
{
 return VAR_4->relkind == VAR_1 &&
  !FUNC_0(VAR_3) &&
  VAR_4->relpersistence == VAR_2 &&
  VAR_3 >= VAR_0;
}
