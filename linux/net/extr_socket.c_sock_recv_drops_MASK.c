
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct msghdr {int dummy; } ;
typedef int __u32 ;
struct TYPE_2__ {scalar_t__ dropcount; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct msghdr*,int ,int ,int,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct sock*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct msghdr *VAR_3, struct sock *VAR_4,
       struct sk_buff *VAR_5)
{
 if (FUNC_2(VAR_4, VAR_0) && VAR_5 && FUNC_0(VAR_5)->dropcount)
  FUNC_1(VAR_3, VAR_1, VAR_2,
   sizeof(__u32), &FUNC_0(VAR_5)->dropcount);
}
