
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_l2 {int l2_bdaddr_type; scalar_t__ l2_cid; int l2_psm; int l2_family; int l2_bdaddr; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct rfcomm_session {int dummy; } ;
typedef int bdaddr_t ;
typedef int addr ;
struct TYPE_4__ {TYPE_1__* chan; } ;
struct TYPE_3__ {int imtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct socket*,struct sockaddr*,int) ;
 int FUNC_4 (struct socket*,int) ;
 int VAR_5 ;
 TYPE_2__* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct socket**) ;
 struct rfcomm_session* FUNC_9 (struct socket*,int ) ;
 int FUNC_10 (struct socket*) ;

__attribute__((used)) static int FUNC_11(bdaddr_t *VAR_6)
{
 struct sockaddr_l2 VAR_7;
 struct socket *VAR_8;
 struct sock *VAR_9;
 struct rfcomm_session *VAR_10;
 int VAR_11 = 0;


 VAR_11 = FUNC_8(&VAR_8);
 if (VAR_11 < 0) {
  FUNC_0("Create socket failed %d", VAR_11);
  return VAR_11;
 }


 FUNC_1(&VAR_7.l2_bdaddr, VAR_6);
 VAR_7.l2_family = VAR_0;
 VAR_7.l2_psm = FUNC_2(VAR_4);
 VAR_7.l2_cid = 0;
 VAR_7.l2_bdaddr_type = VAR_1;
 VAR_11 = FUNC_3(VAR_8, (struct sockaddr *) &VAR_7, sizeof(VAR_7));
 if (VAR_11 < 0) {
  FUNC_0("Bind failed %d", VAR_11);
  goto failed;
 }


 VAR_9 = VAR_8->sk;
 FUNC_6(VAR_9);
 FUNC_5(VAR_9)->chan->imtu = VAR_5;
 FUNC_7(VAR_9);


 VAR_11 = FUNC_4(VAR_8, 10);
 if (VAR_11) {
  FUNC_0("Listen failed %d", VAR_11);
  goto failed;
 }


 VAR_10 = FUNC_9(VAR_8, VAR_2);
 if (!VAR_10) {
  VAR_11 = -VAR_3;
  goto failed;
 }

 return 0;
failed:
 FUNC_10(VAR_8);
 return VAR_11;
}
