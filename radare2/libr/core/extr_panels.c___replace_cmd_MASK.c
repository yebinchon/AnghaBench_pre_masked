
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_17__ ;


struct TYPE_20__ {int offset; int * panels; } ;
struct TYPE_19__ {TYPE_17__* model; } ;
struct TYPE_18__ {int type; void* cmd; void* title; } ;
typedef int RPanels ;
typedef TYPE_1__ RPanel ;
typedef TYPE_2__ RCore ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_17__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*,int,int) ;
 void* FUNC_10 (void*,char const*) ;

void FUNC_11(RCore *VAR_2, const char *VAR_3, const char *VAR_4) {
 RPanels *VAR_5 = VAR_2->panels;
 RPanel *VAR_6 = FUNC_3 (VAR_5);
 FUNC_2 (VAR_6);
 VAR_6->model = FUNC_0 (VAR_1);
 VAR_6->model->title = FUNC_10 (VAR_6->model->title, VAR_3);
 VAR_6->model->cmd = FUNC_10 (VAR_6->model->cmd, VAR_4);
 FUNC_4 (VAR_2, VAR_6, ((void*)0));
 FUNC_6 (VAR_2, VAR_6, VAR_2->offset);
 VAR_6->model->type = VAR_0;
 FUNC_5 (VAR_2, VAR_6);
 FUNC_7 (VAR_6);
 FUNC_8 (VAR_5, VAR_6);
 FUNC_1 (VAR_2, VAR_6);
 FUNC_9 (VAR_2, 0, 1);
}
