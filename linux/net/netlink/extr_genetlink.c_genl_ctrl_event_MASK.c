
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct genl_multicast_group {int dummy; } ;
struct genl_family {int netnsok; } ;
struct TYPE_3__ {int genl_sock; } ;


 int FUNC_0 (int) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct genl_multicast_group const*) ;
 struct sk_buff* FUNC_4 (struct genl_family const*,int ,int ,int) ;
 struct sk_buff* FUNC_5 (struct genl_family const*,struct genl_multicast_group const*,int,int ,int ,int) ;
 int VAR_3 ;
 int FUNC_6 (int *,struct sk_buff*,int ,int ,int ) ;
 int FUNC_7 (int *,TYPE_1__*,struct sk_buff*,int ,int ,int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(int VAR_5, const struct genl_family *VAR_6,
      const struct genl_multicast_group *VAR_7,
      int VAR_8)
{
 struct sk_buff *VAR_9;


 if (!VAR_4.genl_sock)
  return 0;

 switch (VAR_5) {
 case 129:
 case 131:
  FUNC_3(VAR_7);
  VAR_9 = FUNC_4(VAR_6, 0, 0, VAR_5);
  break;
 case 128:
 case 130:
  FUNC_0(!VAR_7);
  VAR_9 = FUNC_5(VAR_6, VAR_7, VAR_8, 0, 0, VAR_5);
  break;
 default:
  return -VAR_0;
 }

 if (FUNC_1(VAR_9))
  return FUNC_2(VAR_9);

 if (!VAR_6->netnsok) {
  FUNC_7(&VAR_3, &VAR_4, VAR_9, 0,
     0, VAR_2);
 } else {
  FUNC_8();
  FUNC_6(&VAR_3, VAR_9, 0,
     0, VAR_1);
  FUNC_9();
 }

 return 0;
}
