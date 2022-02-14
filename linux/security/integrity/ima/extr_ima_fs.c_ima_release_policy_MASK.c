
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct file {int f_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *,int *,char*,char const*,int,int ) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*,struct file*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_8, struct file *VAR_9)
{
 const char *VAR_10 = VAR_7 ? "completed" : "failed";

 if ((VAR_9->f_flags & VAR_2) == VAR_3)
  return FUNC_7(VAR_8, VAR_9);

 if (VAR_7 && FUNC_1() < 0) {
  VAR_10 = "failed";
  VAR_7 = 0;
 }

 FUNC_5("policy update %s\n", VAR_10);
 FUNC_4(VAR_0, ((void*)0), ((void*)0),
       "policy_update", VAR_10, !VAR_7, 0);

 if (!VAR_7) {
  FUNC_2();
  VAR_7 = 1;
  FUNC_0(VAR_1, &VAR_5);
  return 0;
 }

 FUNC_3();

 FUNC_6(VAR_6);
 VAR_6 = ((void*)0);





 return 0;
}
