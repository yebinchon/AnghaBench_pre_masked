
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {struct fib6_info* fib6_null_entry; } ;
struct net {TYPE_4__ ipv6; } ;
struct fib6_result {struct fib6_info* f6i; int fib6_type; int fib6_flags; int nh; } ;
struct fib6_node {int fn_bit; int rr_ptr; int leaf; } ;
struct TYPE_6__ {int plen; } ;
struct TYPE_5__ {int plen; } ;
struct fib6_info {scalar_t__ fib6_metric; int fib6_type; int fib6_flags; int fib6_nh; TYPE_3__* fib6_table; scalar_t__ fib6_node; int fib6_next; TYPE_2__ fib6_src; TYPE_1__ fib6_dst; } ;
struct TYPE_7__ {int tb6_lock; } ;


 int FUNC_0 (struct fib6_node*,struct fib6_info*,struct fib6_info*,int,int,int*,struct fib6_result*) ;
 int FUNC_1 (int ,struct fib6_info*) ;
 struct fib6_info* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct net *VAR_0, struct fib6_node *VAR_1, int VAR_2,
         struct fib6_result *VAR_3, int VAR_4)
{
 struct fib6_info *VAR_5 = FUNC_2(VAR_1->leaf);
 struct fib6_info *VAR_6;
 bool VAR_7 = 0;
 int VAR_8;


 VAR_3->f6i = ((void*)0);

 if (!VAR_5 || VAR_5 == VAR_0->ipv6.fib6_null_entry)
  goto out;

 VAR_6 = FUNC_2(VAR_1->rr_ptr);
 if (!VAR_6)
  VAR_6 = VAR_5;






 VAR_8 = VAR_6->fib6_dst.plen;




 if (VAR_1->fn_bit != VAR_8)
  goto out;

 FUNC_0(VAR_1, VAR_5, VAR_6, VAR_2, VAR_4, &VAR_7, VAR_3);
 if (VAR_7) {
  struct fib6_info *VAR_9 = FUNC_2(VAR_6->fib6_next);


  if (!VAR_9 || VAR_9->fib6_metric != VAR_6->fib6_metric)
   VAR_9 = VAR_5;

  if (VAR_9 != VAR_6) {
   FUNC_3(&VAR_5->fib6_table->tb6_lock);

   if (VAR_9->fib6_node)
    FUNC_1(VAR_1->rr_ptr, VAR_9);
   FUNC_4(&VAR_5->fib6_table->tb6_lock);
  }
 }

out:
 if (!VAR_3->f6i) {
  VAR_3->f6i = VAR_0->ipv6.fib6_null_entry;
  VAR_3->nh = VAR_3->f6i->fib6_nh;
  VAR_3->fib6_flags = VAR_3->f6i->fib6_flags;
  VAR_3->fib6_type = VAR_3->f6i->fib6_type;
 }
}
