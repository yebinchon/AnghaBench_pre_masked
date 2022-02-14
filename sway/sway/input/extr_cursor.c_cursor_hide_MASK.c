
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_cursor {int hidden; TYPE_1__* seat; int cursor; } ;
struct TYPE_2__ {int wlr_seat; } ;


 int FUNC_0 (int ,int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct sway_cursor *VAR_0) {
 FUNC_0(VAR_0->cursor, ((void*)0), 0, 0, 0, 0, 0, 0);
 VAR_0->hidden = 1;
 FUNC_1(VAR_0->seat->wlr_seat);
}
