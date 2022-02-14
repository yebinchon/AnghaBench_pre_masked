
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpan_dev {int wpan_phy; struct wpan_dev* netdev; } ;
struct sk_buff {int dummy; } ;
struct net_device {int wpan_phy; struct net_device* netdev; } ;
struct genl_ops {int internal_flags; } ;
struct genl_info {struct wpan_dev** user_ptr; int attrs; } ;
struct cfg802154_registered_device {int wpan_phy; struct cfg802154_registered_device* netdev; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct wpan_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct wpan_dev*) ;
 struct wpan_dev* FUNC_3 (int ,int ) ;
 struct wpan_dev* FUNC_4 (int ,struct genl_info*) ;
 int FUNC_5 (struct wpan_dev*) ;
 int FUNC_6 (struct genl_info*) ;
 int FUNC_7 (struct wpan_dev*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 struct wpan_dev* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(const struct genl_ops *VAR_7, struct sk_buff *VAR_8,
        struct genl_info *VAR_9)
{
 struct cfg802154_registered_device *VAR_10;
 struct wpan_dev *VAR_11;
 struct net_device *VAR_12;
 bool VAR_13 = VAR_7->internal_flags & VAR_4;

 if (VAR_13)
  FUNC_8();

 if (VAR_7->internal_flags & VAR_6) {
  VAR_10 = FUNC_4(FUNC_6(VAR_9), VAR_9);
  if (FUNC_1(VAR_10)) {
   if (VAR_13)
    FUNC_9();
   return FUNC_2(VAR_10);
  }
  VAR_9->user_ptr[0] = VAR_10;
 } else if (VAR_7->internal_flags & VAR_3 ||
     VAR_7->internal_flags & VAR_5) {
  FUNC_0();
  VAR_11 = FUNC_3(FUNC_6(VAR_9),
          VAR_9->attrs);
  if (FUNC_1(VAR_11)) {
   if (VAR_13)
    FUNC_9();
   return FUNC_2(VAR_11);
  }

  VAR_12 = VAR_11->netdev;
  VAR_10 = FUNC_10(VAR_11->wpan_phy);

  if (VAR_7->internal_flags & VAR_3) {
   if (!VAR_12) {
    if (VAR_13)
     FUNC_9();
    return -VAR_0;
   }

   VAR_9->user_ptr[1] = VAR_12;
  } else {
   VAR_9->user_ptr[1] = VAR_11;
  }

  if (VAR_12) {
   if (VAR_7->internal_flags & VAR_2 &&
       !FUNC_7(VAR_12)) {
    if (VAR_13)
     FUNC_9();
    return -VAR_1;
   }

   FUNC_5(VAR_12);
  }

  VAR_9->user_ptr[0] = VAR_10;
 }

 return 0;
}
