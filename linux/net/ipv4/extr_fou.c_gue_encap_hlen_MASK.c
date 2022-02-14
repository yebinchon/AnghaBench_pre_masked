
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {int dummy; } ;
struct ip_tunnel_encap {int flags; } ;
struct guehdr {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

size_t FUNC_0(struct ip_tunnel_encap *VAR_3)
{
 size_t VAR_4;
 bool VAR_5 = 0;

 VAR_4 = sizeof(struct udphdr) + sizeof(struct guehdr);

 if (VAR_3->flags & VAR_2) {
  VAR_4 += VAR_1;
  VAR_5 = 1;
 }

 VAR_4 += VAR_5 ? VAR_0 : 0;

 return VAR_4;
}
