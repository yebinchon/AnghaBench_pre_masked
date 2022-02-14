
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wait_queue_entry {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct wait_queue_entry*,unsigned int,int,void*) ;
 int FUNC_1 () ;

int FUNC_2(struct wait_queue_entry *VAR_1, unsigned VAR_2, int VAR_3, void *VAR_4)
{

 FUNC_1();
 VAR_1->flags |= VAR_0;

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
