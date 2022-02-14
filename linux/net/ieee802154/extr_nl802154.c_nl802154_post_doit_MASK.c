
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpan_dev {struct wpan_dev* netdev; } ;
struct sk_buff {int dummy; } ;
struct genl_ops {int internal_flags; } ;
struct genl_info {struct wpan_dev** user_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpan_dev*) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(const struct genl_ops *VAR_2, struct sk_buff *VAR_3,
          struct genl_info *VAR_4)
{
 if (VAR_4->user_ptr[1]) {
  if (VAR_2->internal_flags & VAR_1) {
   struct wpan_dev *VAR_5 = VAR_4->user_ptr[1];

   if (VAR_5->netdev)
    FUNC_0(VAR_5->netdev);
  } else {
   FUNC_0(VAR_4->user_ptr[1]);
  }
 }

 if (VAR_2->internal_flags & VAR_0)
  FUNC_1();
}
