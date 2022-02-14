
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {int * dccps_hc_rx_ackvec; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct sock const*) ;

__attribute__((used)) static inline int FUNC_2(const struct sock *VAR_0)
{
 return FUNC_1(VAR_0)->dccps_hc_rx_ackvec != ((void*)0) &&
        !FUNC_0(FUNC_1(VAR_0)->dccps_hc_rx_ackvec);
}
