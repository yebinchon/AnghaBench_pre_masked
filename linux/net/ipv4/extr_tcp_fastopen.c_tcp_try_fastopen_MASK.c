
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tcp_fastopen_cookie {int len; int exp; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int dummy; } ;
struct dst_entry {int dummy; } ;
struct TYPE_7__ {scalar_t__ end_seq; scalar_t__ seq; } ;
struct TYPE_5__ {int sysctl_tcp_fastopen; } ;
struct TYPE_6__ {TYPE_1__ ipv4; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,struct request_sock*,struct sk_buff*,struct tcp_fastopen_cookie*) ;
 int FUNC_4 (struct sock*,struct request_sock*,struct sk_buff*,struct tcp_fastopen_cookie*,struct tcp_fastopen_cookie*) ;
 struct sock* FUNC_5 (struct sock*,struct sk_buff*,struct request_sock*) ;
 scalar_t__ FUNC_6 (struct sock*,struct dst_entry const*,int ) ;
 scalar_t__ FUNC_7 (struct sock*) ;

struct sock *FUNC_8(struct sock *VAR_6, struct sk_buff *VAR_7,
         struct request_sock *VAR_8,
         struct tcp_fastopen_cookie *VAR_9,
         const struct dst_entry *VAR_10)
{
 bool VAR_11 = FUNC_1(VAR_7)->end_seq != FUNC_1(VAR_7)->seq + 1;
 int VAR_12 = FUNC_2(VAR_6)->ipv4.sysctl_tcp_fastopen;
 struct tcp_fastopen_cookie VAR_13 = { .len = -1 };
 struct sock *VAR_14;
 int VAR_15 = 0;

 if (VAR_9->len == 0)
  FUNC_0(FUNC_2(VAR_6), VAR_0);

 if (!((VAR_12 & VAR_5) &&
       (VAR_11 || VAR_9->len >= 0) &&
       FUNC_7(VAR_6))) {
  VAR_9->len = -1;
  return ((void*)0);
 }

 if (VAR_11 &&
     FUNC_6(VAR_6, VAR_10, VAR_4))
  goto fastopen;

 if (VAR_9->len == 0) {

  FUNC_3(VAR_6, VAR_8, VAR_7, &VAR_13);
 } else if (VAR_9->len > 0) {
  VAR_15 = FUNC_4(VAR_6, VAR_8, VAR_7, VAR_9,
          &VAR_13);
  if (!VAR_15) {
   FUNC_0(FUNC_2(VAR_6),
          VAR_3);
  } else {
fastopen:
   VAR_14 = FUNC_5(VAR_6, VAR_7, VAR_8);
   if (VAR_14) {
    if (VAR_15 == 2) {
     VAR_13.exp = VAR_9->exp;
     *VAR_9 = VAR_13;
     FUNC_0(FUNC_2(VAR_6),
            VAR_2);
    } else {
     VAR_9->len = -1;
    }
    FUNC_0(FUNC_2(VAR_6),
           VAR_1);
    return VAR_14;
   }
   FUNC_0(FUNC_2(VAR_6),
          VAR_3);
  }
 }
 VAR_13.exp = VAR_9->exp;
 *VAR_9 = VAR_13;
 return ((void*)0);
}
