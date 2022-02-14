
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int ip_ptr; } ;
struct TYPE_2__ {int * data; } ;
struct in_device {TYPE_1__ cnf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct nlattr*) ;
 struct nlattr* FUNC_1 (struct sk_buff*,int ,int) ;
 struct in_device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_4, const struct net_device *VAR_5,
        u32 VAR_6)
{
 struct in_device *VAR_7 = FUNC_2(VAR_5->ip_ptr);
 struct nlattr *VAR_8;
 int VAR_9;

 if (!VAR_7)
  return -VAR_1;

 VAR_8 = FUNC_1(VAR_4, VAR_2, VAR_3 * 4);
 if (!VAR_8)
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  ((u32 *) FUNC_0(VAR_8))[VAR_9] = VAR_7->cnf.data[VAR_9];

 return 0;
}
