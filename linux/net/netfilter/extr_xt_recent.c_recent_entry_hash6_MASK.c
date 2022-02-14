
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nf_inet_addr {scalar_t__ ip6; } ;
typedef int u32 ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static inline unsigned int FUNC_2(const union nf_inet_addr *VAR_2)
{
 return FUNC_1((u32 *)VAR_2->ip6, FUNC_0(VAR_2->ip6), VAR_0) &
        (VAR_1 - 1);
}
