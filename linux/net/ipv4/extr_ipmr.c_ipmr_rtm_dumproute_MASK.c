
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int sk; } ;
struct netlink_callback {int extack; int nlh; scalar_t__ strict_check; } ;
struct mr_table {int dummy; } ;
struct fib_dump_filter {scalar_t__ dump_all_families; scalar_t__ table_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,struct fib_dump_filter*,struct netlink_callback*) ;
 struct mr_table* FUNC_2 (int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct sk_buff*,struct netlink_callback*,int ,int ,int *,struct fib_dump_filter*) ;
 int FUNC_4 (struct mr_table*,struct sk_buff*,struct netlink_callback*,int ,int *,struct fib_dump_filter*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_4, struct netlink_callback *VAR_5)
{
 struct fib_dump_filter VAR_6 = {};
 int VAR_7;

 if (VAR_5->strict_check) {
  VAR_7 = FUNC_1(FUNC_5(VAR_4->sk), VAR_5->nlh,
         &VAR_6, VAR_5);
  if (VAR_7 < 0)
   return VAR_7;
 }

 if (VAR_6.table_id) {
  struct mr_table *VAR_8;

  VAR_8 = FUNC_2(FUNC_5(VAR_4->sk), VAR_6.table_id);
  if (!VAR_8) {
   if (VAR_6.dump_all_families)
    return VAR_4->len;

   FUNC_0(VAR_5->extack, "ipv4: MR table does not exist");
   return -VAR_0;
  }
  VAR_7 = FUNC_4(VAR_8, VAR_4, VAR_5, VAR_1,
        &VAR_3, &VAR_6);
  return VAR_4->len ? : VAR_7;
 }

 return FUNC_3(VAR_4, VAR_5, VAR_2,
    VAR_1, &VAR_3, &VAR_6);
}
