
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct Qdisc {int limit; } ;
struct TYPE_3__ {int tx_queue_len; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (struct Qdisc*,struct nlattr*,struct netlink_ext_ack*) ;
 int VAR_6 ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr**,int ,struct nlattr*,int ,struct netlink_ext_ack*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_6(struct Qdisc *VAR_7, struct nlattr *VAR_8,
       struct netlink_ext_ack *VAR_9)
{
 struct nlattr *VAR_10[VAR_3 + 1];
 int VAR_11;

 if (!VAR_8)
  return -VAR_0;

 VAR_11 = FUNC_3(VAR_10, VAR_3, VAR_8, VAR_6,
       VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 if (VAR_10[VAR_4] || VAR_10[VAR_5]) {
  FUNC_0(VAR_9,
       "virtual queue configuration can't be specified at initialization time");
  return -VAR_0;
 }

 if (VAR_10[VAR_2])
  VAR_7->limit = FUNC_2(VAR_10[VAR_2]);
 else
  VAR_7->limit = FUNC_5(VAR_7)->tx_queue_len
               * FUNC_4(FUNC_5(VAR_7));

 return FUNC_1(VAR_7, VAR_10[VAR_1], VAR_9);
}
