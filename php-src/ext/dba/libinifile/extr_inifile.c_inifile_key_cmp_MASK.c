
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ name; scalar_t__ group; } ;
typedef TYPE_1__ key_type ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(const key_type *VAR_0, const key_type *VAR_1)
{
 FUNC_0(VAR_0->group && VAR_0->name && VAR_1->group && VAR_1->name);

 if (!FUNC_1(VAR_0->group, VAR_1->group)) {
  if (!FUNC_1(VAR_0->name, VAR_1->name)) {
   return 0;
  } else {
   return 1;
  }
 } else {
  return 2;
 }
}
