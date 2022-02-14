
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpls_shim_hdr {int dummy; } ;
struct mpls_iptunnel_encap {int labels; } ;



__attribute__((used)) static unsigned int FUNC_0(struct mpls_iptunnel_encap *VAR_0)
{

 return VAR_0->labels * sizeof(struct mpls_shim_hdr);
}
