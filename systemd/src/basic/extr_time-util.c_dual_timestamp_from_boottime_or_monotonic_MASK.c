
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
typedef scalar_t__ int64_t ;
struct TYPE_5__ {void* monotonic; void* realtime; } ;
typedef TYPE_1__ dual_timestamp ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 void* FUNC_3 (void*,scalar_t__) ;

dual_timestamp* FUNC_4(dual_timestamp *VAR_1, usec_t VAR_2) {
        int64_t VAR_3;

        if (VAR_2 == VAR_0) {
                VAR_1->realtime = VAR_1->monotonic = VAR_0;
                return VAR_1;
        }

        FUNC_1(VAR_1);
        VAR_3 = (int64_t) FUNC_2(FUNC_0()) - (int64_t) VAR_2;
        VAR_1->realtime = FUNC_3(VAR_1->realtime, VAR_3);
        VAR_1->monotonic = FUNC_3(VAR_1->monotonic, VAR_3);

        return VAR_1;
}
