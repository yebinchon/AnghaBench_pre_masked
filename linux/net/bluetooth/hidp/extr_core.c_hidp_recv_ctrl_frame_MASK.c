
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned char* data; int len; } ;
struct hidp_session {int dummy; } ;


 int FUNC_0 (char*,struct hidp_session*,struct sk_buff*,int ) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int const VAR_2 ;



 int FUNC_1 (struct hidp_session*,struct sk_buff*,unsigned char) ;
 int FUNC_2 (struct hidp_session*,unsigned char) ;
 int FUNC_3 (struct hidp_session*,unsigned char) ;
 int FUNC_4 (struct hidp_session*,int const,int *,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_7(struct hidp_session *VAR_3,
     struct sk_buff *VAR_4)
{
 unsigned char VAR_5, VAR_6, VAR_7;
 int VAR_8 = 1;

 FUNC_0("session %p skb %p len %d", VAR_3, VAR_4, VAR_4->len);

 VAR_5 = VAR_4->data[0];
 FUNC_6(VAR_4, 1);

 VAR_6 = VAR_5 & VAR_1;
 VAR_7 = VAR_5 & VAR_0;

 switch (VAR_6) {
 case 129:
  FUNC_2(VAR_3, VAR_7);
  break;

 case 128:
  FUNC_3(VAR_3, VAR_7);
  break;

 case 130:
  VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_7);
  break;

 default:
  FUNC_4(VAR_3,
   129 | VAR_2, ((void*)0), 0);
  break;
 }

 if (VAR_8)
  FUNC_5(VAR_4);
}
