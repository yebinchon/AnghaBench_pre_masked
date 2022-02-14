
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* locinfo; } ;
struct TYPE_3__ {int * lc_handle; int mb_cur_max; int lc_collate_cp; int lc_codepage; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_10 ;

void FUNC_2()
{
    unsigned VAR_11;

    VAR_2;

    if(VAR_10)
        return;
    VAR_10 = FUNC_0(0, "C");

    VAR_8 = VAR_5->locinfo->lc_codepage;
    VAR_3 = VAR_5->locinfo->lc_collate_cp;
    VAR_9 = VAR_5->locinfo->mb_cur_max;
    for(VAR_11=VAR_1; VAR_11<=VAR_0; VAR_11++)
        VAR_4[VAR_11] = VAR_5->locinfo->lc_handle[VAR_11];
    FUNC_1(VAR_7);
    VAR_6;
}
