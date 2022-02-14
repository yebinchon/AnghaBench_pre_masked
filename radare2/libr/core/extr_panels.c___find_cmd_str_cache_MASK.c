
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* model; } ;
struct TYPE_4__ {char* cmdStrCache; scalar_t__ cache; } ;
typedef TYPE_2__ RPanel ;
typedef int RCore ;



char *FUNC_0(RCore *VAR_0, RPanel* VAR_1) {
 if (VAR_1->model->cache && VAR_1->model->cmdStrCache) {
  return VAR_1->model->cmdStrCache;
 }
 return ((void*)0);
}
