
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ occ_op; int timeval; int occ_mtu_load_test_interval; } ;
struct context {TYPE_1__ c2; } ;


 int VAR_0 ;
 int FUNC_0 (struct context*) ;
 int FUNC_1 (struct context*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static inline void
FUNC_4(struct context *VAR_1)
{
    if (FUNC_2(&VAR_1->c2.occ_mtu_load_test_interval)
        && FUNC_3(&VAR_1->c2.occ_mtu_load_test_interval,
                                 &VAR_1->c2.timeval,
                                 (!FUNC_0(VAR_1) && VAR_1->c2.occ_op < 0) ? VAR_0 : 0))
    {
        FUNC_1(VAR_1);
    }
}
