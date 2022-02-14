
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_state; scalar_t__ sk_bound_dev_if; } ;
struct inet_sock {scalar_t__ inet_saddr; scalar_t__ inet_rcv_saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 struct inet_sock* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static int FUNC_5(struct sock *VAR_7, struct sockaddr *VAR_8, int VAR_9)
{
 struct inet_sock *VAR_10 = FUNC_1(VAR_7);
 struct sockaddr_in *VAR_11 = (struct sockaddr_in *) VAR_8;
 u32 VAR_12 = VAR_5;
 int VAR_13 = -VAR_1;
 int VAR_14;

 if (VAR_7->sk_state != VAR_6 || VAR_9 < sizeof(struct sockaddr_in))
  goto out;

 if (VAR_7->sk_bound_dev_if)
  VAR_12 = FUNC_2(FUNC_4(VAR_7),
       VAR_7->sk_bound_dev_if) ? : VAR_12;

 VAR_14 = FUNC_0(FUNC_4(VAR_7), VAR_11->sin_addr.s_addr,
         VAR_12);

 VAR_13 = -VAR_0;
 if (VAR_11->sin_addr.s_addr && VAR_14 != VAR_3 &&
     VAR_14 != VAR_4 && VAR_14 != VAR_2)
  goto out;
 VAR_10->inet_rcv_saddr = VAR_10->inet_saddr = VAR_11->sin_addr.s_addr;
 if (VAR_14 == VAR_4 || VAR_14 == VAR_2)
  VAR_10->inet_saddr = 0;
 FUNC_3(VAR_7);
 VAR_13 = 0;
out: return VAR_13;
}
