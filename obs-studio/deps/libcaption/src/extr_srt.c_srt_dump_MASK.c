
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ duration; scalar_t__ timestamp; struct TYPE_5__* next; } ;
typedef TYPE_1__ vtt_block_t ;
struct TYPE_6__ {TYPE_1__* cue_head; } ;
typedef TYPE_2__ srt_t ;


 int FUNC_0 (char*,int,int,int,int,int,int,int,int,int,char*) ;
 char* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__,int*,int*,int*,int*) ;

void FUNC_3(srt_t* VAR_0)
{
    int VAR_1;
    vtt_block_t* VAR_2;

    for (VAR_2 = VAR_0->cue_head, VAR_1 = 1; VAR_2; VAR_2 = VAR_2->next, ++VAR_1) {
        int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
        FUNC_2(VAR_2->timestamp, &VAR_3, &VAR_5, &VAR_7, &VAR_9);
        FUNC_2(VAR_2->timestamp + VAR_2->duration, &VAR_4, &VAR_6, &VAR_8, &VAR_10);

        FUNC_0("%02d\r\n%d:%02d:%02d,%03d --> %02d:%02d:%02d,%03d\r\n%s\r\n", VAR_1,
            VAR_3, VAR_5, VAR_7, VAR_9, VAR_4, VAR_6, VAR_8, VAR_10, FUNC_1(VAR_2));
    }
}
