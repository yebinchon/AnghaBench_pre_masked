
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct request_sock {int secid; } ;
struct netlbl_lsm_secattr {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct request_sock*,struct netlbl_lsm_secattr*) ;
 int FUNC_1 (struct netlbl_lsm_secattr*) ;
 int FUNC_2 (struct netlbl_lsm_secattr*) ;
 int FUNC_3 (int *,int ,struct netlbl_lsm_secattr*) ;
 int VAR_2 ;

int FUNC_4(struct request_sock *VAR_3, u16 VAR_4)
{
 int VAR_5;
 struct netlbl_lsm_secattr VAR_6;

 if (VAR_4 != VAR_0 && VAR_4 != VAR_1)
  return 0;

 FUNC_2(&VAR_6);
 VAR_5 = FUNC_3(&VAR_2, VAR_3->secid,
         &VAR_6);
 if (VAR_5 != 0)
  goto inet_conn_request_return;
 VAR_5 = FUNC_0(VAR_3, &VAR_6);
inet_conn_request_return:
 FUNC_1(&VAR_6);
 return VAR_5;
}
