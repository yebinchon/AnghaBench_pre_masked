
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct nlattr*) ;
 scalar_t__ FUNC_1 (struct nlattr*) ;

__attribute__((used)) static int FUNC_2(struct nlattr *VAR_8[], struct nlattr *VAR_9[],
     struct netlink_ext_ack *VAR_10)
{
 __be16 VAR_11;

 if (!VAR_9)
  return 0;

 VAR_11 = 0;
 if (VAR_9[VAR_5])
  VAR_11 |= FUNC_0(VAR_9[VAR_5]);
 if (VAR_9[VAR_6])
  VAR_11 |= FUNC_0(VAR_9[VAR_6]);
 if (VAR_11 & (VAR_2|VAR_1))
  return -VAR_0;

 if (VAR_9[VAR_3] &&
     VAR_9[VAR_4] &&
     FUNC_1(VAR_9[VAR_4]) != VAR_7)
  return -VAR_0;

 return 0;
}
