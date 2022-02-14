
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct genl_info {TYPE_1__* nlhdr; } ;
struct genl_family {int dummy; } ;
struct TYPE_2__ {int nlmsg_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct genl_family*,int ,unsigned int) ;
 int FUNC_1 (struct genl_info*) ;

__attribute__((used)) static bool FUNC_2(struct genl_family *VAR_1, struct genl_info *VAR_2,
       unsigned int VAR_3)
{
 return VAR_2->nlhdr->nlmsg_flags & VAR_0 ||
        FUNC_0(VAR_1, FUNC_1(VAR_2), VAR_3);
}
