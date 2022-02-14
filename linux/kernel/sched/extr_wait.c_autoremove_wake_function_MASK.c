
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wait_queue_entry {int entry; } ;


 int FUNC_0 (struct wait_queue_entry*,unsigned int,int,void*) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct wait_queue_entry *VAR_0, unsigned VAR_1, int VAR_2, void *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);

 if (VAR_4)
  FUNC_1(&VAR_0->entry);

 return VAR_4;
}
