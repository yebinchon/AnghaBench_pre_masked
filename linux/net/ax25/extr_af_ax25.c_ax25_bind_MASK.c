
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_ax25 {int dummy; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct TYPE_9__ {scalar_t__ sax25_family; int sax25_ndigis; int sax25_call; } ;
struct full_sockaddr_ax25 {TYPE_1__ fsa_ax25; int * fsa_digipeater; } ;
struct TYPE_10__ {int call; } ;
typedef TYPE_2__ ax25_uid_assoc ;
typedef int ax25_dev ;
struct TYPE_11__ {int * ax25_dev; int source_addr; } ;
typedef TYPE_3__ ax25_cb ;
typedef int ax25_address ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 TYPE_2__* FUNC_3 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (struct sock*) ;
 int VAR_7 ;
 int FUNC_9 (struct sock*) ;
 TYPE_3__* FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*,int ) ;
 int FUNC_12 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_13(struct socket *VAR_8, struct sockaddr *VAR_9, int VAR_10)
{
 struct sock *VAR_11 = VAR_8->sk;
 struct full_sockaddr_ax25 *VAR_12 = (struct full_sockaddr_ax25 *)VAR_9;
 ax25_dev *VAR_13 = ((void*)0);
 ax25_uid_assoc *VAR_14;
 ax25_address VAR_15;
 ax25_cb *VAR_16;
 int VAR_17 = 0;

 if (VAR_10 != sizeof(struct sockaddr_ax25) &&
     VAR_10 != sizeof(struct full_sockaddr_ax25))



  if ((VAR_10 < sizeof(struct sockaddr_ax25) + sizeof(ax25_address) * 6) ||
      (VAR_10 > sizeof(struct full_sockaddr_ax25)))
   return -VAR_4;

 if (VAR_12->fsa_ax25.sax25_family != VAR_0)
  return -VAR_4;

 VAR_14 = FUNC_3(FUNC_7());
 if (VAR_14) {
  VAR_15 = VAR_14->call;
  FUNC_4(VAR_14);
 } else {
  if (VAR_6 && !FUNC_6(VAR_1))
   return -VAR_2;

  VAR_15 = VAR_12->fsa_ax25.sax25_call;
 }

 FUNC_8(VAR_11);

 VAR_16 = FUNC_10(VAR_11);
 if (!FUNC_11(VAR_11, VAR_5)) {
  VAR_17 = -VAR_4;
  goto out;
 }

 VAR_16->source_addr = VAR_15;




 if (VAR_16->ax25_dev != ((void*)0))
  goto done;

 if (VAR_10 > sizeof(struct sockaddr_ax25) && VAR_12->fsa_ax25.sax25_ndigis == 1) {
  if (FUNC_5(&VAR_12->fsa_digipeater[0], &VAR_7) != 0 &&
      (VAR_13 = FUNC_0(&VAR_12->fsa_digipeater[0])) == ((void*)0)) {
   VAR_17 = -VAR_3;
   goto out;
  }
 } else {
  if ((VAR_13 = FUNC_0(&VAR_12->fsa_ax25.sax25_call)) == ((void*)0)) {
   VAR_17 = -VAR_3;
   goto out;
  }
 }

 if (VAR_13 != ((void*)0))
  FUNC_2(VAR_16, VAR_13);

done:
 FUNC_1(VAR_16);
 FUNC_12(VAR_11, VAR_5);

out:
 FUNC_9(VAR_11);

 return VAR_17;
}
