
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* cue_tail; TYPE_2__* cue_head; TYPE_2__* style_tail; TYPE_2__* style_head; TYPE_2__* region_tail; TYPE_2__* region_head; } ;
typedef TYPE_1__ vtt_t ;
struct TYPE_8__ {int type; double timestamp; double duration; size_t text_size; struct TYPE_8__* next; int * cue_id; int * cue_settings; } ;
typedef TYPE_2__ vtt_block_t ;
typedef char utf8_char_t ;
typedef enum VTT_BLOCK_TYPE { ____Placeholder_VTT_BLOCK_TYPE } VTT_BLOCK_TYPE ;






 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (char*,int ,size_t) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

vtt_block_t* FUNC_4(vtt_t* VAR_0, const utf8_char_t* VAR_1, size_t VAR_2, enum VTT_BLOCK_TYPE VAR_3)
{
    vtt_block_t* VAR_4 = FUNC_0(sizeof(vtt_block_t) + VAR_2 + 1);
    VAR_4->next = ((void*)0);
    VAR_4->type = VAR_3;
    VAR_4->timestamp = 0.0;
    VAR_4->duration = 0.0;
    VAR_4->cue_settings = ((void*)0);
    VAR_4->cue_id = ((void*)0);
    VAR_4->text_size = VAR_2;

    switch (VAR_3) {
    case 129:
        if (VAR_0->region_head == ((void*)0)) {
            VAR_0->region_head = VAR_4;
        } else {
            VAR_0->region_tail->next = VAR_4;
        }
        VAR_0->region_tail = VAR_4;
        break;
    case 128:
        if (VAR_0->style_head == ((void*)0)) {
            VAR_0->style_head = VAR_4;
        } else {
            VAR_0->style_tail->next = VAR_4;
        }
        VAR_0->style_tail = VAR_4;
        break;
    case 131:
        if (VAR_0->cue_head == ((void*)0)) {
            VAR_0->cue_head = VAR_4;
        } else {
            VAR_0->cue_tail->next = VAR_4;
        }
        VAR_0->cue_tail = VAR_4;
        break;
    case 130:
        break;
    }

    utf8_char_t* VAR_5 = (utf8_char_t*)FUNC_3(VAR_4);
    if (VAR_1) {
        FUNC_1(VAR_5, VAR_1, VAR_2);
    } else {
        FUNC_2(VAR_5, 0, VAR_2);
    }

    VAR_5[VAR_2] = '\0';
    return VAR_4;
}
