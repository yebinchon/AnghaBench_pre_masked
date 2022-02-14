
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct genl_info {TYPE_1__* nlhdr; } ;
struct TYPE_2__ {int nlmsg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,struct genl_info*,int ) ;
 int VAR_3 ;

int FUNC_1(struct sk_buff *VAR_4, struct genl_info *VAR_5)
{
 if ((VAR_5->nlhdr->nlmsg_flags & (VAR_1 | VAR_2)) !=
     (VAR_1 | VAR_2))
  return -VAR_0;

 return FUNC_0(VAR_4, VAR_5, VAR_3);
}
