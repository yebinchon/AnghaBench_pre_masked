
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int delivery_count; int * consumer; int delivery_time; } ;
typedef TYPE_1__ streamNACK ;
typedef int streamConsumer ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int) ;

streamNACK *FUNC_2(streamConsumer *VAR_0) {
    streamNACK *VAR_1 = FUNC_1(sizeof(*VAR_1));
    VAR_1->delivery_time = FUNC_0();
    VAR_1->delivery_count = 1;
    VAR_1->consumer = VAR_0;
    return VAR_1;
}
