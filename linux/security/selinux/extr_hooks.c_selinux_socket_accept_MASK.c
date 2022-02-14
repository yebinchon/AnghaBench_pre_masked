
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct socket {int sk; } ;
struct inode_security_struct {int initialized; int sid; int sclass; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct socket*) ;
 struct inode_security_struct* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_2, struct socket *VAR_3)
{
 int VAR_4;
 struct inode_security_struct *VAR_5;
 struct inode_security_struct *VAR_6;
 u16 VAR_7;
 u32 VAR_8;

 VAR_4 = FUNC_2(VAR_2->sk, VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_5 = FUNC_1(FUNC_0(VAR_2));
 FUNC_3(&VAR_5->lock);
 VAR_7 = VAR_5->sclass;
 VAR_8 = VAR_5->sid;
 FUNC_4(&VAR_5->lock);

 VAR_6 = FUNC_1(FUNC_0(VAR_3));
 VAR_6->sclass = VAR_7;
 VAR_6->sid = VAR_8;
 VAR_6->initialized = VAR_0;

 return 0;
}
