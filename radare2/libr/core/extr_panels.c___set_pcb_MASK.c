
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* model; } ;
struct TYPE_5__ {void* print_cb; int cmd; } ;
typedef TYPE_2__ RPanel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;

void FUNC_1(RPanel *VAR_14) {
 if (!VAR_14->model->cmd) {
  return;
 }
 if (FUNC_0 (VAR_14, VAR_2)) {
  VAR_14->model->print_cb = VAR_10;
  return;
 }
 if (FUNC_0 (VAR_14, VAR_5)) {
  VAR_14->model->print_cb = VAR_13;
  return;
 }
 if (FUNC_0 (VAR_14, VAR_4)) {
  VAR_14->model->print_cb = VAR_12;
  return;
 }
 if (FUNC_0 (VAR_14, VAR_0)) {
  VAR_14->model->print_cb = VAR_7;
  return;
 }
 if (FUNC_0 (VAR_14, VAR_3)) {
  VAR_14->model->print_cb = VAR_11;
  return;
 }
 if (FUNC_0 (VAR_14, VAR_6)) {
  VAR_14->model->print_cb = VAR_11;
  return;
 }
 if (FUNC_0 (VAR_14, VAR_1)) {
  VAR_14->model->print_cb = VAR_9;
  return;
 }
 VAR_14->model->print_cb = VAR_8;
}
