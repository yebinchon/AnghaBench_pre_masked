
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct file {int f_flags; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cred* FUNC_0 () ;
 int FUNC_1 (struct cred const*,struct file*,int ) ;
 struct inode* FUNC_2 (struct file*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, int VAR_4)
{
 const struct cred *VAR_5 = FUNC_0();
 struct inode *VAR_6 = FUNC_2(VAR_3);


 if ((VAR_3->f_flags & VAR_2) && (VAR_4 & VAR_1))
  VAR_4 |= VAR_0;

 return FUNC_1(VAR_5, VAR_3,
        FUNC_3(VAR_6->i_mode, VAR_4));
}
