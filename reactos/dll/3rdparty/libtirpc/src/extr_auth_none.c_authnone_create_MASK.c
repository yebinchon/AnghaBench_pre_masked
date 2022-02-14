
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {int ah_verf; int ah_cred; int ah_ops; } ;
struct authnone_private {TYPE_1__ no_client; int mcnt; int marshalled_client; } ;
typedef int mutex_t ;
typedef int XDR ;
typedef TYPE_1__ AUTH ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 () ;
 struct authnone_private* VAR_3 ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ,int ,int ) ;

AUTH *
FUNC_8()
{
 struct authnone_private *VAR_4 = VAR_3;
 XDR VAR_5;
 XDR *VAR_6;
 extern mutex_t VAR_7;

 FUNC_4(&VAR_7);
 if (VAR_4 == 0) {
  VAR_4 = (struct authnone_private *)FUNC_3(1, sizeof (*VAR_4));
  if (VAR_4 == 0) {
   FUNC_5(&VAR_7);
   return (0);
  }
  VAR_3 = VAR_4;
 }
 if (!VAR_4->mcnt) {
  VAR_4->no_client.ah_cred = VAR_4->no_client.ah_verf = VAR_2;
  VAR_4->no_client.ah_ops = FUNC_2();
  VAR_6 = &VAR_5;
  FUNC_7(VAR_6, VAR_4->marshalled_client,
      (u_int)VAR_0, VAR_1);
  (void)FUNC_6(VAR_6, &VAR_4->no_client.ah_cred);
  (void)FUNC_6(VAR_6, &VAR_4->no_client.ah_verf);
  VAR_4->mcnt = FUNC_1(VAR_6);
  FUNC_0(VAR_6);
 }
 FUNC_5(&VAR_7);
 return (&VAR_4->no_client);
}
