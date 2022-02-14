
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {struct rb_node* rb_node; } ;
struct sock {TYPE_1__ tcp_rtx_queue; } ;
struct sk_buff {int dummy; } ;
struct rb_node {struct rb_node* rb_right; struct rb_node* rb_left; } ;
struct TYPE_4__ {int end_seq; int seq; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct sk_buff* FUNC_2 (struct rb_node*) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct sock *VAR_0, u32 VAR_1)
{
 struct rb_node *VAR_2, **VAR_3 = &VAR_0->tcp_rtx_queue.rb_node;
 struct sk_buff *VAR_4;

 while (*VAR_3) {
  VAR_2 = *VAR_3;
  VAR_4 = FUNC_2(VAR_2);
  if (FUNC_1(VAR_1, FUNC_0(VAR_4)->seq)) {
   VAR_3 = &VAR_2->rb_left;
   continue;
  }
  if (!FUNC_1(VAR_1, FUNC_0(VAR_4)->end_seq)) {
   VAR_3 = &VAR_2->rb_right;
   continue;
  }
  return VAR_4;
 }
 return ((void*)0);
}
