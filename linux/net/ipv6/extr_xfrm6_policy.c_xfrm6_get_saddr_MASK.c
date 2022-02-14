
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int in6; } ;
typedef TYPE_1__ xfrm_address_t ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct dst_entry {int dummy; } ;
struct TYPE_7__ {struct net_device* dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct dst_entry*) ;
 TYPE_5__* FUNC_3 (struct dst_entry*) ;
 int FUNC_4 (int ,struct net_device*,int *,int ,int *) ;
 struct dst_entry* FUNC_5 (struct net*,int ,int,int *,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_6(struct net *VAR_1, int VAR_2,
      xfrm_address_t *VAR_3, xfrm_address_t *VAR_4,
      u32 VAR_5)
{
 struct dst_entry *VAR_6;
 struct net_device *VAR_7;

 VAR_6 = FUNC_5(VAR_1, 0, VAR_2, ((void*)0), VAR_4, VAR_5);
 if (FUNC_0(VAR_6))
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_6)->dev;
 FUNC_4(FUNC_1(VAR_7), VAR_7, &VAR_4->in6, 0, &VAR_3->in6);
 FUNC_2(VAR_6);
 return 0;
}
