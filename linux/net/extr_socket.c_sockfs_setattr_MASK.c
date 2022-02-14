
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct iattr {int ia_valid; int ia_uid; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int sk_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct socket* FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*,struct iattr*) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_2, struct iattr *VAR_3)
{
 int VAR_4 = FUNC_2(VAR_2, VAR_3);

 if (!VAR_4 && (VAR_3->ia_valid & VAR_0)) {
  struct socket *VAR_5 = FUNC_0(FUNC_1(VAR_2));

  if (VAR_5->sk)
   VAR_5->sk->sk_uid = VAR_3->ia_uid;
  else
   VAR_4 = -VAR_1;
 }

 return VAR_4;
}
