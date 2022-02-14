
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct nlattr {int dummy; } ;
struct nft_chain_type {int hook_mask; scalar_t__ type; int owner; } ;
struct nft_chain_hook {int num; scalar_t__ priority; struct net_device* dev; struct nft_chain_type const* type; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int commit_mutex; } ;
struct net {TYPE_1__ nft; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct nft_chain_type const*) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct nft_chain_type const*) ;
 struct net_device* FUNC_2 (struct net*,char*) ;
 struct nft_chain_type*** VAR_15 ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 struct nft_chain_type* FUNC_6 (struct net*,struct nlattr const* const,size_t,int) ;
 int VAR_16 ;
 int FUNC_7 (struct nlattr*) ;
 int FUNC_8 (struct nlattr**,int ,struct nlattr const* const,int ,int *) ;
 int FUNC_9 (char*,struct nlattr*,int) ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct net *VAR_17,
    const struct nlattr * const VAR_18[],
    struct nft_chain_hook *VAR_19, u8 VAR_20,
    bool VAR_21)
{
 struct nlattr *VAR_22[VAR_9 + 1];
 const struct nft_chain_type *VAR_23;
 struct net_device *VAR_24;
 int VAR_25;

 FUNC_3(&VAR_17->nft.commit_mutex);
 FUNC_4();

 VAR_25 = FUNC_8(VAR_22, VAR_9,
       VAR_18[VAR_5],
       VAR_16, ((void*)0));
 if (VAR_25 < 0)
  return VAR_25;

 if (VAR_22[VAR_8] == ((void*)0) ||
     VAR_22[VAR_10] == ((void*)0))
  return -VAR_0;

 VAR_19->num = FUNC_10(FUNC_7(VAR_22[VAR_8]));
 VAR_19->priority = FUNC_10(FUNC_7(VAR_22[VAR_10]));

 VAR_23 = VAR_15[VAR_20][VAR_11];
 if (VAR_18[VAR_6]) {
  VAR_23 = FUNC_6(VAR_17, VAR_18[VAR_6],
         VAR_20, VAR_21);
  if (FUNC_0(VAR_23))
   return FUNC_1(VAR_23);
 }
 if (VAR_19->num > VAR_14 || !(VAR_23->hook_mask & (1 << VAR_19->num)))
  return -VAR_2;

 if (VAR_23->type == VAR_12 &&
     VAR_19->priority <= VAR_13)
  return -VAR_2;

 if (!FUNC_11(VAR_23->owner))
  return -VAR_1;

 VAR_19->type = VAR_23;

 VAR_19->dev = ((void*)0);
 if (VAR_20 == VAR_4) {
  char VAR_26[VAR_3];

  if (!VAR_22[VAR_7]) {
   FUNC_5(VAR_23->owner);
   return -VAR_2;
  }

  FUNC_9(VAR_26, VAR_22[VAR_7], VAR_3);
  VAR_24 = FUNC_2(VAR_17, VAR_26);
  if (!VAR_24) {
   FUNC_5(VAR_23->owner);
   return -VAR_1;
  }
  VAR_19->dev = VAR_24;
 } else if (VAR_22[VAR_7]) {
  FUNC_5(VAR_23->owner);
  return -VAR_2;
 }

 return 0;
}
