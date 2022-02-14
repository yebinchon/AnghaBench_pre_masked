
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nf_inet_addr {int ip; int* ip6; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline unsigned int
FUNC_2(int VAR_2, const union nf_inet_addr *VAR_3)
{
 __be32 VAR_4 = VAR_3->ip;






 return FUNC_0(FUNC_1(VAR_4), VAR_1);
}
