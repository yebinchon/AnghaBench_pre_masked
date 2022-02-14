
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct path {int dentry; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int user_ns; } ;
struct TYPE_3__ {struct path path; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 () ;
 struct file* FUNC_3 (struct path*,int ,int ) ;
 int FUNC_4 (int,struct file*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct path*) ;
 int FUNC_8 (struct path*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 TYPE_2__* FUNC_11 (struct sock*) ;
 TYPE_1__* FUNC_12 (struct sock*) ;

__attribute__((used)) static int FUNC_13(struct sock *VAR_5)
{
 struct path VAR_6;
 struct file *VAR_7;
 int VAR_8;

 if (!FUNC_6(FUNC_11(VAR_5)->user_ns, VAR_0))
  return -VAR_2;

 if (!FUNC_10(&FUNC_12(VAR_5)->addr))
  return -VAR_1;

 VAR_6 = FUNC_12(VAR_5)->path;
 if (!VAR_6.dentry)
  return -VAR_1;

 FUNC_7(&VAR_6);

 VAR_8 = FUNC_5(VAR_3);
 if (VAR_8 < 0)
  goto out;

 VAR_7 = FUNC_3(&VAR_6, VAR_4, FUNC_2());
 if (FUNC_0(VAR_7)) {
  FUNC_9(VAR_8);
  VAR_8 = FUNC_1(VAR_7);
  goto out;
 }

 FUNC_4(VAR_8, VAR_7);
out:
 FUNC_8(&VAR_6);

 return VAR_8;
}
