
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_security_struct {int create_sid; } ;
struct inode_security_struct {int sid; } ;
struct inode {int dummy; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int *) ;
 int FUNC_1 () ;
 struct inode_security_struct* FUNC_2 (struct inode*) ;
 struct task_security_struct* FUNC_3 (struct cred*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct cred *VAR_3, struct inode *VAR_4)
{
 struct inode_security_struct *VAR_5 = FUNC_2(VAR_4);
 struct task_security_struct *VAR_6 = FUNC_3(VAR_3);
 u32 VAR_7 = FUNC_1();
 int VAR_8;

 VAR_8 = FUNC_0(&VAR_2,
      VAR_7, VAR_5->sid,
      VAR_1,
      VAR_0,
      ((void*)0));

 if (VAR_8 == 0)
  VAR_6->create_sid = VAR_5->sid;
 return VAR_8;
}
