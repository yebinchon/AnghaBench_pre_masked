
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {struct wireless_dev* netdev; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct genl_ops {int internal_flags; } ;
struct genl_info {struct wireless_dev** user_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wireless_dev*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct nlmsghdr*) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(const struct genl_ops *VAR_3, struct sk_buff *VAR_4,
         struct genl_info *VAR_5)
{
 if (VAR_5->user_ptr[1]) {
  if (VAR_3->internal_flags & VAR_2) {
   struct wireless_dev *VAR_6 = VAR_5->user_ptr[1];

   if (VAR_6->netdev)
    FUNC_0(VAR_6->netdev);
  } else {
   FUNC_0(VAR_5->user_ptr[1]);
  }
 }

 if (VAR_3->internal_flags & VAR_1)
  FUNC_5();






 if (VAR_3->internal_flags & VAR_0) {
  struct nlmsghdr *VAR_7 = FUNC_3(VAR_4);

  FUNC_1(FUNC_2(VAR_7), 0, FUNC_4(VAR_7));
 }
}
