
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int fsuid; int suid; int euid; int uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct cred const*,int ) ;

__attribute__((used)) static int FUNC_3(struct cred *VAR_4,
         const struct cred *VAR_5,
         int VAR_6)
{


 if (FUNC_1(VAR_5->uid, VAR_1) == VAR_2)
  return 0;

 if (FUNC_2(VAR_5, VAR_4->uid) &&
     FUNC_2(VAR_5, VAR_4->euid) &&
     FUNC_2(VAR_5, VAR_4->suid) &&
     FUNC_2(VAR_5, VAR_4->fsuid))
  return 0;






 FUNC_0(VAR_3);
 return -VAR_0;
}
