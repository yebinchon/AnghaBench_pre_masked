
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ringbuf_t {scalar_t__ head; scalar_t__ tail; } ;


 size_t FUNC_0 (struct ringbuf_t const*) ;

size_t FUNC_1(const struct ringbuf_t *VAR_0)
{
 if (VAR_0->head >= VAR_0->tail){
  return FUNC_0(VAR_0) - (VAR_0->head - VAR_0->tail);
 }else{
  return VAR_0->tail - VAR_0->head -1;
 }
}
