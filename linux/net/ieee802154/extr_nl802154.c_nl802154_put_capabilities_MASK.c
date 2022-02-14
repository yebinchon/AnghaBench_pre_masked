
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpan_phy_supported {int cca_ed_levels_size; int tx_powers_size; int lbt; scalar_t__ iftypes; int max_frame_retries; int min_frame_retries; int max_csma_backoffs; int min_csma_backoffs; int max_maxbe; int min_maxbe; int max_minbe; int min_minbe; scalar_t__ cca_opts; scalar_t__ cca_modes; int * tx_powers; int * cca_ed_levels; scalar_t__* channels; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {int flags; struct wpan_phy_supported supported; } ;
struct cfg802154_registered_device {TYPE_1__ wpan_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int,scalar_t__) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct sk_buff *VAR_21,
     struct cfg802154_registered_device *VAR_22)
{
 const struct wpan_phy_supported *VAR_23 = &VAR_22->wpan_phy.supported;
 struct nlattr *VAR_24, *VAR_25;
 int VAR_26;

 VAR_24 = FUNC_2(VAR_21, VAR_2);
 if (!VAR_24)
  return -VAR_0;

 VAR_25 = FUNC_2(VAR_21, VAR_6);
 if (!VAR_25)
  return -VAR_0;

 for (VAR_26 = 0; VAR_26 <= VAR_1; VAR_26++) {
  if (VAR_23->channels[VAR_26]) {
   if (FUNC_0(VAR_21, VAR_26, VAR_23->channels[VAR_26]))
    return -VAR_0;
  }
 }

 FUNC_1(VAR_21, VAR_25);

 if (VAR_22->wpan_phy.flags & VAR_18) {
  struct nlattr *VAR_27;

  VAR_27 = FUNC_2(VAR_21,
         VAR_3);
  if (!VAR_27)
   return -VAR_0;

  for (VAR_26 = 0; VAR_26 < VAR_23->cca_ed_levels_size; VAR_26++) {
   if (FUNC_3(VAR_21, VAR_26, VAR_23->cca_ed_levels[VAR_26]))
    return -VAR_0;
  }

  FUNC_1(VAR_21, VAR_27);
 }

 if (VAR_22->wpan_phy.flags & VAR_20) {
  struct nlattr *VAR_28;

  VAR_28 = FUNC_2(VAR_21,
         VAR_17);
  if (!VAR_28)
   return -VAR_0;

  for (VAR_26 = 0; VAR_26 < VAR_23->tx_powers_size; VAR_26++) {
   if (FUNC_3(VAR_21, VAR_26, VAR_23->tx_powers[VAR_26]))
    return -VAR_0;
  }

  FUNC_1(VAR_21, VAR_28);
 }

 if (VAR_22->wpan_phy.flags & VAR_19) {
  if (FUNC_0(VAR_21, VAR_4,
           VAR_23->cca_modes) ||
      FUNC_0(VAR_21, VAR_5,
           VAR_23->cca_opts))
   return -VAR_0;
 }

 if (FUNC_6(VAR_21, VAR_16, VAR_23->min_minbe) ||
     FUNC_6(VAR_21, VAR_12, VAR_23->max_minbe) ||
     FUNC_6(VAR_21, VAR_15, VAR_23->min_maxbe) ||
     FUNC_6(VAR_21, VAR_11, VAR_23->max_maxbe) ||
     FUNC_6(VAR_21, VAR_13,
         VAR_23->min_csma_backoffs) ||
     FUNC_6(VAR_21, VAR_9,
         VAR_23->max_csma_backoffs) ||
     FUNC_4(VAR_21, VAR_14,
         VAR_23->min_frame_retries) ||
     FUNC_4(VAR_21, VAR_10,
         VAR_23->max_frame_retries) ||
     FUNC_0(VAR_21, VAR_7,
          VAR_23->iftypes) ||
     FUNC_5(VAR_21, VAR_8, VAR_23->lbt))
  return -VAR_0;

 FUNC_1(VAR_21, VAR_24);

 return 0;
}
