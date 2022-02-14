
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int boottime; int monotonic; int realtime; } ;
typedef TYPE_1__ triple_timestamp ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(const triple_timestamp *VAR_0) {
        return FUNC_0(VAR_0->realtime) ||
               FUNC_0(VAR_0->monotonic) ||
               FUNC_0(VAR_0->boottime);
}
