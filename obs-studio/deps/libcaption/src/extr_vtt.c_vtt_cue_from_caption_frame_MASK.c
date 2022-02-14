
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* cue_tail; } ;
typedef TYPE_2__ vtt_t ;
struct TYPE_14__ {scalar_t__ timestamp; } ;
typedef TYPE_3__ vtt_block_t ;
typedef int utf8_char_t ;
struct TYPE_15__ {scalar_t__ timestamp; } ;
typedef TYPE_4__ caption_frame_t ;
struct TYPE_12__ {scalar_t__ duration; scalar_t__ timestamp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int *) ;
 int FUNC_1 (char*,char*) ;
 int * FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (TYPE_2__*,int *,scalar_t__,int ) ;

vtt_block_t* FUNC_4(caption_frame_t* VAR_2, vtt_t* VAR_3)
{
    if (VAR_3->cue_tail && 0 >= VAR_3->cue_tail->duration) {
        VAR_3->cue_tail->duration = VAR_2->timestamp - VAR_3->cue_tail->timestamp;
    }


    vtt_block_t* VAR_4 = FUNC_3(VAR_3, ((void*)0), 2 + VAR_0, VAR_1);
    utf8_char_t* VAR_5 = FUNC_2(VAR_4);

    FUNC_0(VAR_2, VAR_5);
    VAR_4->timestamp = VAR_2->timestamp;

    FUNC_1((char*)VAR_5, "\r\n");
    return VAR_4;
}
