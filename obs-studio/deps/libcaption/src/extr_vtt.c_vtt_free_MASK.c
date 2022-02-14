
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * cue_head; int * style_head; int * region_head; } ;
typedef TYPE_1__ vtt_t ;


 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (int *) ;

void FUNC_2(vtt_t* VAR_0)
{
    while (VAR_0->region_head != ((void*)0)) {
        VAR_0->region_head = FUNC_1(VAR_0->region_head);
    }
    while (VAR_0->style_head != ((void*)0)) {
        VAR_0->style_head = FUNC_1(VAR_0->style_head);
    }
    while (VAR_0->cue_head != ((void*)0)) {
        VAR_0->cue_head = FUNC_1(VAR_0->cue_head);
    }
    FUNC_0(VAR_0);
}
