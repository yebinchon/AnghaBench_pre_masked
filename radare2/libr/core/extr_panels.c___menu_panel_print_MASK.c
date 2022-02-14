
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* model; TYPE_3__* view; } ;
struct TYPE_7__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_8__ {TYPE_2__ pos; } ;
struct TYPE_6__ {char* title; } ;
typedef TYPE_4__ RPanel ;
typedef int RConsCanvas ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,char*) ;
 char* FUNC_3 (char*,int,int,int,int) ;

void FUNC_4(RConsCanvas *VAR_0, RPanel *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5) {
 (void) FUNC_1 (VAR_0, VAR_1->view->pos.x + 2, VAR_1->view->pos.y + 2);
 char *VAR_6 = FUNC_3 (VAR_1->model->title, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_2 (VAR_0, VAR_6);
  FUNC_0 (VAR_6);
 } else {
  FUNC_2 (VAR_0, VAR_1->model->title);
 }
}
