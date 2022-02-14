
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16_t ;
struct pbuf {scalar_t__ tot_len; } ;


 scalar_t__ FUNC_0 (struct pbuf*,scalar_t__,void const*,scalar_t__) ;

u16_t
FUNC_1(struct pbuf* VAR_0, const void* VAR_1, u16_t VAR_2, u16_t VAR_3)
{
  u16_t VAR_4;
  u16_t VAR_5 = VAR_0->tot_len - VAR_2;
  if (VAR_0->tot_len >= VAR_2 + VAR_3) {
    for(VAR_4 = VAR_3; VAR_4 <= VAR_5; ) {
      u16_t VAR_6 = FUNC_0(VAR_0, VAR_4, VAR_1, VAR_2);
      if (VAR_6 == 0) {
        return VAR_4;
      } else {
        VAR_4 += VAR_6;
      }
    }
  }
  return 0xFFFF;
}
