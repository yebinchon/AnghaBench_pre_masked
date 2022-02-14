
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __sk_buff {int ifindex; int ingress_ifindex; int * cb; int protocol; int hash; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,int ) ;

int FUNC_1(struct __sk_buff *VAR_2)
{
 VAR_2->cb[0] = VAR_1;
 FUNC_0("len %d hash %d protocol %d\n", VAR_2->len, VAR_2->hash,
        VAR_2->protocol);
 FUNC_0("cb %d ingress_ifindex %d ifindex %d\n", VAR_2->cb[0],
        VAR_2->ingress_ifindex, VAR_2->ifindex);

 return VAR_0;
}
