
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
typedef scalar_t__ __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*) ;
 scalar_t__ FUNC_4 (struct nlattr*) ;
 scalar_t__ FUNC_5 (struct nlattr*) ;

__attribute__((used)) static int FUNC_6(struct nlattr *VAR_10[], struct nlattr *VAR_11[],
         struct netlink_ext_ack *VAR_12)
{
 if (VAR_10[VAR_6]) {
  if (FUNC_5(VAR_10[VAR_6]) != VAR_3)
   return -VAR_1;
  if (!FUNC_1(FUNC_2(VAR_10[VAR_6])))
   return -VAR_0;
 }

 if (!VAR_11)
  return 0;
 return 0;
}
