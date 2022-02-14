
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef union clusterMsgData {int dummy; } clusterMsgData ;
typedef int uint32_t ;
struct TYPE_17__ {TYPE_5__* ptr; } ;
typedef TYPE_4__ robj ;
typedef int clusterMsgDataPublish ;
struct TYPE_14__ {unsigned char* bulk_data; void* message_len; void* channel_len; } ;
struct TYPE_15__ {TYPE_1__ msg; } ;
struct TYPE_16__ {TYPE_2__ publish; } ;
struct TYPE_18__ {TYPE_3__ data; void* totlen; } ;
typedef TYPE_5__ clusterMsg ;
typedef int clusterLink ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_4__* FUNC_4 (TYPE_4__*) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (unsigned char*,TYPE_5__*,int) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (unsigned char*) ;
 unsigned char* FUNC_9 (int) ;

void FUNC_10(clusterLink *VAR_1, robj *VAR_2, robj *VAR_3) {
    unsigned char *VAR_4;
    clusterMsg VAR_5[1];
    clusterMsg *VAR_6 = (clusterMsg*) VAR_5;
    uint32_t VAR_7;
    uint32_t VAR_8, VAR_9;

    VAR_2 = FUNC_4(VAR_2);
    VAR_3 = FUNC_4(VAR_3);
    VAR_8 = FUNC_7(VAR_2->ptr);
    VAR_9 = FUNC_7(VAR_3->ptr);

    FUNC_1(VAR_6,VAR_0);
    VAR_7 = sizeof(clusterMsg)-sizeof(union clusterMsgData);
    VAR_7 += sizeof(clusterMsgDataPublish) - 8 + VAR_8 + VAR_9;

    VAR_6->data.publish.msg.channel_len = FUNC_5(VAR_8);
    VAR_6->data.publish.msg.message_len = FUNC_5(VAR_9);
    VAR_6->totlen = FUNC_5(VAR_7);


    if (VAR_7 < sizeof(VAR_5)) {
        VAR_4 = (unsigned char*)VAR_5;
    } else {
        VAR_4 = FUNC_9(VAR_7);
        FUNC_6(VAR_4,VAR_6,sizeof(*VAR_6));
        VAR_6 = (clusterMsg*) VAR_4;
    }
    FUNC_6(VAR_6->data.publish.msg.bulk_data,VAR_2->ptr,FUNC_7(VAR_2->ptr));
    FUNC_6(VAR_6->data.publish.msg.bulk_data+FUNC_7(VAR_2->ptr),
        VAR_3->ptr,FUNC_7(VAR_3->ptr));

    if (VAR_1)
        FUNC_2(VAR_1,VAR_4,VAR_7);
    else
        FUNC_0(VAR_4,VAR_7);

    FUNC_3(VAR_2);
    FUNC_3(VAR_3);
    if (VAR_4 != (unsigned char*)VAR_5) FUNC_8(VAR_4);
}
