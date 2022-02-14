
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* model; } ;
struct TYPE_6__ {char* cmdStrCache; } ;
typedef TYPE_2__ RPanel ;
typedef int RCore ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*) ;

void FUNC_3(RCore *VAR_0, RPanel *VAR_1, char *VAR_2) {
 FUNC_2 (VAR_1->model->cmdStrCache);
 VAR_1->model->cmdStrCache = VAR_2;
 FUNC_0 (VAR_0, VAR_1);
 FUNC_1 (VAR_1);
}
