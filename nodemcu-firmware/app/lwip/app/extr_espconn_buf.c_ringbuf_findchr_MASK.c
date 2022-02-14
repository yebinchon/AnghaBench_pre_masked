
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ringbuf_t {int * buf; int * tail; } ;


 size_t FUNC_0 (int,size_t) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int const*,int,size_t) ;
 int FUNC_3 (struct ringbuf_t const*) ;
 size_t FUNC_4 (struct ringbuf_t const*) ;
 int * FUNC_5 (struct ringbuf_t const*) ;

size_t FUNC_6(const struct ringbuf_t *VAR_0, int VAR_1, size_t VAR_2)
{
 const uint8_t *VAR_3 = FUNC_5(VAR_0);
 size_t VAR_4 = FUNC_4(VAR_0);
 if (VAR_2 >= VAR_4)
  return VAR_4;

 const uint8_t *VAR_5 = VAR_0 ->buf + (((VAR_0->tail - VAR_0->buf) + VAR_2) % FUNC_3(VAR_0));
 FUNC_1(VAR_3 > VAR_5);
 size_t VAR_6 = FUNC_0(VAR_3 - VAR_5, VAR_4 - VAR_2);
 const uint8_t *VAR_7 = (const uint8_t *)FUNC_2(VAR_5, VAR_1, VAR_6);
 if (VAR_7)
  return VAR_2 + (VAR_7 - VAR_5);
 else
  return FUNC_6(VAR_0, VAR_1, VAR_2 + VAR_6);
}
