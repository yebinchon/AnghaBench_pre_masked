
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef void* logical ;
typedef int integer ;
struct TYPE_5__ {int i; int r; } ;
typedef TYPE_1__ complex ;


 int FUNC_0 (int,int) ;

int FUNC_1(char *VAR_0, integer *VAR_1, integer *VAR_2, complex *
 VAR_3, complex *VAR_4, complex *VAR_5, integer *VAR_6)
{

    integer VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;


    static integer VAR_12, VAR_13;
    extern logical FUNC_2(char *, char *);
    VAR_7 = *VAR_6;
    VAR_8 = 1 + VAR_7;
    VAR_5 -= VAR_8;


    if (FUNC_2(VAR_0, "U")) {






 VAR_9 = *VAR_2;
 for (VAR_13 = 2; VAR_13 <= VAR_9; ++VAR_13) {

     VAR_11 = VAR_13 - 1;
     VAR_10 = FUNC_0(VAR_11,*VAR_1);
     for (VAR_12 = 1; VAR_12 <= VAR_10; ++VAR_12) {
  VAR_11 = VAR_12 + VAR_13 * VAR_7;
  VAR_5[VAR_11].r = VAR_3->r, VAR_5[VAR_11].i = VAR_3->i;

     }

 }
 VAR_9 = FUNC_0(*VAR_2,*VAR_1);
 for (VAR_12 = 1; VAR_12 <= VAR_9; ++VAR_12) {
     VAR_10 = VAR_12 + VAR_12 * VAR_7;
     VAR_5[VAR_10].r = VAR_4->r, VAR_5[VAR_10].i = VAR_4->i;

 }

    } else if (FUNC_2(VAR_0, "L")) {






 VAR_9 = FUNC_0(*VAR_1,*VAR_2);
 for (VAR_13 = 1; VAR_13 <= VAR_9; ++VAR_13) {
     VAR_10 = *VAR_1;
     for (VAR_12 = VAR_13 + 1; VAR_12 <= VAR_10; ++VAR_12) {
  VAR_11 = VAR_12 + VAR_13 * VAR_7;
  VAR_5[VAR_11].r = VAR_3->r, VAR_5[VAR_11].i = VAR_3->i;

     }

 }
 VAR_9 = FUNC_0(*VAR_2,*VAR_1);
 for (VAR_12 = 1; VAR_12 <= VAR_9; ++VAR_12) {
     VAR_10 = VAR_12 + VAR_12 * VAR_7;
     VAR_5[VAR_10].r = VAR_4->r, VAR_5[VAR_10].i = VAR_4->i;

 }

    } else {






 VAR_9 = *VAR_2;
 for (VAR_13 = 1; VAR_13 <= VAR_9; ++VAR_13) {
     VAR_10 = *VAR_1;
     for (VAR_12 = 1; VAR_12 <= VAR_10; ++VAR_12) {
  VAR_11 = VAR_12 + VAR_13 * VAR_7;
  VAR_5[VAR_11].r = VAR_3->r, VAR_5[VAR_11].i = VAR_3->i;

     }

 }
 VAR_9 = FUNC_0(*VAR_1,*VAR_2);
 for (VAR_12 = 1; VAR_12 <= VAR_9; ++VAR_12) {
     VAR_10 = VAR_12 + VAR_12 * VAR_7;
     VAR_5[VAR_10].r = VAR_4->r, VAR_5[VAR_10].i = VAR_4->i;

 }
    }

    return 0;



}
