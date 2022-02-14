
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ip_tunnel_encap {int flags; int dport; int sport; int type; } ;
struct TYPE_2__ {int flags; int dport; int sport; int type; } ;
struct ip_tunnel {int encap_hlen; int hlen; int tun_hlen; TYPE_1__ encap; } ;


 int FUNC_0 (struct ip_tunnel_encap*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

int FUNC_2(struct ip_tunnel *VAR_0,
     struct ip_tunnel_encap *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_0->encap, 0, sizeof(VAR_0->encap));

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_0->encap.type = VAR_1->type;
 VAR_0->encap.sport = VAR_1->sport;
 VAR_0->encap.dport = VAR_1->dport;
 VAR_0->encap.flags = VAR_1->flags;

 VAR_0->encap_hlen = VAR_2;
 VAR_0->hlen = VAR_0->encap_hlen + VAR_0->tun_hlen;

 return 0;
}
