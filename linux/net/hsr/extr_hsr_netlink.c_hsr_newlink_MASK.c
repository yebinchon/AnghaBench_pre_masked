
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 struct net_device* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (struct net_device*,struct net_device**,unsigned char,unsigned char) ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (struct nlattr*) ;
 unsigned char FUNC_4 (struct nlattr*) ;

__attribute__((used)) static int FUNC_5(struct net *VAR_6, struct net_device *VAR_7,
         struct nlattr *VAR_8[], struct nlattr *VAR_9[],
         struct netlink_ext_ack *VAR_10)
{
 struct net_device *VAR_11[2];
 unsigned char VAR_12, VAR_13;

 if (!VAR_9) {
  FUNC_2(VAR_7, "HSR: No slave devices specified\n");
  return -VAR_0;
 }
 if (!VAR_9[VAR_3]) {
  FUNC_2(VAR_7, "HSR: Slave1 device not specified\n");
  return -VAR_0;
 }
 VAR_11[0] = FUNC_0(VAR_6,
         FUNC_3(VAR_9[VAR_3]));
 if (!VAR_9[VAR_4]) {
  FUNC_2(VAR_7, "HSR: Slave2 device not specified\n");
  return -VAR_0;
 }
 VAR_11[1] = FUNC_0(VAR_6,
         FUNC_3(VAR_9[VAR_4]));

 if (!VAR_11[0] || !VAR_11[1])
  return -VAR_1;
 if (VAR_11[0] == VAR_11[1])
  return -VAR_0;

 if (!VAR_9[VAR_2])
  VAR_12 = 0;
 else
  VAR_12 = FUNC_4(VAR_9[VAR_2]);

 if (!VAR_9[VAR_5])
  VAR_13 = 0;
 else
  VAR_13 = FUNC_4(VAR_9[VAR_5]);

 return FUNC_1(VAR_7, VAR_11, VAR_12, VAR_13);
}
