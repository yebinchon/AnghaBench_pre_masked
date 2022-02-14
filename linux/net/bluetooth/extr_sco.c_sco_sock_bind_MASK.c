
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_sco {int sco_bdaddr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct sock {scalar_t__ sk_state; scalar_t__ sk_type; } ;
struct TYPE_2__ {int src; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,struct sock*,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 TYPE_1__* FUNC_4 (struct sock*) ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_6, struct sockaddr *VAR_7,
    int VAR_8)
{
 struct sockaddr_sco *VAR_9 = (struct sockaddr_sco *) VAR_7;
 struct sock *VAR_10 = VAR_6->sk;
 int VAR_11 = 0;

 if (!VAR_7 || VAR_8 < sizeof(struct sockaddr_sco) ||
     VAR_7->sa_family != VAR_0)
  return -VAR_4;

 FUNC_0("sk %p %pMR", VAR_10, &VAR_9->sco_bdaddr);

 FUNC_2(VAR_10);

 if (VAR_10->sk_state != VAR_2) {
  VAR_11 = -VAR_3;
  goto done;
 }

 if (VAR_10->sk_type != VAR_5) {
  VAR_11 = -VAR_4;
  goto done;
 }

 FUNC_1(&FUNC_4(VAR_10)->src, &VAR_9->sco_bdaddr);

 VAR_10->sk_state = VAR_1;

done:
 FUNC_3(VAR_10);
 return VAR_11;
}
