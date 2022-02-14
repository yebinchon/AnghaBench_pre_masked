
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubuf_info {int len; } ;
struct sock {int sk_zckey; } ;
struct TYPE_2__ {struct sock* sk; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct ubuf_info*) ;
 int FUNC_2 (struct ubuf_info*) ;

void FUNC_3(struct ubuf_info *VAR_0, bool VAR_1)
{
 if (VAR_0) {
  struct sock *VAR_2 = FUNC_1(VAR_0)->sk;

  FUNC_0(&VAR_2->sk_zckey);
  VAR_0->len--;

  if (VAR_1)
   FUNC_2(VAR_0);
 }
}
