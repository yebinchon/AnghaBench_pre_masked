
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(const struct socket *VAR_2,
        struct socket *VAR_3)
{
 if (FUNC_1(VAR_0, &VAR_2->flags))
  FUNC_0(VAR_0, &VAR_3->flags);
 if (FUNC_1(VAR_1, &VAR_2->flags))
  FUNC_0(VAR_1, &VAR_3->flags);
}
