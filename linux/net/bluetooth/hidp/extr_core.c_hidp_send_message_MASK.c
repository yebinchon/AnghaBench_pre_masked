
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct hidp_session {int terminate; } ;


 int FUNC_0 (char*,struct hidp_session*,unsigned char const*,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sk_buff*,unsigned char const*,int) ;
 int FUNC_6 (struct sk_buff*,unsigned char) ;
 int FUNC_7 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct hidp_session *VAR_3, struct socket *VAR_4,
        struct sk_buff_head *VAR_5, unsigned char VAR_6,
        const unsigned char *VAR_7, int VAR_8)
{
 struct sk_buff *VAR_9;
 struct sock *VAR_10 = VAR_4->sk;
 int VAR_11;

 FUNC_0("session %p data %p size %d", VAR_3, VAR_7, VAR_8);

 if (FUNC_3(&VAR_3->terminate))
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_8 + 1, VAR_2);
 if (!VAR_9) {
  FUNC_1("Can't allocate memory for new frame");
  return -VAR_1;
 }

 FUNC_6(VAR_9, VAR_6);
 if (VAR_7 && VAR_8 > 0) {
  FUNC_5(VAR_9, VAR_7, VAR_8);
  VAR_11 = VAR_8;
 } else {
  VAR_11 = 0;
 }

 FUNC_7(VAR_5, VAR_9);
 FUNC_8(FUNC_4(VAR_10));

 return VAR_11;
}
