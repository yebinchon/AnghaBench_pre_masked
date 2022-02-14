
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint64_t ;
typedef int streamNACK ;
struct TYPE_12__ {int pel; } ;
typedef TYPE_1__ streamConsumer ;
struct TYPE_13__ {int consumers; int pel; } ;
typedef TYPE_2__ streamCG ;
typedef scalar_t__ sds ;
struct TYPE_14__ {unsigned char* key; int key_len; int * data; } ;
typedef TYPE_3__ raxIterator ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,unsigned char*,int ,int *) ;
 int FUNC_2 (TYPE_3__*,char*,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 TYPE_1__* FUNC_9 (TYPE_2__*,scalar_t__,int ) ;

uint64_t FUNC_10(streamCG *VAR_0, sds VAR_1) {
    streamConsumer *VAR_2 = FUNC_9(VAR_0,VAR_1,0);
    if (VAR_2 == ((void*)0)) return 0;

    uint64_t VAR_3 = FUNC_3(VAR_2->pel);



    raxIterator VAR_4;
    FUNC_4(&VAR_4,VAR_2->pel);
    FUNC_2(&VAR_4,"^",((void*)0),0);
    while(FUNC_0(&VAR_4)) {
        streamNACK *VAR_5 = VAR_4.data;
        FUNC_1(VAR_0->pel,VAR_4.key,VAR_4.key_len,((void*)0));
        FUNC_8(VAR_5);
    }
    FUNC_5(&VAR_4);


    FUNC_1(VAR_0->consumers,(unsigned char*)VAR_1,FUNC_6(VAR_1),((void*)0));
    FUNC_7(VAR_2);
    return VAR_3;
}
