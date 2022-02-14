
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ enum_oid; } ;
typedef TYPE_1__ EnumItem ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const EnumItem *VAR_2 = (const EnumItem *) VAR_0;
 const EnumItem *VAR_3 = (const EnumItem *) VAR_1;

 if (VAR_2->enum_oid < VAR_3->enum_oid)
  return -1;
 else if (VAR_2->enum_oid > VAR_3->enum_oid)
  return 1;
 else
  return 0;
}
