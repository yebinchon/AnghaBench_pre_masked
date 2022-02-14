
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smack_known {int smk_secid; } ;
struct cred {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct cred const*) ;
 struct smack_known* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(const struct cred *VAR_0, u32 *VAR_1)
{
 struct smack_known *VAR_2;

 FUNC_0();
 VAR_2 = FUNC_3(FUNC_2(VAR_0));
 *VAR_1 = VAR_2->smk_secid;
 FUNC_1();
}
