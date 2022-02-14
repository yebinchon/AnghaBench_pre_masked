
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v ;
union nf_inet_addr {int ip; int* ip6; } ;
typedef int hsiphash_key_t ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int*,int,int *) ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static inline unsigned int
FUNC_3(int VAR_1, const union nf_inet_addr *VAR_2,
   __be16 VAR_3, hsiphash_key_t *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6;
 __be32 VAR_7 = VAR_2->ip;






 VAR_6 = (VAR_5 + FUNC_2(VAR_3) + FUNC_1(VAR_7));
 return FUNC_0(&VAR_6, sizeof(VAR_6), VAR_4);
}
