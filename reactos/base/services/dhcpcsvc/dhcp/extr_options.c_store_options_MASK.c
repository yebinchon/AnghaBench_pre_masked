
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_cache {int len; scalar_t__ value; } ;
typedef int option_stored ;


 int FUNC_0 (unsigned char*,scalar_t__,unsigned char) ;
 int FUNC_1 (int*,int ,int) ;

int
FUNC_2(unsigned char *VAR_0, int VAR_1, struct tree_cache **VAR_2,
    unsigned char *VAR_3, int VAR_4, int VAR_5,
    int VAR_6)
{
 int VAR_7 = 0, VAR_8[256], VAR_9, VAR_10;


 FUNC_1(VAR_8, 0, sizeof(VAR_8));





 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {

  int VAR_11 = VAR_3[VAR_9];
  int VAR_12;





  int VAR_13;


  if (!VAR_2[VAR_11]) {
   continue;
  }





  if (VAR_8[VAR_11])
   continue;
  VAR_8[VAR_11] = 1;


  VAR_13 = VAR_2[VAR_11]->len;
  VAR_10 = 0;

  VAR_12 = VAR_7;
  while (VAR_13) {
   unsigned char VAR_14 = VAR_13 > 255 ? 255 : VAR_13;






   if (VAR_7 < VAR_5 &&
       VAR_7 + VAR_14 > VAR_5)
    VAR_14 = VAR_5 - VAR_7;
   else if (VAR_7 < VAR_6 &&
       VAR_7 + VAR_14 > VAR_6)
    VAR_14 = VAR_6 - VAR_7;





   if (VAR_7 + 2 + VAR_14 > VAR_1) {
    VAR_7 = VAR_12;
    break;
   }


   VAR_0[VAR_7] = VAR_11;
   VAR_0[VAR_7 + 1] = VAR_14;
   FUNC_0(VAR_0 + VAR_7 + 2,
      VAR_2[VAR_11]->value + VAR_10, VAR_14);
   VAR_13 -= VAR_14;
   VAR_10 += VAR_14;
   VAR_7 += 2 + VAR_14;
  }
 }
 return (VAR_7);
}
