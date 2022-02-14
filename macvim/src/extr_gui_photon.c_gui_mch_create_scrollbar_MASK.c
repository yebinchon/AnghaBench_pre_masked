
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void* id; TYPE_1__* wp; } ;
typedef TYPE_2__ scrollbar_T ;
struct TYPE_8__ {int vimContainer; int vimPanelGroup; } ;
struct TYPE_6__ {TYPE_2__* w_scrollbars; } ;
typedef int PtArg_t ;


 int FUNC_0 (void*,int ,int ,TYPE_2__*) ;
 void* FUNC_1 (int ,int ,int,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 TYPE_4__ VAR_19 ;
 int VAR_20 ;

void
FUNC_3(scrollbar_T *VAR_21, int VAR_22)
{
    int VAR_23 = 0;

    PtArg_t VAR_24[4];







    FUNC_2(&VAR_24[ VAR_23++ ], VAR_2, VAR_7,
     VAR_7 | VAR_8);
    FUNC_2(&VAR_24[ VAR_23++ ], VAR_4, VAR_13, 0);
    FUNC_2(&VAR_24[ VAR_23++ ], VAR_3,
     (VAR_22 == VAR_16) ? VAR_9 : VAR_15, 0);



    VAR_21->id = FUNC_1(VAR_0, VAR_19.vimContainer, VAR_23, VAR_24);


    FUNC_0(VAR_21->id, VAR_6, VAR_20, VAR_21);
}
