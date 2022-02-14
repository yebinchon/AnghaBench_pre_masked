
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nf_inet_addr {int ip; int* ip6; } ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline unsigned int
FUNC_3(int VAR_3, const union nf_inet_addr *VAR_4,
   __be16 VAR_5, unsigned int VAR_6)
{
 __be32 VAR_7 = VAR_4->ip;






 return (VAR_6 + FUNC_0(FUNC_2(VAR_5) + FUNC_1(VAR_7),
     VAR_1)) &
  VAR_2;
}
