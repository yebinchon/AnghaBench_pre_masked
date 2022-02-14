
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ button_flags; size_t ocg; scalar_t__ locked; } ;
typedef TYPE_3__ pdf_ocg_ui ;
struct TYPE_10__ {TYPE_2__* ocg; } ;
typedef TYPE_4__ pdf_document ;
typedef int fz_context ;
struct TYPE_8__ {int num_ui_entries; TYPE_1__* ocgs; TYPE_3__* ui; } ;
struct TYPE_7__ {int state; int obj; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,TYPE_4__*,int ) ;
 int FUNC_1 (int *,int ,char*) ;

void FUNC_2(fz_context *VAR_3, pdf_document *VAR_4, int VAR_5)
{
 pdf_ocg_ui *VAR_6;
 int VAR_7;

 if (VAR_4 == ((void*)0) || VAR_4->ocg == ((void*)0))
  return;

 if (VAR_5 < 0 || VAR_5 >= VAR_4->ocg->num_ui_entries)
  FUNC_1(VAR_3, VAR_0, "Out of range UI entry toggled");

 VAR_6 = &VAR_4->ocg->ui[VAR_5];
 if (VAR_6->button_flags != VAR_2 &&
  VAR_6->button_flags != VAR_1)
  return;
 if (VAR_6->locked)
  return;

 VAR_7 = VAR_4->ocg->ocgs[VAR_6->ocg].state;

 if (VAR_6->button_flags == VAR_2)
  FUNC_0(VAR_3, VAR_4, VAR_4->ocg->ocgs[VAR_6->ocg].obj);

 VAR_4->ocg->ocgs[VAR_6->ocg].state = !VAR_7;
}
