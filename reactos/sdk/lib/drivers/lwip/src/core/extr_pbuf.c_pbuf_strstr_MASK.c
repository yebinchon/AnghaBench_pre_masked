
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16_t ;
struct pbuf {int tot_len; } ;


 int FUNC_0 (struct pbuf*,char const*,int,int ) ;
 size_t FUNC_1 (char const*) ;

u16_t
FUNC_2(struct pbuf* VAR_0, const char* VAR_1)
{
  size_t VAR_2;
  if ((VAR_1 == ((void*)0)) || (VAR_1[0] == 0) || (VAR_0->tot_len == 0xFFFF)) {
    return 0xFFFF;
  }
  VAR_2 = FUNC_1(VAR_1);
  if (VAR_2 >= 0xFFFF) {
    return 0xFFFF;
  }
  return FUNC_0(VAR_0, VAR_1, (u16_t)VAR_2, 0);
}
