
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int dummy; } ;
struct cred {int uid; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(const struct cred *VAR_5,
          struct user_namespace *VAR_6,
          int VAR_7,
          unsigned int VAR_8)
{

 if (VAR_7 != VAR_1)
  return 0;






 if ((VAR_8 & VAR_0) != 0)
  return 0;





 if (FUNC_2(VAR_5->uid, VAR_3) == VAR_4)
  return 0;





 FUNC_1("Operation requires CAP_SETUID, which is not available to UID %u for operations besides approved set*uid transitions\n",
  FUNC_0(VAR_5->uid));
 return -VAR_2;
}
