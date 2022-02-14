
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* model; } ;
struct TYPE_6__ {void* directionCb; scalar_t__ readOnly; scalar_t__ cmdStrCache; scalar_t__ cache; int cmd; } ;
typedef TYPE_2__ RPanel ;
typedef int RCore ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*) ;

void FUNC_2(RCore *VAR_12, RPanel *VAR_13) {
 if (!VAR_13->model->cmd) {
  return;
 }
 if (FUNC_0 (VAR_13, VAR_1)) {
  VAR_13->model->directionCb = VAR_7;
  return;
 }
 if ((VAR_13->model->cache && VAR_13->model->cmdStrCache) || VAR_13->model->readOnly) {
  VAR_13->model->directionCb = VAR_5;
  return;
 }
 if (FUNC_0 (VAR_13, VAR_4)) {
  VAR_13->model->directionCb = VAR_11;
 } else if (FUNC_0 (VAR_13, VAR_0)) {
  VAR_13->model->directionCb = VAR_6;
 } else if (FUNC_0 (VAR_13, VAR_3)) {
  VAR_13->model->directionCb = VAR_10;
 } else if (FUNC_0 (VAR_13, VAR_2)) {
  VAR_13->model->directionCb = VAR_8;
 } else if (FUNC_1 (VAR_12, VAR_13)) {
  VAR_13->model->directionCb = VAR_9;
 } else {
  VAR_13->model->directionCb = VAR_5;
 }
}
