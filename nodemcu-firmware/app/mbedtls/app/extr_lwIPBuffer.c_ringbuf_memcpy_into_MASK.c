
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef void uint8_t ;
typedef TYPE_1__* ringbuf_t ;
struct TYPE_7__ {void const* head; void const* buf; int tail; } ;


 size_t FUNC_0 (int,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void const*,void const*,size_t) ;
 size_t FUNC_3 (TYPE_1__*) ;
 void* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,void const*) ;

void *FUNC_7(ringbuf_t VAR_0,const void *VAR_1, size_t VAR_2)
{
 const uint8_t *VAR_3 = VAR_1;
 const uint8_t *VAR_4 = FUNC_4(VAR_0);
 int VAR_5 = VAR_2 > FUNC_3(VAR_0);
 size_t VAR_6 = 0;

 while (VAR_6 != VAR_2){
  FUNC_1(VAR_4 > VAR_0->head);
  size_t VAR_7 = FUNC_0(VAR_4 - VAR_0->head, VAR_2 - VAR_6);
  FUNC_2(VAR_0->head, VAR_3 + VAR_6, VAR_7);
  VAR_0->head += VAR_7;
  VAR_6 += VAR_7;

  if (VAR_0->head == VAR_4)
   VAR_0->head = VAR_0->buf;
 }

 if (VAR_5) {
  VAR_0->tail = FUNC_6(VAR_0, VAR_0->head);
  FUNC_1(FUNC_5(VAR_0));
 }

 return VAR_0->head;
}
