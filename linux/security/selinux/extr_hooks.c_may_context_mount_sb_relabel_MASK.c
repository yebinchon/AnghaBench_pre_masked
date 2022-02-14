
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_security_struct {int sid; } ;
struct superblock_security_struct {int sid; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int *) ;
 struct task_security_struct* FUNC_1 (struct cred const*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(u32 VAR_4,
   struct superblock_security_struct *VAR_5,
   const struct cred *VAR_6)
{
 const struct task_security_struct *VAR_7 = FUNC_1(VAR_6);
 int VAR_8;

 VAR_8 = FUNC_0(&VAR_3,
     VAR_7->sid, VAR_5->sid, VAR_2,
     VAR_0, ((void*)0));
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(&VAR_3,
     VAR_7->sid, VAR_4, VAR_2,
     VAR_1, ((void*)0));
 return VAR_8;
}
