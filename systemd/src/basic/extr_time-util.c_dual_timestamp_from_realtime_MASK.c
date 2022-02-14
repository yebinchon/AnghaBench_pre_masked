
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
typedef scalar_t__ int64_t ;
struct TYPE_5__ {scalar_t__ monotonic; scalar_t__ realtime; } ;
typedef TYPE_1__ dual_timestamp ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

dual_timestamp* FUNC_3(dual_timestamp *VAR_3, usec_t VAR_4) {
        int64_t VAR_5;
        FUNC_0(VAR_3);

        if (VAR_4 == VAR_2 || VAR_4 <= 0) {
                VAR_3->realtime = VAR_3->monotonic = VAR_4;
                return VAR_3;
        }

        VAR_3->realtime = VAR_4;

        VAR_5 = (int64_t) FUNC_1(VAR_1) - (int64_t) VAR_4;
        VAR_3->monotonic = FUNC_2(FUNC_1(VAR_0), VAR_5);

        return VAR_3;
}
