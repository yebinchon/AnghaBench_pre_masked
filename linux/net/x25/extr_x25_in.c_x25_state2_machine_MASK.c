
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int * data; } ;




 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct sock*,int ,int ,int ) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int const) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_1, struct sk_buff *VAR_2, int VAR_3)
{
 switch (VAR_3) {

  case 128:
   if (!FUNC_0(VAR_2, VAR_0 + 2))
    goto out_clear;

   FUNC_3(VAR_1, 129);
   FUNC_1(VAR_1, 0, VAR_2->data[3], VAR_2->data[4]);
   break;

  case 129:
   FUNC_1(VAR_1, 0, 0, 0);
   break;

  default:
   break;
 }

 return 0;

out_clear:
 FUNC_3(VAR_1, 128);
 FUNC_2(VAR_1);
 return 0;
}
