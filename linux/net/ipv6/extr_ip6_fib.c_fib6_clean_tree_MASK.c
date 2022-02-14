
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net {int dummy; } ;
struct fib6_node {int dummy; } ;
struct TYPE_2__ {scalar_t__ skip_in_node; scalar_t__ skip; scalar_t__ count; int func; struct fib6_node* root; } ;
struct fib6_cleaner {int (* func ) (struct fib6_info*,void*) ;int sernum; int skip_notify; TYPE_1__ w; struct net* net; void* arg; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct net *VAR_1, struct fib6_node *VAR_2,
       int (*VAR_3)(struct fib6_info *, void *VAR_4),
       int VAR_5, void *VAR_6, bool VAR_7)
{
 struct fib6_cleaner VAR_8;

 VAR_8.w.root = VAR_2;
 VAR_8.w.func = VAR_0;
 VAR_8.w.count = 0;
 VAR_8.w.skip = 0;
 VAR_8.w.skip_in_node = 0;
 VAR_8.func = VAR_3;
 VAR_8.sernum = VAR_5;
 VAR_8.arg = VAR_6;
 VAR_8.net = VAR_1;
 VAR_8.skip_notify = VAR_7;

 FUNC_0(VAR_1, &VAR_8.w);
}
