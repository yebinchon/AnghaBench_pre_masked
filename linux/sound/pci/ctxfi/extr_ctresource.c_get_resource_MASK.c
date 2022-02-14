
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(u8 *VAR_1, unsigned int VAR_2,
      unsigned int VAR_3, unsigned int *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;


 for (VAR_5 = 0, VAR_8 = VAR_3; VAR_5 < VAR_2; VAR_5++) {
  VAR_6 = VAR_5 / 8;
  VAR_7 = VAR_5 % 8;
  if (VAR_1[VAR_6] & ((u8)1 << VAR_7)) {
   VAR_8 = VAR_3;
   continue;
  }
  if (!(--VAR_8))
   break;
 }

 if (VAR_5 >= VAR_2) {

  return -VAR_0;
 }


 for (VAR_8 = VAR_3; VAR_8 > 0; VAR_8--) {
  VAR_6 = VAR_5 / 8;
  VAR_7 = VAR_5 % 8;
  VAR_1[VAR_6] |= ((u8)1 << VAR_7);
  VAR_5--;
 }

 *VAR_4 = VAR_5 + 1;

 return 0;
}
