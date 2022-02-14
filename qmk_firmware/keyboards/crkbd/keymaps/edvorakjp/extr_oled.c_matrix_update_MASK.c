
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CharacterMatrix {int dirty; int display; } ;


 scalar_t__ FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(struct CharacterMatrix *VAR_0,
                   const struct CharacterMatrix *VAR_1) {
  if (FUNC_0(VAR_0->display, VAR_1->display, sizeof(VAR_0->display))) {
    FUNC_1(VAR_0->display, VAR_1->display, sizeof(VAR_0->display));
    VAR_0->dirty = 1;
  }
}
