
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipv6hdr {int dummy; } ;
struct TYPE_3__ {int erspan_ver; } ;
struct ip6_tnl {int tun_hlen; int hlen; int encap_hlen; TYPE_2__* dev; TYPE_1__ parms; } ;
struct TYPE_4__ {scalar_t__ needed_headroom; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct ip6_tnl *VAR_1)
{
 int VAR_2;

 VAR_1->tun_hlen = 8;
 VAR_1->hlen = VAR_1->tun_hlen + VAR_1->encap_hlen +
         FUNC_0(VAR_1->parms.erspan_ver);

 VAR_2 = VAR_1->hlen + sizeof(struct ipv6hdr);
 VAR_1->dev->needed_headroom = VAR_0 + VAR_2;
 return VAR_2;
}
