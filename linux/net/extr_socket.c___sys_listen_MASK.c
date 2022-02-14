
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {int file; TYPE_1__* ops; int sk; } ;
struct TYPE_5__ {int sysctl_somaxconn; } ;
struct TYPE_6__ {TYPE_2__ core; } ;
struct TYPE_4__ {int (* listen ) (struct socket*,int) ;} ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct socket*,int) ;
 TYPE_3__* FUNC_2 (int ) ;
 struct socket* FUNC_3 (int,int*,int*) ;
 int FUNC_4 (struct socket*,int) ;

int FUNC_5(int VAR_0, int VAR_1)
{
 struct socket *VAR_2;
 int VAR_3, VAR_4;
 int VAR_5;

 VAR_2 = FUNC_3(VAR_0, &VAR_3, &VAR_4);
 if (VAR_2) {
  VAR_5 = FUNC_2(VAR_2->sk)->core.sysctl_somaxconn;
  if ((unsigned int)VAR_1 > VAR_5)
   VAR_1 = VAR_5;

  VAR_3 = FUNC_1(VAR_2, VAR_1);
  if (!VAR_3)
   VAR_3 = VAR_2->ops->listen(VAR_2, VAR_1);

  FUNC_0(VAR_2->file, VAR_4);
 }
 return VAR_3;
}
