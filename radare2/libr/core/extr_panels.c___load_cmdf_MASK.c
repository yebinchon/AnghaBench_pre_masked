
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* model; } ;
struct TYPE_4__ {int cmd; } ;
typedef TYPE_2__ RPanel ;
typedef int RCore ;


 char* FUNC_0 (int *,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,int ) ;
 int FUNC_3 (char*,char*) ;

char *FUNC_4(RCore *VAR_0, RPanel *VAR_1, char *VAR_2, char *VAR_3) {
 char *VAR_4 = ((void*)0);
 char *VAR_5 = FUNC_0 (VAR_0, VAR_2);
 if (VAR_5) {
  VAR_1->model->cmd = FUNC_3 (VAR_3, VAR_5);
  VAR_4 = FUNC_2 (VAR_0, VAR_1->model->cmd);
  FUNC_1 (VAR_5);
 }
 return VAR_4;
}
