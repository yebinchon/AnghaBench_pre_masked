
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {size_t ocg; int * name; int locked; int depth; int button_flags; } ;
typedef TYPE_3__ pdf_ocg_ui ;
struct TYPE_11__ {int * text; int locked; int selected; int depth; int type; } ;
typedef TYPE_4__ pdf_layer_config_ui ;
struct TYPE_12__ {TYPE_2__* ocg; } ;
typedef TYPE_5__ pdf_document ;
typedef int fz_context ;
struct TYPE_9__ {int num_ui_entries; TYPE_1__* ocgs; TYPE_3__* ui; } ;
struct TYPE_8__ {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;

void
FUNC_1(fz_context *VAR_1, pdf_document *VAR_2, int VAR_3, pdf_layer_config_ui *VAR_4)
{
 pdf_ocg_ui *VAR_5;

 if (!VAR_4)
  return;

 VAR_4->depth = 0;
 VAR_4->locked = 0;
 VAR_4->selected = 0;
 VAR_4->text = ((void*)0);
 VAR_4->type = 0;

 if (VAR_2 == ((void*)0) || VAR_2->ocg == ((void*)0))
  return;

 if (VAR_3 < 0 || VAR_3 >= VAR_2->ocg->num_ui_entries)
  FUNC_0(VAR_1, VAR_0, "Out of range UI entry selected");

 VAR_5 = &VAR_2->ocg->ui[VAR_3];
 VAR_4->type = VAR_5->button_flags;
 VAR_4->depth = VAR_5->depth;
 VAR_4->selected = VAR_2->ocg->ocgs[VAR_5->ocg].state;
 VAR_4->locked = VAR_5->locked;
 VAR_4->text = VAR_5->name;
}
