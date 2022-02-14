
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int logical ;
typedef int integer ;



logical FUNC_0(char *VAR_0, char *VAR_1)
{

    logical VAR_2;


    static integer VAR_3, VAR_4, VAR_5;
    VAR_2 = *(unsigned char *)VAR_0 == *(unsigned char *)VAR_1;
    if (VAR_2) {
 return VAR_2;
    }



    VAR_5 = 'Z';
    VAR_3 = *(unsigned char *)VAR_0;
    VAR_4 = *(unsigned char *)VAR_1;

    if (VAR_5 == 90 || VAR_5 == 122) {






 if (VAR_3 >= 97 && VAR_3 <= 122) {
     VAR_3 += -32;
 }
 if (VAR_4 >= 97 && VAR_4 <= 122) {
     VAR_4 += -32;
 }

    } else if (VAR_5 == 233 || VAR_5 == 169) {






 if (VAR_3 >= 129 && VAR_3 <= 137 || VAR_3 >= 145 && VAR_3 <= 153 || VAR_3
  >= 162 && VAR_3 <= 169) {
     VAR_3 += 64;
 }
 if (VAR_4 >= 129 && VAR_4 <= 137 || VAR_4 >= 145 && VAR_4 <= 153 || VAR_4
  >= 162 && VAR_4 <= 169) {
     VAR_4 += 64;
 }

    } else if (VAR_5 == 218 || VAR_5 == 250) {






 if (VAR_3 >= 225 && VAR_3 <= 250) {
     VAR_3 += -32;
 }
 if (VAR_4 >= 225 && VAR_4 <= 250) {
     VAR_4 += -32;
 }
    }
    VAR_2 = VAR_3 == VAR_4;







    return VAR_2;
}
