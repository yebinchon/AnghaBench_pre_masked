
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct files_struct {int dummy; } ;
struct file {int dummy; } ;
struct cred {int dummy; } ;
struct aa_label {int dummy; } ;


 scalar_t__ FUNC_0 (struct file*) ;
 int VAR_0 ;
 struct aa_label* FUNC_1 (struct cred const*) ;
 int VAR_1 ;
 int FUNC_2 (struct aa_label*) ;
 struct file* FUNC_3 (int *,int ,struct cred const*) ;
 int FUNC_4 (struct file*) ;
 unsigned int FUNC_5 (struct files_struct*,unsigned int,int ,struct aa_label*) ;
 int VAR_2 ;
 int FUNC_6 (unsigned int,struct file*,int ) ;
 int FUNC_7 (struct aa_label*) ;

void FUNC_8(const struct cred *VAR_3, struct files_struct *VAR_4)
{
 struct aa_label *VAR_5 = FUNC_1(VAR_3);
 struct file *VAR_6 = ((void*)0);
 unsigned int VAR_7;

 FUNC_7(VAR_5);


 VAR_7 = FUNC_5(VAR_4, 0, VAR_2, VAR_5);
 if (!VAR_7)
  goto out;

 VAR_6 = FUNC_3(&VAR_1, VAR_0, VAR_3);
 if (FUNC_0(VAR_6))
  VAR_6 = ((void*)0);

 do {
  FUNC_6(VAR_7 - 1, VAR_6, 0);
 } while ((VAR_7 = FUNC_5(VAR_4, VAR_7, VAR_2, VAR_5)) != 0);
 if (VAR_6)
  FUNC_4(VAR_6);
out:
 FUNC_2(VAR_5);
}
