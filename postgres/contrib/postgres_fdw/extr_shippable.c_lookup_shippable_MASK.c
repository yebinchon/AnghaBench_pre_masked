
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int shippable_extensions; } ;
typedef TYPE_1__ PgFdwRelationInfo ;
typedef int Oid ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static bool
FUNC_3(Oid VAR_0, Oid VAR_1, PgFdwRelationInfo *VAR_2)
{
 Oid VAR_3;





 VAR_3 = FUNC_1(VAR_1, VAR_0);


 if (FUNC_0(VAR_3) &&
  FUNC_2(VAR_2->shippable_extensions, VAR_3))
  return 1;

 return 0;
}
