
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* view; TYPE_1__* model; } ;
struct TYPE_11__ {int n_panels; int mode; } ;
struct TYPE_10__ {int refresh; } ;
struct TYPE_9__ {void* cmd; void* title; } ;
typedef int RStrBuf ;
typedef TYPE_3__ RPanels ;
typedef TYPE_4__ RPanel ;




 TYPE_4__* FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 char** VAR_0 ;
 char** VAR_1 ;
 char** VAR_2 ;
 int FUNC_2 (int *,char const*,char const**) ;
 void* FUNC_3 (void*,char const*) ;
 scalar_t__ FUNC_4 (void*,char*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;

void FUNC_7(RPanels *VAR_3) {
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_3->n_panels; VAR_4++) {
  RPanel *VAR_5 = FUNC_0 (VAR_3, VAR_4);
  if (FUNC_4 (VAR_5->model->cmd, "Help")) {
   RStrBuf *VAR_6 = FUNC_6 (((void*)0));
   const char *VAR_7, *VAR_8;
   const char **VAR_9;
   switch (VAR_3->mode) {
    case 129:
     VAR_7 = "Panels Window mode help";
     VAR_8 = "Window Mode Help";
     VAR_9 = VAR_1;
     break;
    case 128:
     VAR_7 = "Panels Zoom mode help";
     VAR_8 = "Zoom Mode Help";
     VAR_9 = VAR_2;
     break;
    default:
     VAR_7 = "Visual Ascii Art Panels";
     VAR_8 = "Help";
     VAR_9 = VAR_0;
     break;
   }
   VAR_5->model->title = FUNC_3 (VAR_5->model->title, VAR_8);
   VAR_5->model->cmd = FUNC_3 (VAR_5->model->cmd, VAR_8);
   FUNC_2 (VAR_6, VAR_7, VAR_9);
   if (!VAR_6) {
    return;
   }
   FUNC_1 (VAR_5, FUNC_5 (VAR_6));
   VAR_5->view->refresh = 1;
  }
 }
}
