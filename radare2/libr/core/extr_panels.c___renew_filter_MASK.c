
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* model; } ;
struct TYPE_4__ {char** filter; scalar_t__ n_filter; } ;
typedef TYPE_2__ RPanel ;


 char** FUNC_0 (int,int) ;

void FUNC_1(RPanel *VAR_0, int VAR_1) {
 VAR_0->model->n_filter = 0;
 char **VAR_2 = FUNC_0 (sizeof (char *), VAR_1);
 if (!VAR_2) {
  VAR_0->model->filter = ((void*)0);
  return;
 }
 VAR_0->model->filter = VAR_2;
}
