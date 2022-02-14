
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct socket {struct sock* sk; } ;
struct sockaddr_l2 {void* l2_bdaddr_type; scalar_t__ l2_cid; scalar_t__ l2_psm; void* l2_family; int l2_bdaddr; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct rfcomm_session {int initiator; } ;
typedef int bdaddr_t ;
typedef int addr ;
struct TYPE_4__ {TYPE_1__* chan; } ;
struct TYPE_3__ {int mode; int sec_level; int imtu; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct socket*,struct sockaddr*,int) ;
 int FUNC_4 (struct socket*,struct sockaddr*,int,int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 TYPE_2__* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct socket**) ;
 struct rfcomm_session* FUNC_9 (struct socket*,int ) ;
 struct rfcomm_session* FUNC_10 (struct rfcomm_session*) ;
 int FUNC_11 (struct socket*) ;

__attribute__((used)) static struct rfcomm_session *FUNC_12(bdaddr_t *VAR_10,
       bdaddr_t *VAR_11,
       u8 VAR_12,
       int *VAR_13)
{
 struct rfcomm_session *VAR_14 = ((void*)0);
 struct sockaddr_l2 VAR_15;
 struct socket *VAR_16;
 struct sock *VAR_17;

 FUNC_0("%pMR -> %pMR", VAR_10, VAR_11);

 *VAR_13 = FUNC_8(&VAR_16);
 if (*VAR_13 < 0)
  return ((void*)0);

 FUNC_1(&VAR_15.l2_bdaddr, VAR_10);
 VAR_15.l2_family = VAR_0;
 VAR_15.l2_psm = 0;
 VAR_15.l2_cid = 0;
 VAR_15.l2_bdaddr_type = VAR_1;
 *VAR_13 = FUNC_3(VAR_16, (struct sockaddr *) &VAR_15, sizeof(VAR_15));
 if (*VAR_13 < 0)
  goto failed;


 VAR_17 = VAR_16->sk;
 FUNC_6(VAR_17);
 FUNC_5(VAR_17)->chan->imtu = VAR_9;
 FUNC_5(VAR_17)->chan->sec_level = VAR_12;
 if (VAR_8)
  FUNC_5(VAR_17)->chan->mode = VAR_5;
 FUNC_7(VAR_17);

 VAR_14 = FUNC_9(VAR_16, VAR_2);
 if (!VAR_14) {
  *VAR_13 = -VAR_4;
  goto failed;
 }

 VAR_14->initiator = 1;

 FUNC_1(&VAR_15.l2_bdaddr, VAR_11);
 VAR_15.l2_family = VAR_0;
 VAR_15.l2_psm = FUNC_2(VAR_6);
 VAR_15.l2_cid = 0;
 VAR_15.l2_bdaddr_type = VAR_1;
 *VAR_13 = FUNC_4(VAR_16, (struct sockaddr *) &VAR_15, sizeof(VAR_15), VAR_7);
 if (*VAR_13 == 0 || *VAR_13 == -VAR_3)
  return VAR_14;

 return FUNC_10(VAR_14);

failed:
 FUNC_11(VAR_16);
 return ((void*)0);
}
