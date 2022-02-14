
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int (* sk_state_change ) (struct sock*) ;} ;
struct sk_buff {char* data; int len; } ;
struct dn_scp {unsigned char services_rem; unsigned char flowrem_dat; char flowrem_oth; int flowrem_sw; int numoth_rcv; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 struct dn_scp* FUNC_0 (struct sock*) ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sk_buff*) ;
 unsigned short FUNC_4 (int ) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int ,unsigned short) ;
 int FUNC_7 (struct sock*,int ) ;
 int FUNC_8 (struct sock*) ;

__attribute__((used)) static void FUNC_9(struct sock *VAR_5, struct sk_buff *VAR_6)
{
 struct dn_scp *VAR_7 = FUNC_0(VAR_5);
 unsigned short VAR_8;
 unsigned char VAR_9;
 signed char VAR_10;
 int VAR_11 = 0;
 char *VAR_12 = VAR_6->data;
 unsigned char VAR_13 = VAR_7->services_rem & VAR_2;

 if (VAR_6->len != 4)
  goto out;

 VAR_8 = FUNC_4(*(__le16 *)VAR_12);
 VAR_12 += 2;
 VAR_9 = *(unsigned char *)VAR_12++;
 VAR_10 = *VAR_12;






 if (VAR_9 & 0xf8)
  goto out;

 if (FUNC_6(VAR_7->numoth_rcv, VAR_8)) {
  FUNC_5(&VAR_7->numoth_rcv, 1);
  switch(VAR_9 & 0x04) {
  case 0x00:
   switch(VAR_9 & 0x03) {
   case 0x00:
    if (VAR_10 < 0) {
     unsigned char VAR_14 = -VAR_10;
     if ((VAR_7->flowrem_dat > VAR_14) &&
         (VAR_13 == VAR_3)) {
      VAR_7->flowrem_dat -= VAR_14;
     }
    } else if (VAR_10 > 0) {
     VAR_7->flowrem_dat += VAR_10;
     VAR_11 = 1;
    }
    break;
   case 0x01:
    VAR_7->flowrem_sw = VAR_0;
    break;
   case 0x02:
    VAR_7->flowrem_sw = VAR_1;
    FUNC_1(VAR_5);
    VAR_11 = 1;
   }
   break;
  case 0x04:
   if (VAR_10 > 0) {
    VAR_7->flowrem_oth += VAR_10;
    VAR_11 = 1;
   }
   break;
  }
  if (VAR_11 && !FUNC_7(VAR_5, VAR_4))
   VAR_5->sk_state_change(VAR_5);
 }

 FUNC_2(VAR_5);

out:
 FUNC_3(VAR_6);
}
