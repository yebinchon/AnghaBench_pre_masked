
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct buf {int dummy; } ;


 int FUNC_0 (struct buf*,char const*,size_t) ;
 int FUNC_1 (struct buf*,char) ;

__attribute__((used)) static void FUNC_2(struct buf *VAR_0, const uint8_t *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = 0, VAR_4 = 0;

 while (VAR_3 < VAR_2) {
  size_t VAR_5 = VAR_3;

  while (VAR_3 < VAR_2 && VAR_1[VAR_3] != '\t') {
   VAR_3++; VAR_4++;
  }

  if (VAR_3 > VAR_5)
   FUNC_0(VAR_0, VAR_1 + VAR_5, VAR_3 - VAR_5);

  if (VAR_3 >= VAR_2)
   break;

  do {
   FUNC_1(VAR_0, ' '); VAR_4++;
  } while (VAR_4 % 4);

  VAR_3++;
 }
}
