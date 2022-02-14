
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct TYPE_2__ {scalar_t__ sk_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct socket* FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 struct socket* FUNC_1 (int,int*) ;
 int FUNC_2 (struct socket*) ;

__attribute__((used)) static struct socket *FUNC_3(int VAR_3)
{
 struct socket *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_3, &VAR_5);
 if (!VAR_4)
  return FUNC_0(-VAR_1);

 if (VAR_4->sk->sk_family != VAR_2) {
  FUNC_2(VAR_4);
  return FUNC_0(-VAR_0);
 }

 return VAR_4;
}
