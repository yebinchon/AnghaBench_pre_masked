
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* cue_settings; struct TYPE_5__* cue_id; struct TYPE_5__* next; } ;
typedef TYPE_1__ vtt_block_t ;


 int FUNC_0 (TYPE_1__*) ;

vtt_block_t* FUNC_1(vtt_block_t* VAR_0)
{
    vtt_block_t* VAR_1 = VAR_0->next;
    if (VAR_0->cue_id != ((void*)0)) {
        FUNC_0(VAR_0->cue_id);
    }
    if (VAR_0->cue_settings != ((void*)0)) {
        FUNC_0(VAR_0->cue_settings);
    }
    FUNC_0(VAR_0);
    return VAR_1;
}
