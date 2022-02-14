
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfpkt_priv_data {int dummy; } ;
struct TYPE_2__ {scalar_t__ cb; } ;
struct cfpkt {TYPE_1__ skb; } ;



__attribute__((used)) static inline struct cfpkt_priv_data *FUNC_0(struct cfpkt *VAR_0)
{
 return (struct cfpkt_priv_data *) VAR_0->skb.cb;
}
