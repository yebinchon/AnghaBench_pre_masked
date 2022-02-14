
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_entry {int _metrics; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int *,unsigned long,unsigned long) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

void FUNC_3(struct dst_entry *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4, VAR_5;

 VAR_5 = ((unsigned long) &VAR_1) | VAR_0;
 VAR_4 = FUNC_1(&VAR_2->_metrics, VAR_3, VAR_5);
 if (VAR_4 == VAR_3)
  FUNC_2(FUNC_0(VAR_3));
}
