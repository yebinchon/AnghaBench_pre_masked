
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unix_sock {int link; int gc_flags; int inflight; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct unix_sock *VAR_2)
{
 FUNC_0(&VAR_2->inflight);




 if (FUNC_2(VAR_0, &VAR_2->gc_flags))
  FUNC_1(&VAR_2->link, &VAR_1);
}
