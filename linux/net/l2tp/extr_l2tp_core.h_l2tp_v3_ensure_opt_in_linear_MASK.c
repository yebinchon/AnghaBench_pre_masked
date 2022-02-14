
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned char* data; } ;
struct l2tp_session {int peer_cookie_len; } ;


 int FUNC_0 (struct l2tp_session*) ;
 int FUNC_1 (struct sk_buff*,int) ;

__attribute__((used)) static inline int FUNC_2(struct l2tp_session *VAR_0, struct sk_buff *VAR_1,
            unsigned char **VAR_2, unsigned char **VAR_3)
{
 int VAR_4 = VAR_0->peer_cookie_len + FUNC_0(VAR_0);

 if (VAR_4 > 0) {
  int VAR_5 = *VAR_2 - *VAR_3;

  if (!FUNC_1(VAR_1, VAR_5 + VAR_4))
   return -1;

  if (VAR_1->data != *VAR_3) {
   *VAR_3 = VAR_1->data;
   *VAR_2 = VAR_1->data + VAR_5;
  }
 }

 return 0;
}
