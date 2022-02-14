
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int attrs; scalar_t__ attr; int color; } ;
typedef TYPE_1__ RConsCanvas ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,void*) ;

__attribute__((used)) static void FUNC_2(RConsCanvas *VAR_0, int VAR_1, int VAR_2) {
 if (!VAR_0->color) {
  return;
 }
 int VAR_3;
 FUNC_1 (VAR_0->attrs, VAR_1, (void *)VAR_0->attr);
 for (VAR_3 = 1; VAR_3 < VAR_2; VAR_3++) {
  FUNC_0 (VAR_0->attrs, VAR_1 + VAR_3);
 }
}
