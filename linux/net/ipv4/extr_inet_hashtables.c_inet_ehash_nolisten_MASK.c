
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {TYPE_1__* sk_prot; } ;
struct TYPE_2__ {int orphan_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,struct sock*) ;
 int FUNC_2 (struct sock*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int ,TYPE_1__*,int) ;
 int FUNC_6 (struct sock*,int ) ;

bool FUNC_7(struct sock *VAR_2, struct sock *VAR_3)
{
 bool VAR_4 = FUNC_1(VAR_2, VAR_3);

 if (VAR_4) {
  FUNC_5(FUNC_4(VAR_2), VAR_2->sk_prot, 1);
 } else {
  FUNC_3(VAR_2->sk_prot->orphan_count);
  FUNC_2(VAR_2, VAR_1);
  FUNC_6(VAR_2, VAR_0);
  FUNC_0(VAR_2);
 }
 return VAR_4;
}
