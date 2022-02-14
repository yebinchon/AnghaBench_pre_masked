
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ name; scalar_t__ group; } ;
typedef TYPE_1__ key_type ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2(key_type *VAR_0)
{
 if (VAR_0->group) {
  FUNC_0(VAR_0->group);
 }
 if (VAR_0->name) {
  FUNC_0(VAR_0->name);
 }
 FUNC_1(VAR_0, 0, sizeof(key_type));
}
