
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_sock {int condition; int state; int vl; int vs; int vr; int va; } ;
struct sock {int dummy; } ;
struct sk_buff {int * data; } ;


 int const VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct sock*,int ,int ,int ) ;
 int FUNC_2 (struct sock*) ;
 struct x25_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int const) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_4, struct sk_buff *VAR_5, int VAR_6)
{
 struct x25_sock *VAR_7 = FUNC_3(VAR_4);

 switch (VAR_6) {

  case 128:
   FUNC_6(VAR_4, 129);

  case 129: {
   FUNC_5(VAR_4);
   VAR_7->condition = 0x00;
   VAR_7->va = 0;
   VAR_7->vr = 0;
   VAR_7->vs = 0;
   VAR_7->vl = 0;
   VAR_7->state = VAR_2;
   FUNC_2(VAR_4);
   break;
  }
  case 130:
   if (!FUNC_0(VAR_5, VAR_3 + 2))
    goto out_clear;

   FUNC_6(VAR_4, VAR_0);
   FUNC_1(VAR_4, 0, VAR_5->data[3], VAR_5->data[4]);
   break;

  default:
   break;
 }

 return 0;

out_clear:
 FUNC_6(VAR_4, 130);
 VAR_7->state = VAR_1;
 FUNC_4(VAR_4);
 return 0;
}
