
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int dupl_rcvcnt; } ;


 int FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (unsigned int,int *) ;
 unsigned int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,struct sk_buff_head*) ;
 TYPE_1__* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,struct sk_buff*,struct sk_buff_head*) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 unsigned int VAR_2 = FUNC_2(VAR_0);
 struct sk_buff_head VAR_3;
 unsigned int VAR_4;

 FUNC_0(&VAR_3);

 FUNC_6(VAR_0, VAR_1, &VAR_3);
 VAR_4 = FUNC_2(VAR_0) - VAR_2;
 FUNC_1(VAR_4, &FUNC_5(VAR_0)->dupl_rcvcnt);


 FUNC_4(FUNC_3(VAR_0), &VAR_3);
 return 0;
}
