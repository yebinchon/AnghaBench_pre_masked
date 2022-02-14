
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* model; } ;
struct TYPE_4__ {char* readOnly; } ;
typedef TYPE_2__ RPanel ;


 int FUNC_0 (char*) ;

void FUNC_1(RPanel *VAR_0, char *VAR_1) {
 FUNC_0 (VAR_0->model->readOnly);
 VAR_0->model->readOnly = VAR_1;
}
