
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_sco {int sco_bdaddr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct sock {scalar_t__ sk_state; scalar_t__ sk_type; } ;
struct TYPE_2__ {int dst; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct sock*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct sock*,int ,int ) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 TYPE_1__* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*,int) ;

__attribute__((used)) static int FUNC_8(struct socket *VAR_8, struct sockaddr *VAR_9, int VAR_10, int VAR_11)
{
 struct sockaddr_sco *VAR_12 = (struct sockaddr_sco *) VAR_9;
 struct sock *VAR_13 = VAR_8->sk;
 int VAR_14;

 FUNC_0("sk %p", VAR_13);

 if (VAR_10 < sizeof(struct sockaddr_sco) ||
     VAR_9->sa_family != VAR_0)
  return -VAR_5;

 if (VAR_13->sk_state != VAR_3 && VAR_13->sk_state != VAR_1)
  return -VAR_4;

 if (VAR_13->sk_type != VAR_7)
  return -VAR_5;

 FUNC_3(VAR_13);


 FUNC_1(&FUNC_6(VAR_13)->dst, &VAR_12->sco_bdaddr);

 VAR_14 = FUNC_5(VAR_13);
 if (VAR_14)
  goto done;

 VAR_14 = FUNC_2(VAR_13, VAR_2,
     FUNC_7(VAR_13, VAR_11 & VAR_6));

done:
 FUNC_4(VAR_13);
 return VAR_14;
}
