
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct nlattr*) ;

__attribute__((used)) static int FUNC_1(struct nlattr *VAR_4[], struct nlattr *VAR_5[],
    struct netlink_ext_ack *VAR_6)
{
 u8 VAR_7;

 if (!VAR_5 || !VAR_5[VAR_1])
  return 0;

 VAR_7 = FUNC_0(VAR_5[VAR_1]);
 if (VAR_7 != VAR_2 && VAR_7 != VAR_3 && VAR_7 != 0)
  return -VAR_0;

 return 0;
}
