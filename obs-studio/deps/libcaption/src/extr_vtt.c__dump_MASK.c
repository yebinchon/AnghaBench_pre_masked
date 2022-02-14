
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* cue_head; TYPE_2__* style_head; TYPE_2__* region_head; } ;
typedef TYPE_1__ vtt_t ;
struct TYPE_6__ {char* cue_id; char* cue_settings; scalar_t__ duration; scalar_t__ timestamp; struct TYPE_6__* next; } ;
typedef TYPE_2__ vtt_block_t ;


 int FUNC_0 (char*,...) ;
 char* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__,int*,int*,int*,int*) ;

__attribute__((used)) static void FUNC_3(vtt_t* VAR_0)
{
    vtt_block_t* VAR_1;
    FUNC_0("WEBVTT\r\n\r\n");

    VAR_1 = VAR_0->region_head;
    while (VAR_1 != ((void*)0)) {
        FUNC_0("REGION\r\n%s\r\n", FUNC_1(VAR_1));
        VAR_1 = VAR_1->next;
    }

    VAR_1 = VAR_0->style_head;
    while (VAR_1 != ((void*)0)) {
        FUNC_0("STYLE\r\n%s\r\n", FUNC_1(VAR_1));
        VAR_1 = VAR_1->next;
    }

    VAR_1 = VAR_0->cue_head;
    while (VAR_1 != ((void*)0)) {
        int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
        FUNC_2(VAR_1->timestamp, &VAR_2, &VAR_4, &VAR_6, &VAR_8);
        FUNC_2(VAR_1->timestamp + VAR_1->duration, &VAR_3, &VAR_5, &VAR_7, &VAR_9);

        if (VAR_1->cue_id != ((void*)0)) {
            FUNC_0("%s\n", VAR_1->cue_id);
        }

        FUNC_0("%02d:%02d:%02d.%03d --> %02d:%02d:%02d.%03d",
            VAR_2, VAR_4, VAR_6, VAR_8, VAR_3, VAR_5, VAR_7, VAR_9);

        if (VAR_1->cue_settings != ((void*)0)) {
            FUNC_0(" %s", VAR_1->cue_settings);
        }

        FUNC_0("\r\n%s\r\n", FUNC_1(VAR_1));
    }
}
