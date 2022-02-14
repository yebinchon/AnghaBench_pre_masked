
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef TYPE_1__* ringbuf_t ;
struct TYPE_8__ {int const* head; int tail; int const* buf; } ;


 size_t FUNC_0 (int,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int const*,int,size_t) ;
 size_t FUNC_3 (TYPE_1__*) ;
 size_t FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int const*) ;

size_t FUNC_8(ringbuf_t VAR_0, int VAR_1, size_t VAR_2)
{
 const uint8_t *VAR_3 = FUNC_5(VAR_0);
 size_t VAR_4 = 0;
 size_t VAR_5 = FUNC_0(VAR_2, FUNC_3(VAR_0));
 int VAR_6 = VAR_5 > FUNC_4(VAR_0);

 while (VAR_4 != VAR_5){

  FUNC_1(VAR_3 > VAR_0->head);
  size_t VAR_7 = FUNC_0(VAR_3 - VAR_0->head, VAR_5 - VAR_4);
  FUNC_2(VAR_0->head, VAR_1, VAR_7);
  VAR_0->head += VAR_7;
  VAR_4 += VAR_7;

  if (VAR_0->head == VAR_3)
   VAR_0->head = VAR_0->buf;
 }

 if (VAR_6){
  VAR_0->tail = FUNC_7(VAR_0, VAR_0->head);
  FUNC_1(FUNC_6(VAR_0));
 }

 return VAR_4;
}
