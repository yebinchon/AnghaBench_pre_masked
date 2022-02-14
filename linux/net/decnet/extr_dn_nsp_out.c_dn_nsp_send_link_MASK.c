
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dn_scp {int persist_fxn; int persist; } ;
typedef int gfp_t ;
struct TYPE_2__ {int nsp_flags; } ;


 scalar_t__ VAR_0 ;
 struct dn_scp* FUNC_0 (struct sock*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int VAR_1 ;
 struct sk_buff* FUNC_2 (struct sock*,scalar_t__,int ) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,struct sk_buff*,int ,int) ;
 int VAR_2 ;
 unsigned char* FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;

void FUNC_7(struct sock *VAR_3, unsigned char VAR_4, char VAR_5)
{
 struct dn_scp *VAR_6 = FUNC_0(VAR_3);
 struct sk_buff *VAR_7;
 unsigned char *VAR_8;
 gfp_t VAR_9 = VAR_1;

 if ((VAR_7 = FUNC_2(VAR_3, VAR_0 + 2, VAR_9)) == ((void*)0))
  return;

 FUNC_6(VAR_7, VAR_0);
 VAR_8 = FUNC_5(VAR_7, 2);
 FUNC_1(VAR_7)->nsp_flags = 0x10;
 *VAR_8++ = VAR_4;
 *VAR_8 = VAR_5;

 FUNC_4(VAR_3, VAR_7, VAR_9, 1);

 VAR_6->persist = FUNC_3(VAR_3);
 VAR_6->persist_fxn = VAR_2;
}
