
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smack_known {int smk_secid; } ;
struct netlbl_audit {int secid; int sessionid; int loginuid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 struct smack_known* FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct netlbl_audit *VAR_1)
{
 struct smack_known *VAR_2 = FUNC_2();

 VAR_1->loginuid = FUNC_0(VAR_0);
 VAR_1->sessionid = FUNC_1(VAR_0);
 VAR_1->secid = VAR_2->smk_secid;
}
