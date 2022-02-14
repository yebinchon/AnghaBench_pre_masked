
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int seq; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct sk_buff* FUNC_2 (struct sock*,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct sk_buff *VAR_0, struct sock *VAR_1,
     u32 VAR_2)
{
 if (VAR_0 && FUNC_1(FUNC_0(VAR_0)->seq, VAR_2))
  return VAR_0;

 return FUNC_2(VAR_1, VAR_2);
}
