
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__* data; size_t len; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static u8 *FUNC_1(struct sk_buff *VAR_2, size_t *VAR_3)
{
 u8 *VAR_4 = &VAR_2->data[2], VAR_5, VAR_6;
 size_t VAR_7 = VAR_2->len - VAR_0, VAR_8 = 0;

 while (VAR_8 < VAR_7) {
  VAR_5 = VAR_4[0];
  VAR_6 = VAR_4[1];

  FUNC_0("type 0x%x length %d\n", VAR_5, VAR_6);

  if (VAR_5 == VAR_1) {
   *VAR_3 = VAR_6;
   return &VAR_4[2];
  }

  VAR_8 += VAR_6 + 2;
  VAR_4 += VAR_6 + 2;
 }

 return ((void*)0);
}
