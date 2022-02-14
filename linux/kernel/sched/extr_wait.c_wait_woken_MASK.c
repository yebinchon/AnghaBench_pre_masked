
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wait_queue_entry {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 long FUNC_2 (long) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int,int) ;

long FUNC_5(struct wait_queue_entry *VAR_2, unsigned VAR_3, long VAR_4)
{






 FUNC_3(VAR_3);
 if (!(VAR_2->flags & VAR_1) && !FUNC_1())
  VAR_4 = FUNC_2(VAR_4);
 FUNC_0(VAR_0);







 FUNC_4(VAR_2->flags, VAR_2->flags & ~VAR_1);

 return VAR_4;
}
