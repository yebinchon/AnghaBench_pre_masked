
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int attrs; int color; } ;
typedef TYPE_1__ RConsCanvas ;


 char const* FUNC_0 (int ,int,int *) ;

__attribute__((used)) static const char *FUNC_1(RConsCanvas *VAR_0, int VAR_1) {
 if (!VAR_0->color) {
  return ((void*)0);
 }
 return FUNC_0 (VAR_0->attrs, VAR_1, ((void*)0));
}
