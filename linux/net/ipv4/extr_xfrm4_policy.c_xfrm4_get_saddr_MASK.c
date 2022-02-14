
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int a4; } ;
typedef TYPE_1__ xfrm_address_t ;
typedef int u32 ;
struct net {int dummy; } ;
struct flowi4 {int saddr; } ;
struct dst_entry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dst_entry*) ;
 struct dst_entry* FUNC_1 (struct net*,struct flowi4*,int ,int,int *,TYPE_1__*,int ) ;
 int FUNC_2 (struct dst_entry*) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_1, int VAR_2,
      xfrm_address_t *VAR_3, xfrm_address_t *VAR_4,
      u32 VAR_5)
{
 struct dst_entry *VAR_6;
 struct flowi4 VAR_7;

 VAR_6 = FUNC_1(VAR_1, &VAR_7, 0, VAR_2, ((void*)0), VAR_4, VAR_5);
 if (FUNC_0(VAR_6))
  return -VAR_0;

 VAR_3->a4 = VAR_7;
 FUNC_2(VAR_6);
 return 0;
}
