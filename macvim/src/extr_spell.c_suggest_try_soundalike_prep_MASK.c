
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ ga_len; } ;
struct TYPE_10__ {int sl_sounddone; int * sl_sbyts; TYPE_1__ sl_sal; } ;
typedef TYPE_3__ slang_T ;
struct TYPE_11__ {TYPE_3__* lp_slang; } ;
typedef TYPE_4__ langp_T ;
struct TYPE_13__ {int ga_len; } ;
struct TYPE_12__ {TYPE_2__* w_s; } ;
struct TYPE_9__ {TYPE_7__ b_langp; } ;


 TYPE_4__* FUNC_0 (TYPE_7__,int) ;
 TYPE_5__* VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2()
{
    langp_T *VAR_1;
    int VAR_2;
    slang_T *VAR_3;



    for (VAR_2 = 0; VAR_2 < VAR_0->w_s->b_langp.ga_len; ++VAR_2)
    {
 VAR_1 = FUNC_0(VAR_0->w_s->b_langp, VAR_2);
 VAR_3 = VAR_1->lp_slang;
 if (VAR_3->sl_sal.ga_len > 0 && VAR_3->sl_sbyts != ((void*)0))

     FUNC_1(&VAR_3->sl_sounddone);
    }
}
