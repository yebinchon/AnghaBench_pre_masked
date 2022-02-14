
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int gs_eparam_t ;
typedef int gs_effect_t ;
struct TYPE_2__ {int cursor; scalar_t__ show_cursor; int texture; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int * FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void *VAR_3, gs_effect_t *VAR_4)
{
 FUNC_0(VAR_3);

 VAR_4 = FUNC_5(VAR_1);

 if (!VAR_2->texture)
  return;

 gs_eparam_t *VAR_5 = FUNC_2(VAR_4, "image");
 FUNC_4(VAR_5, VAR_2->texture);

 while (FUNC_3(VAR_4, "Draw")) {
  FUNC_1(VAR_2->texture, 0, 0, 0);
 }

 if (VAR_2->show_cursor) {
  VAR_4 = FUNC_5(VAR_0);

  while (FUNC_3(VAR_4, "Draw")) {
   FUNC_6(VAR_2->cursor);
  }
 }
}
