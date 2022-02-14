
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_struct {int dummy; } ;
struct task_security_struct {int sockcreate_sid; int keycreate_sid; int create_sid; int exec_sid; int osid; int sid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (int *,int ,int ,int ,int ,int *) ;
 struct task_struct* VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ,char**,unsigned int*) ;
 struct task_security_struct* FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static int FUNC_8(struct task_struct *VAR_5,
          char *VAR_6, char **VAR_7)
{
 const struct task_security_struct *VAR_8;
 u32 VAR_9;
 int VAR_10;
 unsigned VAR_11;

 FUNC_3();
 VAR_8 = FUNC_6(FUNC_0(VAR_5));

 if (VAR_3 != VAR_5) {
  VAR_10 = FUNC_1(&VAR_4,
         FUNC_2(), VAR_8->sid,
         VAR_2, VAR_1, ((void*)0));
  if (VAR_10)
   goto bad;
 }

 if (!FUNC_7(VAR_6, "current"))
  VAR_9 = VAR_8->sid;
 else if (!FUNC_7(VAR_6, "prev"))
  VAR_9 = VAR_8->osid;
 else if (!FUNC_7(VAR_6, "exec"))
  VAR_9 = VAR_8->exec_sid;
 else if (!FUNC_7(VAR_6, "fscreate"))
  VAR_9 = VAR_8->create_sid;
 else if (!FUNC_7(VAR_6, "keycreate"))
  VAR_9 = VAR_8->keycreate_sid;
 else if (!FUNC_7(VAR_6, "sockcreate"))
  VAR_9 = VAR_8->sockcreate_sid;
 else {
  VAR_10 = -VAR_0;
  goto bad;
 }
 FUNC_4();

 if (!VAR_9)
  return 0;

 VAR_10 = FUNC_5(&VAR_4, VAR_9, VAR_7, &VAR_11);
 if (VAR_10)
  return VAR_10;
 return VAR_11;

bad:
 FUNC_4();
 return VAR_10;
}
