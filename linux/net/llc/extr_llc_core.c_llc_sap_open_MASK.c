
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char lsap; } ;
struct llc_sap {int (* rcv_func ) (struct sk_buff*,struct net_device*,struct packet_type*,struct net_device*) ;int node; TYPE_1__ laddr; } ;


 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (int *,int *) ;
 struct llc_sap* FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct llc_sap *FUNC_5(unsigned char VAR_2,
        int (*VAR_3)(struct sk_buff *VAR_4,
      struct net_device *VAR_5,
      struct packet_type *VAR_6,
      struct net_device *VAR_7))
{
 struct llc_sap *VAR_8 = ((void*)0);

 FUNC_3(&VAR_1);
 if (FUNC_0(VAR_2))
  goto out;
 VAR_8 = FUNC_2();
 if (!VAR_8)
  goto out;
 VAR_8->laddr.lsap = VAR_2;
 VAR_8->rcv_func = VAR_3;
 FUNC_1(&VAR_8->node, &VAR_0);
out:
 FUNC_4(&VAR_1);
 return VAR_8;
}
