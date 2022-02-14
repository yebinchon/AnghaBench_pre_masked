
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*) ;
 int VAR_5 ;
 int FUNC_1 (int*,int*,size_t) ;
 int FUNC_2 (int*,int*,size_t) ;
 int FUNC_3 (int*,int ,size_t) ;
 int* VAR_6 ;

int FUNC_4(int VAR_7, size_t VAR_8, const void *VAR_9)
{
    uint8_t *VAR_10;
    size_t VAR_11;
    uint8_t VAR_12[VAR_2];

    if ((unsigned)VAR_7 - 1 > 254) {
 VAR_5 = VAR_3;
 return -1;
    }

    if (VAR_8 > 255) {
 VAR_5 = VAR_4;
 return -1;
    }

    VAR_11 = VAR_1;
    VAR_10 = VAR_12;
    FUNC_1(VAR_10, VAR_6 + 2 * 4, VAR_11);

    while (VAR_11 >= 2) {
 uint8_t VAR_13 = VAR_10[0];
 size_t VAR_14 = VAR_10[1] + 2;

 if (VAR_13 == VAR_0)
     break;

 if (VAR_13 == VAR_7) {


     if (VAR_14 >= VAR_11) {

  break;
     }
     FUNC_2(VAR_10, VAR_10 + VAR_14, VAR_11 - VAR_14);
 } else {

     if (VAR_14 > VAR_11)
  break;

     VAR_11 -= VAR_14;
     VAR_10 += VAR_14;
 }
    }




    if (VAR_8) {
 if (VAR_11 < VAR_8 + 2) {
     VAR_5 = VAR_4;
     return -1;
 }

 *VAR_10++ = VAR_7;
 *VAR_10++ = VAR_8;
 FUNC_1(VAR_10, VAR_9, VAR_8);
 VAR_10 += VAR_8;
 VAR_11 -= VAR_8 + 2;
    }

    FUNC_3(VAR_10, 0, VAR_11);


    FUNC_1(VAR_6 + 2 * 4, VAR_12, VAR_1);
    FUNC_0(VAR_6);

    return 0;
}
