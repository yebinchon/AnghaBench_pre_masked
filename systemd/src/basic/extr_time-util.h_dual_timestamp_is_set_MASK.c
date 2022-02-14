
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int monotonic; int realtime; } ;
typedef TYPE_1__ dual_timestamp ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(const dual_timestamp *VAR_0) {
        return FUNC_0(VAR_0->realtime) ||
               FUNC_0(VAR_0->monotonic);
}
