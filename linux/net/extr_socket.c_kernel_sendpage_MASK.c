
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* ops; } ;
struct page {int dummy; } ;
struct TYPE_2__ {int (* sendpage ) (struct socket*,struct page*,int,size_t,int) ;} ;


 int FUNC_0 (struct socket*,struct page*,int,size_t,int) ;
 int FUNC_1 (struct socket*,struct page*,int,size_t,int) ;

int FUNC_2(struct socket *VAR_0, struct page *VAR_1, int VAR_2,
      size_t VAR_3, int VAR_4)
{
 if (VAR_0->ops->sendpage)
  return VAR_0->ops->sendpage(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
