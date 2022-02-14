
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nf_inet_addr {int ip; int* ip6; } ;
struct netns_ipvs {int dummy; } ;
typedef size_t __u32 ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 size_t FUNC_0 (int) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static inline unsigned int
FUNC_2(struct netns_ipvs *VAR_3, int VAR_4, unsigned int VAR_5,
    const union nf_inet_addr *VAR_6, __be16 VAR_7)
{
 unsigned int VAR_8 = FUNC_1(VAR_7);
 __be32 VAR_9 = VAR_6->ip;
 __u32 VAR_10;






 VAR_10 = FUNC_0(VAR_9);
 VAR_10 ^= ((size_t) VAR_3 >> 8);

 return (VAR_5 ^ VAR_10 ^ (VAR_8 >> VAR_1) ^ VAR_8) &
        VAR_2;
}
