
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
typedef int u32 ;
struct net {int dummy; } ;
struct flowi4 {int dummy; } ;
struct dst_entry {int dummy; } ;


 struct dst_entry* FUNC_0 (struct net*,struct flowi4*,int,int,int const*,int const*,int ) ;

__attribute__((used)) static struct dst_entry *FUNC_1(struct net *VAR_0, int VAR_1, int VAR_2,
       const xfrm_address_t *VAR_3,
       const xfrm_address_t *VAR_4,
       u32 VAR_5)
{
 struct flowi4 VAR_6;

 return FUNC_0(VAR_0, &VAR_6, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
