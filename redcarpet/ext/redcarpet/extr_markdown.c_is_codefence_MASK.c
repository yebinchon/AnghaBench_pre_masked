
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct buf {char* data; size_t size; } ;


 scalar_t__ FUNC_0 (char) ;
 size_t FUNC_1 (char*,size_t) ;

__attribute__((used)) static size_t
FUNC_2(uint8_t *VAR_0, size_t VAR_1, struct buf *VAR_2)
{
 size_t VAR_3 = 0, VAR_4 = 0;
 uint8_t *VAR_5;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_3 == 0)
  return 0;

 while (VAR_3 < VAR_1 && VAR_0[VAR_3] == ' ')
  VAR_3++;

 VAR_5 = VAR_0 + VAR_3;

 if (VAR_3 < VAR_1 && VAR_0[VAR_3] == '{') {
  VAR_3++; VAR_5++;

  while (VAR_3 < VAR_1 && VAR_0[VAR_3] != '}' && VAR_0[VAR_3] != '\n') {
   VAR_4++; VAR_3++;
  }

  if (VAR_3 == VAR_1 || VAR_0[VAR_3] != '}')
   return 0;



  while (VAR_4 > 0 && FUNC_0(VAR_5[0])) {
   VAR_5++; VAR_4--;
  }

  while (VAR_4 > 0 && FUNC_0(VAR_5[VAR_4 - 1]))
   VAR_4--;

  VAR_3++;
 } else {
  while (VAR_3 < VAR_1 && !FUNC_0(VAR_0[VAR_3])) {
   VAR_4++; VAR_3++;
  }
 }

 if (VAR_2) {
  VAR_2->data = VAR_5;
  VAR_2->size = VAR_4;
 }

 while (VAR_3 < VAR_1 && VAR_0[VAR_3] != '\n') {
  if (!FUNC_0(VAR_0[VAR_3]))
   return 0;

  VAR_3++;
 }

 return VAR_3 + 1;
}
