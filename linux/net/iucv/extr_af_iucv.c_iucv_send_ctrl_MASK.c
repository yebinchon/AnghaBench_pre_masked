
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sock {int sk_shutdown; } ;
struct sk_buff {int dummy; } ;
struct iucv_sock {int hs_dev; } ;
struct af_iucv_trans_hdr {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct sock*,struct sk_buff*,int) ;
 struct iucv_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_4 (struct sock*,int,int,int*) ;

__attribute__((used)) static int FUNC_5(struct sock *VAR_2, u8 VAR_3)
{
 struct iucv_sock *VAR_4 = FUNC_2(VAR_2);
 int VAR_5 = 0;
 int VAR_6;
 struct sk_buff *VAR_7;
 u8 VAR_8 = 0;

 VAR_6 = sizeof(struct af_iucv_trans_hdr) +
        FUNC_0(VAR_4->hs_dev);
 if (VAR_2->sk_shutdown & VAR_1) {

  VAR_8 = VAR_2->sk_shutdown;
  VAR_2->sk_shutdown &= VAR_0;
 }
 VAR_7 = FUNC_4(VAR_2, VAR_6, 1, &VAR_5);
 if (VAR_7) {
  FUNC_3(VAR_7, VAR_6);
  VAR_5 = FUNC_1(((void*)0), VAR_2, VAR_7, VAR_3);
 }
 if (VAR_8)
  VAR_2->sk_shutdown = VAR_8;
 return VAR_5;
}
