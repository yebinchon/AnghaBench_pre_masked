
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer {int mutex; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ring_buffer *VAR_1, int VAR_2)
{
 FUNC_0(&VAR_1->mutex);
 if (VAR_2)
  VAR_1->flags |= VAR_0;
 else
  VAR_1->flags &= ~VAR_0;
 FUNC_1(&VAR_1->mutex);
}
