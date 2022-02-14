
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8_t ;
typedef scalar_t__ u16_t ;
struct pbuf {scalar_t__ len; struct pbuf* next; } ;


 scalar_t__ FUNC_0 (struct pbuf*,scalar_t__) ;

u16_t
FUNC_1(struct pbuf* VAR_0, u16_t VAR_1, const void* VAR_2, u16_t VAR_3)
{
  u16_t VAR_4 = VAR_1;
  struct pbuf* VAR_5 = VAR_0;


  while ((VAR_5 != ((void*)0)) && (VAR_5->len <= VAR_4)) {
    VAR_4 -= VAR_5->len;
    VAR_5 = VAR_5->next;
  }

  if ((VAR_5 != ((void*)0)) && (VAR_5->len > VAR_4)) {
    u16_t VAR_6;
    for(VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
      u8_t VAR_7 = FUNC_0(VAR_5, VAR_4 + VAR_6);
      u8_t VAR_8 = ((u8_t*)VAR_2)[VAR_6];
      if (VAR_7 != VAR_8) {
        return VAR_6+1;
      }
    }
    return 0;
  }
  return 0xffff;
}
