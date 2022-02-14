
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sock {scalar_t__ sk_state; int sk_err; int (* sk_error_report ) (struct sock*) ;} ;
struct sk_buff {int * data; } ;
struct iphdr {int ihl; } ;
struct inet_sock {scalar_t__ recverr; scalar_t__ hdrincl; int pmtudisc; } ;
struct TYPE_4__ {int errno; int fatal; } ;
struct TYPE_3__ {int type; int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int const VAR_3 ;

 int const VAR_4 ;


 int VAR_5 ;
 int const VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_2__* VAR_8 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 struct inet_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,struct sk_buff*,int,int ,int ,int *) ;
 int FUNC_3 (struct sk_buff*,struct sock*) ;
 int FUNC_4 (struct sk_buff*,struct sock*,int ) ;
 int FUNC_5 (struct sock*) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_9, struct sk_buff *VAR_10, u32 VAR_11)
{
 struct inet_sock *VAR_12 = FUNC_1(VAR_9);
 const int VAR_13 = FUNC_0(VAR_10)->type;
 const int VAR_14 = FUNC_0(VAR_10)->code;
 int VAR_15 = 0;
 int VAR_16 = 0;

 if (VAR_13 == 131 && VAR_14 == VAR_3)
  FUNC_4(VAR_10, VAR_9, VAR_11);
 else if (VAR_13 == VAR_4) {
  FUNC_3(VAR_10, VAR_9);
  return;
 }






 if (!VAR_12->recverr && VAR_9->sk_state != VAR_7)
  return;

 switch (VAR_13) {
 default:
 case 128:
  VAR_15 = VAR_0;
  break;
 case 129:
  return;
 case 130:
  VAR_15 = VAR_2;
  VAR_16 = 1;
  break;
 case 131:
  VAR_15 = VAR_0;
  if (VAR_14 > VAR_6)
   break;
  VAR_15 = VAR_8[VAR_14].errno;
  VAR_16 = VAR_8[VAR_14].fatal;
  if (VAR_14 == VAR_3) {
   VAR_16 = VAR_12->pmtudisc != VAR_5;
   VAR_15 = VAR_1;
  }
 }

 if (VAR_12->recverr) {
  const struct iphdr *VAR_17 = (const struct iphdr *)VAR_10->data;
  u8 *VAR_18 = VAR_10->data + (VAR_17->ihl << 2);

  if (VAR_12->hdrincl)
   VAR_18 = VAR_10->data;
  FUNC_2(VAR_9, VAR_10, VAR_15, 0, VAR_11, VAR_18);
 }

 if (VAR_12->recverr || VAR_16) {
  VAR_9->sk_err = VAR_15;
  VAR_9->sk_error_report(VAR_9);
 }
}
