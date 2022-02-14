
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int num_values; int enum_values; } ;
typedef TYPE_1__ TypeCacheEnumData ;
struct TYPE_8__ {int enum_oid; } ;
typedef int Oid ;
typedef TYPE_2__ EnumItem ;


 TYPE_2__* FUNC_0 (TYPE_2__*,int ,int ,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static EnumItem *
FUNC_1(TypeCacheEnumData *VAR_1, Oid VAR_2)
{
 EnumItem VAR_3;


 if (VAR_1->num_values <= 0)
  return ((void*)0);

 VAR_3.enum_oid = VAR_2;
 return FUNC_0(&VAR_3, VAR_1->enum_values, VAR_1->num_values,
       sizeof(EnumItem), VAR_0);
}
