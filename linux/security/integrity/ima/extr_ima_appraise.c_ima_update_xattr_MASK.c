
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct integrity_iint_cache {scalar_t__ ima_file_status; int flags; int atomic_flags; } ;
struct file {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct dentry* FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct integrity_iint_cache*,struct file*,int *,int ,int ,int *) ;
 int FUNC_3 (struct dentry*,struct integrity_iint_cache*) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int *) ;

void FUNC_7(struct integrity_iint_cache *VAR_4, struct file *VAR_5)
{
 struct dentry *VAR_6 = FUNC_0(VAR_5);
 int VAR_7 = 0;


 if (FUNC_6(VAR_0, &VAR_4->atomic_flags))
  return;

 if ((VAR_4->ima_file_status != VAR_2) &&
     !(VAR_4->flags & VAR_1))
  return;

 VAR_7 = FUNC_2(VAR_4, VAR_5, ((void*)0), 0, VAR_3, ((void*)0));
 if (VAR_7 < 0)
  return;

 FUNC_4(FUNC_1(VAR_5));
 FUNC_3(VAR_6, VAR_4);
 FUNC_5(FUNC_1(VAR_5));
}
