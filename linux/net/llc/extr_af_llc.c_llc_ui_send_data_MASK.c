
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct llc_sock {scalar_t__ p_flag; scalar_t__ remote_busy_flag; int state; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct llc_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,long) ;
 long FUNC_5 (struct sock*,int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct sock* VAR_0, struct sk_buff *VAR_1, int VAR_2)
{
 struct llc_sock* VAR_3 = FUNC_3(VAR_0);

 if (FUNC_6(FUNC_2(VAR_3->state) ||
       VAR_3->remote_busy_flag ||
       VAR_3->p_flag)) {
  long VAR_4 = FUNC_5(VAR_0, VAR_2);
  int VAR_5;

  VAR_5 = FUNC_4(VAR_0, VAR_4);
  if (VAR_5) {
   FUNC_0(VAR_1);
   return VAR_5;
  }
 }
 return FUNC_1(VAR_0, VAR_1);
}
