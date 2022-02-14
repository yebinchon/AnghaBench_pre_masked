
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int close_list; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

void FUNC_4(struct net_device *VAR_2)
{
 if (VAR_2->flags & VAR_0) {
  FUNC_0(VAR_1);

  FUNC_2(&VAR_2->close_list, &VAR_1);
  FUNC_1(&VAR_1, 1);
  FUNC_3(&VAR_1);
 }
}
