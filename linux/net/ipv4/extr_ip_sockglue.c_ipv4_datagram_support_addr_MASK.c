
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ee_origin; } ;
struct sock_exterr_skb {scalar_t__ port; TYPE_1__ ee; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct sock_exterr_skb *VAR_2)
{
 return VAR_2->ee.ee_origin == VAR_0 ||
        VAR_2->ee.ee_origin == VAR_1 || VAR_2->port;
}
