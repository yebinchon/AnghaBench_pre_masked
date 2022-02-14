
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * Type ;
struct TYPE_2__ {int oid; } ;
typedef int Oid ;
typedef TYPE_1__* Form_pg_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;

Oid
FUNC_2(Type VAR_1)
{
 if (VAR_1 == ((void*)0))
  FUNC_1(VAR_0, "typeTypeId() called with NULL type struct");
 return ((Form_pg_type) FUNC_0(VAR_1))->oid;
}
