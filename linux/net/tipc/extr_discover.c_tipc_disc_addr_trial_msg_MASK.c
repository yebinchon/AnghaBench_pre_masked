
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct tipc_net {scalar_t__ trial_addr; scalar_t__ addr_trial_end; } ;
struct tipc_media_addr {int dummy; } ;
struct tipc_discoverer {int skb; struct net* net; } ;
struct tipc_bearer {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (struct net*,int,scalar_t__,scalar_t__,scalar_t__,struct tipc_media_addr*,struct tipc_bearer*) ;
 struct tipc_net* FUNC_6 (struct net*) ;
 scalar_t__ FUNC_7 (struct net*,int *,scalar_t__) ;
 scalar_t__ FUNC_8 (struct net*) ;
 int FUNC_9 (struct net*,scalar_t__) ;

__attribute__((used)) static bool FUNC_10(struct tipc_discoverer *VAR_4,
         struct tipc_media_addr *VAR_5,
         struct tipc_bearer *VAR_6,
         u32 VAR_7, u32 VAR_8,
         u32 VAR_9,
         u8 *VAR_10,
         int VAR_11)
{
 struct net *VAR_12 = VAR_4->net;
 struct tipc_net *VAR_13 = FUNC_6(VAR_12);
 bool VAR_14 = FUNC_4(VAR_3, VAR_13->addr_trial_end);
 u32 VAR_15 = FUNC_8(VAR_12);

 if (VAR_11 == VAR_1) {
  if (!VAR_14)
   return 1;


  if (VAR_7 != VAR_13->trial_addr)
   return 1;


  VAR_13->trial_addr = VAR_9;
  FUNC_2(FUNC_0(VAR_4->skb), VAR_9);
  VAR_13->addr_trial_end = VAR_3 + FUNC_1(1000);
  return 1;
 }


 if (!VAR_14 && !VAR_15) {
  FUNC_9(VAR_12, VAR_13->trial_addr);
  FUNC_2(FUNC_0(VAR_4->skb), VAR_13->trial_addr);
  FUNC_3(FUNC_0(VAR_4->skb), VAR_0);
 }


 if (VAR_11 != VAR_2)
  return VAR_14;

 VAR_9 = FUNC_7(VAR_12, VAR_10, VAR_8);
 if (VAR_9)
  FUNC_5(VAR_12, VAR_1, VAR_8,
       VAR_15, VAR_9, VAR_5, VAR_6);
 return 1;
}
