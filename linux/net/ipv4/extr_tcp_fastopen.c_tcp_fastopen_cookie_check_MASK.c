
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tcp_fastopen_cookie {int len; } ;
struct sock {int dummy; } ;
struct dst_entry {int dummy; } ;


 int VAR_0 ;
 struct dst_entry* FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int *,struct tcp_fastopen_cookie*) ;
 scalar_t__ FUNC_3 (struct sock*,struct dst_entry const*,int ) ;

bool FUNC_4(struct sock *VAR_1, u16 *VAR_2,
          struct tcp_fastopen_cookie *VAR_3)
{
 const struct dst_entry *VAR_4;

 FUNC_2(VAR_1, VAR_2, VAR_3);


 if (FUNC_1(VAR_1)) {
  VAR_3->len = -1;
  return 0;
 }

 VAR_4 = FUNC_0(VAR_1);

 if (FUNC_3(VAR_1, VAR_4, VAR_0)) {
  VAR_3->len = -1;
  return 1;
 }
 return VAR_3->len > 0;
}
