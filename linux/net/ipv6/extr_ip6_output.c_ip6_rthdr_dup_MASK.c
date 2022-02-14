
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipv6_rt_hdr {int hdrlen; } ;
typedef int gfp_t ;


 struct ipv6_rt_hdr* FUNC_0 (struct ipv6_rt_hdr*,int,int ) ;

__attribute__((used)) static inline struct ipv6_rt_hdr *FUNC_1(struct ipv6_rt_hdr *VAR_0,
      gfp_t VAR_1)
{
 return VAR_0 ? FUNC_0(VAR_0, (VAR_0->hdrlen + 1) * 8, VAR_1) : ((void*)0);
}
