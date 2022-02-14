
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* model; } ;
struct TYPE_4__ {char* cmd; char** filter; int n_filter; } ;
typedef TYPE_2__ RPanel ;
typedef int RCore ;


 int FUNC_0 (int *,char*) ;
 char* FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

char *FUNC_4(RCore *VAR_0, RPanel *VAR_1) {
 char *VAR_2 = FUNC_1 (VAR_1->model->cmd, FUNC_3 (VAR_1->model->cmd) + 1024);
 if (!VAR_1->model->filter) {
  return VAR_2;
 }
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_1->model->n_filter; VAR_3++) {
  char *VAR_4 = VAR_1->model->filter[VAR_3];
  if (FUNC_3 (VAR_4) > 1024) {
   (void)FUNC_0 (VAR_0, "filter is too big.");
   return VAR_2;
  }
  FUNC_2 (VAR_2, "~");
  FUNC_2 (VAR_2, VAR_4);
 }
 return VAR_2;
}
