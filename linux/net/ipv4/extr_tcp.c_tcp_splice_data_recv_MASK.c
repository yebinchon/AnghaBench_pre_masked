
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcp_splice_state {int flags; int pipe; } ;
struct sk_buff {int sk; } ;
struct TYPE_4__ {struct tcp_splice_state* data; } ;
struct TYPE_5__ {int count; TYPE_1__ arg; } ;
typedef TYPE_2__ read_descriptor_t ;


 int FUNC_0 (int,size_t) ;
 int FUNC_1 (struct sk_buff*,int ,unsigned int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(read_descriptor_t *VAR_0, struct sk_buff *VAR_1,
    unsigned int VAR_2, size_t VAR_3)
{
 struct tcp_splice_state *VAR_4 = VAR_0->arg.data;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_1->sk, VAR_2, VAR_4->pipe,
         FUNC_0(VAR_0->count, VAR_3), VAR_4->flags);
 if (VAR_5 > 0)
  VAR_0->count -= VAR_5;
 return VAR_5;
}
