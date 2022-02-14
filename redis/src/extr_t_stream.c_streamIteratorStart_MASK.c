
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int rev; int * lp_ele; int * lp; TYPE_3__* stream; int ri; void** end_key; void** start_key; } ;
typedef TYPE_1__ streamIterator ;
struct TYPE_10__ {scalar_t__ seq; scalar_t__ ms; } ;
typedef TYPE_2__ streamID ;
struct TYPE_11__ {int rax; } ;
typedef TYPE_3__ stream ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,unsigned char*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (void**,TYPE_2__*) ;

void FUNC_4(streamIterator *VAR_1, stream *VAR_2, streamID *VAR_3, streamID *VAR_4, int VAR_5) {


    if (VAR_3) {
        FUNC_3(VAR_1->start_key,VAR_3);
    } else {
        VAR_1->start_key[0] = 0;
        VAR_1->start_key[1] = 0;
    }

    if (VAR_4) {
        FUNC_3(VAR_1->end_key,VAR_4);
    } else {
        VAR_1->end_key[0] = VAR_0;
        VAR_1->end_key[1] = VAR_0;
    }


    FUNC_2(&VAR_1->ri,VAR_2->rax);
    if (!VAR_5) {
        if (VAR_3 && (VAR_3->ms || VAR_3->seq)) {
            FUNC_1(&VAR_1->ri,"<=",(unsigned char*)VAR_1->start_key,
                    sizeof(VAR_1->start_key));
            if (FUNC_0(&VAR_1->ri)) FUNC_1(&VAR_1->ri,"^",((void*)0),0);
        } else {
            FUNC_1(&VAR_1->ri,"^",((void*)0),0);
        }
    } else {
        if (VAR_4 && (VAR_4->ms || VAR_4->seq)) {
            FUNC_1(&VAR_1->ri,"<=",(unsigned char*)VAR_1->end_key,
                    sizeof(VAR_1->end_key));
            if (FUNC_0(&VAR_1->ri)) FUNC_1(&VAR_1->ri,"$",((void*)0),0);
        } else {
            FUNC_1(&VAR_1->ri,"$",((void*)0),0);
        }
    }
    VAR_1->stream = VAR_2;
    VAR_1->lp = ((void*)0);
    VAR_1->lp_ele = ((void*)0);
    VAR_1->rev = VAR_5;
}
