
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct element {scalar_t__ id; int datalen; int* data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

bool FUNC_0(const struct element *VAR_2,
       const struct element *VAR_3)
{
 u8 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 const u8 *VAR_9;

 if (VAR_2->id == VAR_1)
  return 0;

 if (!VAR_3 || VAR_3->datalen < 2)
  return 1;
 VAR_4 = VAR_3->data[1];
 if (VAR_3->datalen < 3 + VAR_4)
  return 1;

 VAR_5 = VAR_3->data[2 + VAR_4];
 if (VAR_3->datalen < 3 + VAR_4 + VAR_5)
  return 1;

 if (VAR_2->id == VAR_0) {
  if (!VAR_5)
   return 1;
  VAR_7 = VAR_5;
  VAR_9 = &VAR_3->data[3 + VAR_4];
  VAR_8 = VAR_2->data[0];
 } else {
  if (!VAR_4)
   return 1;
  VAR_7 = VAR_4;
  VAR_9 = &VAR_3->data[2];
  VAR_8 = VAR_2->id;
 }

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  if (VAR_9[VAR_6] == VAR_8)
   return 0;
 }

 return 1;
}
