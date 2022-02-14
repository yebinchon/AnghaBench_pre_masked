
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int sk; } ;
struct nlmsghdr {int dummy; } ;
struct netlink_callback {int extack; scalar_t__ strict_check; struct nlmsghdr* nlh; } ;
struct mr_table {int dummy; } ;
struct fib_dump_filter {scalar_t__ dump_all_families; scalar_t__ table_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 struct mr_table* FUNC_1 (int ,scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (int ,struct nlmsghdr const*,struct fib_dump_filter*,struct netlink_callback*) ;
 int VAR_3 ;
 int FUNC_3 (struct sk_buff*,struct netlink_callback*,int ,int ,int *,struct fib_dump_filter*) ;
 int FUNC_4 (struct mr_table*,struct sk_buff*,struct netlink_callback*,int ,int *,struct fib_dump_filter*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_4, struct netlink_callback *VAR_5)
{
 const struct nlmsghdr *VAR_6 = VAR_5->nlh;
 struct fib_dump_filter VAR_7 = {};
 int VAR_8;

 if (VAR_5->strict_check) {
  VAR_8 = FUNC_2(FUNC_5(VAR_4->sk), VAR_6,
         &VAR_7, VAR_5);
  if (VAR_8 < 0)
   return VAR_8;
 }

 if (VAR_7.table_id) {
  struct mr_table *VAR_9;

  VAR_9 = FUNC_1(FUNC_5(VAR_4->sk), VAR_7.table_id);
  if (!VAR_9) {
   if (VAR_7.dump_all_families)
    return VAR_4->len;

   FUNC_0(VAR_5->extack, "MR table does not exist");
   return -VAR_0;
  }
  VAR_8 = FUNC_4(VAR_9, VAR_4, VAR_5, VAR_1,
        &VAR_3, &VAR_7);
  return VAR_4->len ? : VAR_8;
 }

 return FUNC_3(VAR_4, VAR_5, VAR_2,
    VAR_1, &VAR_3, &VAR_7);
}
