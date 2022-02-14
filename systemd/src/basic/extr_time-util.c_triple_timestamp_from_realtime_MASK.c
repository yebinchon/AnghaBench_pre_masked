
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
struct TYPE_5__ {scalar_t__ boottime; scalar_t__ monotonic; scalar_t__ realtime; } ;
typedef TYPE_1__ triple_timestamp ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

triple_timestamp* FUNC_4(triple_timestamp *VAR_4, usec_t VAR_5) {
        int64_t VAR_6;

        FUNC_0(VAR_4);

        if (VAR_5 == VAR_3 || VAR_5 <= 0) {
                VAR_4->realtime = VAR_4->monotonic = VAR_4->boottime = VAR_5;
                return VAR_4;
        }

        VAR_4->realtime = VAR_5;
        VAR_6 = (int64_t) FUNC_2(VAR_2) - (int64_t) VAR_5;
        VAR_4->monotonic = FUNC_3(FUNC_2(VAR_1), VAR_6);
        VAR_4->boottime = FUNC_1() ? FUNC_3(FUNC_2(VAR_0), VAR_6) : VAR_3;

        return VAR_4;
}
