
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct strparser {TYPE_2__* sk; } ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {scalar_t__ data; } ;
struct TYPE_8__ {TYPE_1__ arg; } ;
typedef TYPE_3__ read_descriptor_t ;
struct TYPE_7__ {int sk_rcvtimeo; int sk_rcvbuf; } ;


 int FUNC_0 (TYPE_3__*,struct sk_buff*,unsigned int,size_t,int ,int ) ;

__attribute__((used)) static int FUNC_1(read_descriptor_t *VAR_0, struct sk_buff *VAR_1,
       unsigned int VAR_2, size_t VAR_3)
{
 struct strparser *VAR_4 = (struct strparser *)VAR_0->arg.data;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
      VAR_4->sk->sk_rcvbuf, VAR_4->sk->sk_rcvtimeo);
}
