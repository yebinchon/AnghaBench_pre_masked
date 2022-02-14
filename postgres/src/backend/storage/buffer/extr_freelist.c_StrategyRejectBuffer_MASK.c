
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ btype; scalar_t__* buffers; size_t current; int current_was_in_ring; } ;
typedef int BufferDesc ;
typedef TYPE_1__* BufferAccessStrategy ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;

bool
FUNC_1(BufferAccessStrategy VAR_2, BufferDesc *VAR_3)
{

 if (VAR_2->btype != VAR_0)
  return 0;


 if (!VAR_2->current_was_in_ring ||
  VAR_2->buffers[VAR_2->current] != FUNC_0(VAR_3))
  return 0;





 VAR_2->buffers[VAR_2->current] = VAR_1;

 return 1;
}
