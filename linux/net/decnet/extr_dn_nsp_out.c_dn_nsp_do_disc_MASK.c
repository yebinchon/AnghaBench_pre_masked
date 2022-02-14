
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int sk; } ;
struct dst_entry {int dummy; } ;
typedef int gfp_t ;
typedef scalar_t__ __le16 ;


 unsigned char VAR_0 ;
 scalar_t__ FUNC_0 (unsigned short) ;
 struct sk_buff* FUNC_1 (struct sock*,int,int ) ;
 int FUNC_2 (struct dst_entry*) ;
 int FUNC_3 (int *,int ,struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (unsigned char*,unsigned char*,int) ;
 int FUNC_6 (char*,int ,struct dst_entry*) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 unsigned char* FUNC_8 (struct sk_buff*,int) ;

__attribute__((used)) static __inline__ void FUNC_9(struct sock *VAR_2, unsigned char VAR_3,
   unsigned short VAR_4, gfp_t VAR_5,
   struct dst_entry *VAR_6,
   int VAR_7, unsigned char *VAR_8, __le16 VAR_9, __le16 VAR_10)
{
 struct sk_buff *VAR_11 = ((void*)0);
 int VAR_12 = 7 + VAR_7 + ((VAR_3 == VAR_0) ? 1 : 0);
 unsigned char *VAR_13;

 if ((VAR_6 == ((void*)0)) || (VAR_9 == 0)) {
  FUNC_6("DECnet: dn_nsp_do_disc: BUG! Please report this to SteveW@ACM.org rem=%u dst=%p\n",
        FUNC_4(VAR_9), VAR_6);
  return;
 }

 if ((VAR_11 = FUNC_1(VAR_2, VAR_12, VAR_5)) == ((void*)0))
  return;

 VAR_13 = FUNC_8(VAR_11, VAR_12);
 *VAR_13++ = VAR_3;
 *(__le16 *)VAR_13 = VAR_9;
 VAR_13 += 2;
 *(__le16 *)VAR_13 = VAR_10;
 VAR_13 += 2;
 *(__le16 *)VAR_13 = FUNC_0(VAR_4);
 VAR_13 += 2;
 if (VAR_3 == VAR_0)
  *VAR_13++ = VAR_7;

 if (VAR_7) {
  FUNC_5(VAR_13, VAR_8, VAR_7);
 }






 FUNC_7(VAR_11, FUNC_2(VAR_6));
 FUNC_3(&VAR_1, VAR_11->sk, VAR_11);
}
