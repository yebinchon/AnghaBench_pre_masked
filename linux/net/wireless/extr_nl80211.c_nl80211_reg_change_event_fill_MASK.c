
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int regulatory_flags; } ;
struct sk_buff {int dummy; } ;
struct regulatory_request {char* alpha2; scalar_t__ wiphy_idx; scalar_t__ intersect; int initiator; } ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,char*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 struct wiphy* FUNC_4 (scalar_t__) ;

__attribute__((used)) static bool FUNC_5(struct sk_buff *VAR_11,
       struct regulatory_request *VAR_12)
{

 if (FUNC_3(VAR_11, VAR_1, VAR_12->initiator))
  goto nla_put_failure;

 if (VAR_12->alpha2[0] == '0' && VAR_12->alpha2[1] == '0') {
  if (FUNC_3(VAR_11, VAR_2,
          VAR_8))
   goto nla_put_failure;
 } else if (VAR_12->alpha2[0] == '9' && VAR_12->alpha2[1] == '9') {
  if (FUNC_3(VAR_11, VAR_2,
          VAR_6))
   goto nla_put_failure;
 } else if ((VAR_12->alpha2[0] == '9' && VAR_12->alpha2[1] == '8') ||
     VAR_12->intersect) {
  if (FUNC_3(VAR_11, VAR_2,
          VAR_7))
   goto nla_put_failure;
 } else {
  if (FUNC_3(VAR_11, VAR_2,
          VAR_5) ||
      FUNC_1(VAR_11, VAR_0,
       VAR_12->alpha2))
   goto nla_put_failure;
 }

 if (VAR_12->wiphy_idx != VAR_10) {
  struct wiphy *VAR_13 = FUNC_4(VAR_12->wiphy_idx);

  if (VAR_13 &&
      FUNC_2(VAR_11, VAR_3, VAR_12->wiphy_idx))
   goto nla_put_failure;

  if (VAR_13 &&
      VAR_13->regulatory_flags & VAR_9 &&
      FUNC_0(VAR_11, VAR_4))
   goto nla_put_failure;
 }

 return 1;

nla_put_failure:
 return 0;
}
