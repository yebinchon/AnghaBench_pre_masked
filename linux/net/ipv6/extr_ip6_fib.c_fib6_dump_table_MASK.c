
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct netlink_callback {scalar_t__* args; } ;
struct net {int dummy; } ;
struct fib6_walker {scalar_t__ skip; scalar_t__ skip_in_node; scalar_t__ count; TYPE_1__* root; TYPE_1__* node; int state; } ;
struct TYPE_2__ {int fn_sernum; } ;
struct fib6_table {int tb6_lock; TYPE_1__ tb6_root; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,struct fib6_walker*) ;
 int FUNC_1 (struct fib6_walker*) ;
 int FUNC_2 (struct net*,struct fib6_walker*) ;
 struct net* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct fib6_table *VAR_1, struct sk_buff *VAR_2,
      struct netlink_callback *VAR_3)
{
 struct net *VAR_4 = FUNC_3(VAR_2->sk);
 struct fib6_walker *VAR_5;
 int VAR_6;

 VAR_5 = (void *)VAR_3->args[2];
 VAR_5->root = &VAR_1->tb6_root;

 if (VAR_3->args[4] == 0) {
  VAR_5->count = 0;
  VAR_5->skip = 0;
  VAR_5->skip_in_node = 0;

  FUNC_4(&VAR_1->tb6_lock);
  VAR_6 = FUNC_0(VAR_4, VAR_5);
  FUNC_5(&VAR_1->tb6_lock);
  if (VAR_6 > 0) {
   VAR_3->args[4] = 1;
   VAR_3->args[5] = VAR_5->root->fn_sernum;
  }
 } else {
  if (VAR_3->args[5] != VAR_5->root->fn_sernum) {

   VAR_3->args[5] = VAR_5->root->fn_sernum;
   VAR_5->state = VAR_0;
   VAR_5->node = VAR_5->root;
   VAR_5->skip = VAR_5->count;
   VAR_5->skip_in_node = 0;
  } else
   VAR_5->skip = 0;

  FUNC_4(&VAR_1->tb6_lock);
  VAR_6 = FUNC_1(VAR_5);
  FUNC_5(&VAR_1->tb6_lock);
  if (VAR_6 <= 0) {
   FUNC_2(VAR_4, VAR_5);
   VAR_3->args[4] = 0;
  }
 }

 return VAR_6;
}
