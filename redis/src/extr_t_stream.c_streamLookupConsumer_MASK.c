
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int seen_time; int pel; int name; } ;
typedef TYPE_1__ streamConsumer ;
struct TYPE_10__ {int consumers; } ;
typedef TYPE_2__ streamCG ;
typedef scalar_t__ sds ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,unsigned char*,int ) ;
 int FUNC_2 (int ,unsigned char*,int ,TYPE_1__*,int *) ;
 int FUNC_3 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 TYPE_1__* FUNC_6 (int) ;

streamConsumer *FUNC_7(streamCG *VAR_1, sds VAR_2, int VAR_3) {
    streamConsumer *VAR_4 = FUNC_1(VAR_1->consumers,(unsigned char*)VAR_2,
                               FUNC_5(VAR_2));
    if (VAR_4 == VAR_0) {
        if (!VAR_3) return ((void*)0);
        VAR_4 = FUNC_6(sizeof(*VAR_4));
        VAR_4->name = FUNC_4(VAR_2);
        VAR_4->pel = FUNC_3();
        FUNC_2(VAR_1->consumers,(unsigned char*)VAR_2,FUNC_5(VAR_2),
                  VAR_4,((void*)0));
    }
    VAR_4->seen_time = FUNC_0();
    return VAR_4;
}
