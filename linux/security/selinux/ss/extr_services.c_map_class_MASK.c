
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct selinux_map {size_t size; TYPE_1__* mapping; } ;
struct TYPE_2__ {size_t value; } ;


 size_t VAR_0 ;

__attribute__((used)) static u16 FUNC_0(struct selinux_map *VAR_1, u16 VAR_2)
{
 u16 VAR_3;

 for (VAR_3 = 1; VAR_3 < VAR_1->size; VAR_3++) {
  if (VAR_1->mapping[VAR_3].value == VAR_2)
   return VAR_3;
 }

 return VAR_0;
}
