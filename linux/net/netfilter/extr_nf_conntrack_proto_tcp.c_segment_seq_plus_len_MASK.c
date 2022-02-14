
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int doff; scalar_t__ fin; scalar_t__ syn; } ;
typedef size_t __u32 ;



__attribute__((used)) static inline __u32 FUNC_0(__u32 VAR_0,
      size_t VAR_1,
      unsigned int VAR_2,
      const struct tcphdr *VAR_3)
{


 return (VAR_0 + VAR_1 - VAR_2 - VAR_3->doff*4
  + (VAR_3->syn ? 1 : 0) + (VAR_3->fin ? 1 : 0));
}
