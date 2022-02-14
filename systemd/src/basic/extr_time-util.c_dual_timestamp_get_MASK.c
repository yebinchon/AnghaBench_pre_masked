
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* monotonic; void* realtime; } ;
typedef TYPE_1__ dual_timestamp ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (int ) ;

dual_timestamp* FUNC_2(dual_timestamp *VAR_2) {
        FUNC_0(VAR_2);

        VAR_2->realtime = FUNC_1(VAR_1);
        VAR_2->monotonic = FUNC_1(VAR_0);

        return VAR_2;
}
