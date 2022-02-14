
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int file; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* shutdown ) (struct socket*,int) ;} ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct socket*,int) ;
 struct socket* FUNC_2 (int,int*,int*) ;
 int FUNC_3 (struct socket*,int) ;

int FUNC_4(int VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;
 struct socket *VAR_4;

 VAR_4 = FUNC_2(VAR_0, &VAR_2, &VAR_3);
 if (VAR_4 != ((void*)0)) {
  VAR_2 = FUNC_1(VAR_4, VAR_1);
  if (!VAR_2)
   VAR_2 = VAR_4->ops->shutdown(VAR_4, VAR_1);
  FUNC_0(VAR_4->file, VAR_3);
 }
 return VAR_2;
}
