
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int ue_lcount; int ue_bot; int ue_top; int ue_size; } ;
typedef TYPE_3__ u_entry_T ;
typedef int linenr_T ;
struct TYPE_6__ {int ml_line_count; } ;
struct TYPE_9__ {int b_u_synced; TYPE_2__* b_u_newhead; TYPE_1__ b_ml; } ;
struct TYPE_7__ {TYPE_3__* uh_getbot_entry; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 TYPE_5__* VAR_1 ;
 TYPE_3__* FUNC_2 () ;

__attribute__((used)) static void
FUNC_3()
{
    u_entry_T *VAR_2;
    linenr_T VAR_3;

    VAR_2 = FUNC_2();
    if (VAR_2 == ((void*)0))
 return;

    VAR_2 = VAR_1->b_u_newhead->uh_getbot_entry;
    if (VAR_2 != ((void*)0))
    {





 VAR_3 = VAR_1->b_ml.ml_line_count - VAR_2->ue_lcount;
 VAR_2->ue_bot = VAR_2->ue_top + VAR_2->ue_size + 1 + VAR_3;
 if (VAR_2->ue_bot < 1 || VAR_2->ue_bot > VAR_1->b_ml.ml_line_count)
 {
     FUNC_0(FUNC_1("E440: undo line missing"));
     VAR_2->ue_bot = VAR_2->ue_top + 1;



 }

 VAR_1->b_u_newhead->uh_getbot_entry = ((void*)0);
    }

    VAR_1->b_u_synced = VAR_0;
}
