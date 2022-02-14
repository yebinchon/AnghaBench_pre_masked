
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {scalar_t__ stp_enabled; int lock; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_bridge*,unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct net_bridge *VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6 = FUNC_1(VAR_5);
 int VAR_7 = -VAR_3;

 FUNC_2(&VAR_4->lock);
 if (VAR_4->stp_enabled != VAR_2 &&
     (VAR_6 < VAR_1 || VAR_6 > VAR_0))
  goto unlock;

 FUNC_0(VAR_4, VAR_6);
 VAR_7 = 0;

unlock:
 FUNC_3(&VAR_4->lock);
 return VAR_7;
}
