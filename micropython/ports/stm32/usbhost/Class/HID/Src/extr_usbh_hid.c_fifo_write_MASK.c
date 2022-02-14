
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_3__ {int lock; int head; int tail; int size; int * buf; } ;
typedef TYPE_1__ FIFO_TypeDef ;



uint16_t FUNC_0(FIFO_TypeDef * VAR_0, const void * VAR_1, uint16_t VAR_2)
{
  uint16_t VAR_3;
  const uint8_t * VAR_4;
  VAR_4 = VAR_1;
  if(VAR_0->lock == 0)
  {
    VAR_0->lock = 1;
    for(VAR_3=0; VAR_3 < VAR_2; VAR_3++)
    {
      if( (VAR_0->head + 1 == VAR_0->tail) ||
         ( (VAR_0->head + 1 == VAR_0->size) && (VAR_0->tail == 0)) )
      {
        VAR_0->lock = 0;
        return VAR_3;
      }
      else
      {
        VAR_0->buf[VAR_0->head] = *VAR_4++;
        VAR_0->head++;
        if( VAR_0->head == VAR_0->size )
        {
          VAR_0->head = 0;
        }
      }
    }
  }
  VAR_0->lock = 0;
  return VAR_2;
}
