
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_security_struct {int create_sid; } ;
struct qstr {int dummy; } ;
struct dentry {int d_parent; } ;
typedef struct cred const cred ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct task_security_struct* FUNC_2 (struct cred const*) ;
 int FUNC_3 (struct task_security_struct*,int ,struct qstr*,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct dentry *VAR_0, int VAR_1,
       struct qstr *VAR_2,
       const struct cred *VAR_3,
       struct cred *VAR_4)
{
 u32 VAR_5;
 int VAR_6;
 struct task_security_struct *VAR_7;

 VAR_6 = FUNC_3(FUNC_2(VAR_3),
        FUNC_0(VAR_0->d_parent), VAR_2,
        FUNC_1(VAR_1),
        &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_7 = FUNC_2(VAR_4);
 VAR_7->create_sid = VAR_5;
 return 0;
}
