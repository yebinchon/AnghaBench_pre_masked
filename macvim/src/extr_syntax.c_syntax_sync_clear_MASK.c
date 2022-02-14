
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ sp_syncing; } ;
struct TYPE_9__ {TYPE_2__* w_s; } ;
struct TYPE_7__ {int ga_len; } ;
struct TYPE_8__ {int * b_syn_linecont_pat; int * b_syn_linecont_prog; scalar_t__ b_syn_sync_linebreaks; scalar_t__ b_syn_sync_maxlines; scalar_t__ b_syn_sync_minlines; scalar_t__ b_syn_sync_flags; TYPE_1__ b_syn_patterns; } ;


 TYPE_5__* FUNC_0 (TYPE_2__*) ;
 TYPE_4__* VAR_0 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5()
{
    int VAR_1;


    for (VAR_1 = VAR_0->w_s->b_syn_patterns.ga_len; --VAR_1 >= 0; )
 if (FUNC_0(VAR_0->w_s)[VAR_1].sp_syncing)
     FUNC_1(VAR_0->w_s, VAR_1);

    VAR_0->w_s->b_syn_sync_flags = 0;
    VAR_0->w_s->b_syn_sync_minlines = 0;
    VAR_0->w_s->b_syn_sync_maxlines = 0;
    VAR_0->w_s->b_syn_sync_linebreaks = 0;

    FUNC_4(VAR_0->w_s->b_syn_linecont_prog);
    VAR_0->w_s->b_syn_linecont_prog = ((void*)0);
    FUNC_3(VAR_0->w_s->b_syn_linecont_pat);
    VAR_0->w_s->b_syn_linecont_pat = ((void*)0);

    FUNC_2(VAR_0->w_s);
}
