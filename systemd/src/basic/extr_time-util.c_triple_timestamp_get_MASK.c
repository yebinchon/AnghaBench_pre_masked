
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* boottime; void* monotonic; void* realtime; } ;
typedef TYPE_1__ triple_timestamp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 () ;
 void* FUNC_2 (int ) ;

triple_timestamp* FUNC_3(triple_timestamp *VAR_4) {
        FUNC_0(VAR_4);

        VAR_4->realtime = FUNC_2(VAR_2);
        VAR_4->monotonic = FUNC_2(VAR_1);
        VAR_4->boottime = FUNC_1() ? FUNC_2(VAR_0) : VAR_3;

        return VAR_4;
}
