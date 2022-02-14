
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_state; int sk_userlocks; TYPE_1__* sk_prot; } ;
struct TYPE_4__ {int icsk_bind_hash; } ;
struct TYPE_3__ {int (* unhash ) (struct sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (int) ;
 int VAR_15 ;

 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_2 (int ,int ) ;

 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 TYPE_2__* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,int ,int,int) ;
 int FUNC_10 (struct sock*) ;

void FUNC_11(struct sock *VAR_29, int VAR_30)
{
 int VAR_31 = VAR_29->sk_state;
 FUNC_1((int)VAR_5 != (int)128);
 FUNC_1((int)VAR_13 != (int)VAR_27);
 FUNC_1((int)VAR_12 != (int)VAR_26);
 FUNC_1((int)VAR_6 != (int)VAR_18);
 FUNC_1((int)VAR_7 != (int)VAR_19);
 FUNC_1((int)VAR_14 != (int)VAR_28);
 FUNC_1((int)VAR_2 != (int)129);
 FUNC_1((int)VAR_3 != (int)VAR_16);
 FUNC_1((int)VAR_8 != (int)VAR_20);
 FUNC_1((int)VAR_9 != (int)VAR_21);
 FUNC_1((int)VAR_4 != (int)VAR_17);
 FUNC_1((int)VAR_11 != (int)VAR_25);
 FUNC_1((int)VAR_10 != (int)VAR_22);

 if (FUNC_0(FUNC_10(VAR_29), VAR_1))
  FUNC_9(VAR_29, VAR_0, VAR_31, VAR_30);

 switch (VAR_30) {
 case 128:
  if (VAR_31 != 128)
   FUNC_3(FUNC_7(VAR_29), VAR_23);
  break;

 case 129:
  if (VAR_31 == VAR_16 || VAR_31 == 128)
   FUNC_3(FUNC_7(VAR_29), VAR_24);

  VAR_29->sk_prot->unhash(VAR_29);
  if (FUNC_4(VAR_29)->icsk_bind_hash &&
      !(VAR_29->sk_userlocks & VAR_15))
   FUNC_5(VAR_29);

 default:
  if (VAR_31 == 128)
   FUNC_2(FUNC_7(VAR_29), VAR_23);
 }




 FUNC_6(VAR_29, VAR_30);
}
