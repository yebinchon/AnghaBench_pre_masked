
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpls_shim_hdr {int dummy; } ;
struct mpls_nh {int nh_labels; } ;



__attribute__((used)) static unsigned int FUNC_0(const struct mpls_nh *VAR_0)
{

 return VAR_0->nh_labels * sizeof(struct mpls_shim_hdr);
}
