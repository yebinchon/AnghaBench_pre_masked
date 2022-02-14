
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet_protosw {int flags; int list; int protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;

void
FUNC_5(struct inet_protosw *VAR_2)
{
 if (VAR_0 & VAR_2->flags) {
  FUNC_1("Attempt to unregister permanent protocol %d\n",
         VAR_2->protocol);
 } else {
  FUNC_2(&VAR_1);
  FUNC_0(&VAR_2->list);
  FUNC_3(&VAR_1);

  FUNC_4();
 }
}
