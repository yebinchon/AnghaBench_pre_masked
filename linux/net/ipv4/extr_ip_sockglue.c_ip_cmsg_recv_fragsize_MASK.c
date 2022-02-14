
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int val ;
struct sk_buff {int dummy; } ;
struct msghdr {int dummy; } ;
struct TYPE_2__ {int frag_max_size; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct msghdr*,int ,int ,int,int*) ;

__attribute__((used)) static void FUNC_2(struct msghdr *VAR_2, struct sk_buff *VAR_3)
{
 int VAR_4;

 if (FUNC_0(VAR_3)->frag_max_size == 0)
  return;

 VAR_4 = FUNC_0(VAR_3)->frag_max_size;
 FUNC_1(VAR_2, VAR_1, VAR_0, sizeof(VAR_4), &VAR_4);
}
