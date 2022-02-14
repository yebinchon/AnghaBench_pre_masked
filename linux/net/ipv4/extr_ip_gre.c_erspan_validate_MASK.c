
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
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (struct nlattr**,struct nlattr**,struct netlink_ext_ack*) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct nlattr *VAR_9[], struct nlattr *VAR_10[],
      struct netlink_ext_ack *VAR_11)
{
 __be16 VAR_12 = 0;
 int VAR_13;

 if (!VAR_10)
  return 0;

 VAR_13 = FUNC_0(VAR_9, VAR_10, VAR_11);
 if (VAR_13)
  return VAR_13;


 if (VAR_10[VAR_7])
  VAR_12 |= FUNC_1(VAR_10[VAR_7]);
 if (VAR_10[VAR_5])
  VAR_12 |= FUNC_1(VAR_10[VAR_5]);
 if (!VAR_10[VAR_4] &&
     VAR_12 != (VAR_2 | VAR_1))
  return -VAR_0;




 if (VAR_10[VAR_6] &&
     (FUNC_3(FUNC_2(VAR_10[VAR_6])) & ~VAR_3))
  return -VAR_0;

 if (VAR_10[VAR_8] &&
     (FUNC_3(FUNC_2(VAR_10[VAR_8])) & ~VAR_3))
  return -VAR_0;

 return 0;
}
