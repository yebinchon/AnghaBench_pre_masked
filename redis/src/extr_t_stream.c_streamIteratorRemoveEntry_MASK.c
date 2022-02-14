
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int key_len; int key; } ;
struct TYPE_8__ {unsigned char* lp; unsigned char* lp_flags; scalar_t__ rev; TYPE_5__* stream; int end_key; int start_key; TYPE_1__ ri; } ;
typedef TYPE_2__ streamIterator ;
typedef int streamID ;
typedef int int64_t ;
struct TYPE_9__ {int length; int rax; } ;


 int VAR_0 ;
 unsigned char* FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (unsigned char*,unsigned char*) ;
 unsigned char* FUNC_4 (unsigned char*,unsigned char**,int) ;
 int FUNC_5 (int ,int ,int ,unsigned char*,int *) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (TYPE_2__*,TYPE_5__*,int *,int *,scalar_t__) ;
 int FUNC_9 (TYPE_2__*) ;

void FUNC_10(streamIterator *VAR_1, streamID *VAR_2) {
    unsigned char *VAR_3 = VAR_1->lp;
    int64_t VAR_4;






    int VAR_5 = FUNC_2(VAR_1->lp_flags);
    VAR_5 |= VAR_0;
    VAR_3 = FUNC_4(VAR_3,&VAR_1->lp_flags,VAR_5);


    unsigned char *VAR_6 = FUNC_0(VAR_3);
    VAR_4 = FUNC_2(VAR_6);

    if (VAR_4 == 1) {


        FUNC_1(VAR_3);
        FUNC_6(VAR_1->stream->rax,VAR_1->ri.key,VAR_1->ri.key_len,((void*)0));
    } else {

        VAR_3 = FUNC_4(VAR_3,&VAR_6,VAR_4-1);
        VAR_6 = FUNC_3(VAR_3,VAR_6);
        VAR_4 = FUNC_2(VAR_6);
        VAR_3 = FUNC_4(VAR_3,&VAR_6,VAR_4+1);


        if (VAR_1->lp != VAR_3)
            FUNC_5(VAR_1->stream->rax,VAR_1->ri.key,VAR_1->ri.key_len,VAR_3,((void*)0));
    }


    VAR_1->stream->length--;


    streamID VAR_7, VAR_8;
    if (VAR_1->rev) {
        FUNC_7(VAR_1->start_key,&VAR_7);
        VAR_8 = *VAR_2;
    } else {
        VAR_7 = *VAR_2;
        FUNC_7(VAR_1->end_key,&VAR_8);
    }
    FUNC_9(VAR_1);
    FUNC_8(VAR_1,VAR_1->stream,&VAR_7,&VAR_8,VAR_1->rev);



}
