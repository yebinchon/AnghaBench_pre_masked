
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_info {int lock; scalar_t__ cumm_bytes; void* prev; void* status; } ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct stream_info *VAR_1)
{
 VAR_1->status = VAR_0;
 VAR_1->prev = VAR_0;
 FUNC_0(&VAR_1->lock);
 VAR_1->cumm_bytes = 0;
 FUNC_1(&VAR_1->lock);
}
