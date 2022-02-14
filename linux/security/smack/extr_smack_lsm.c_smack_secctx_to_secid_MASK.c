
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smack_known {int smk_secid; } ;


 struct smack_known* FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, u32 VAR_1, u32 *VAR_2)
{
 struct smack_known *VAR_3 = FUNC_0(VAR_0);

 if (VAR_3)
  *VAR_2 = VAR_3->smk_secid;
 else
  *VAR_2 = 0;
 return 0;
}
