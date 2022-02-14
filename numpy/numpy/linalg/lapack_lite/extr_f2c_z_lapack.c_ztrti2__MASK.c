
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef void* logical ;
typedef int integer ;
struct TYPE_5__ {int r; int i; } ;
typedef TYPE_1__ doublecomplex ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int*) ;
 int FUNC_2 (TYPE_1__*,int *,TYPE_1__*) ;

int FUNC_3(char *VAR_2, char *VAR_3, integer *VAR_4,
 doublecomplex *VAR_5, integer *VAR_6, integer *VAR_7)
{

    integer VAR_8, VAR_9, VAR_10, VAR_11;
    doublecomplex VAR_12;


    static integer VAR_13;
    static doublecomplex VAR_14;
    extern logical FUNC_4(char *, char *);
    extern int FUNC_5(integer *, doublecomplex *,
     doublecomplex *, integer *);
    static logical VAR_15;
    extern int FUNC_6(char *, char *, char *, integer *,
     doublecomplex *, integer *, doublecomplex *, integer *), FUNC_1(char *, integer *);
    static logical VAR_16;
    VAR_8 = *VAR_6;
    VAR_9 = 1 + VAR_8;
    VAR_5 -= VAR_9;


    *VAR_7 = 0;
    VAR_15 = FUNC_4(VAR_2, "U");
    VAR_16 = FUNC_4(VAR_3, "N");
    if (! VAR_15 && ! FUNC_4(VAR_2, "L")) {
 *VAR_7 = -1;
    } else if (! VAR_16 && ! FUNC_4(VAR_3, "U")) {
 *VAR_7 = -2;
    } else if (*VAR_4 < 0) {
 *VAR_7 = -3;
    } else if (*VAR_6 < FUNC_0(1,*VAR_4)) {
 *VAR_7 = -5;
    }
    if (*VAR_7 != 0) {
 VAR_10 = -(*VAR_7);
 FUNC_1("ZTRTI2", &VAR_10);
 return 0;
    }

    if (VAR_15) {



 VAR_10 = *VAR_4;
 for (VAR_13 = 1; VAR_13 <= VAR_10; ++VAR_13) {
     if (VAR_16) {
  VAR_11 = VAR_13 + VAR_13 * VAR_8;
  FUNC_2(&VAR_12, &VAR_1, &VAR_5[VAR_13 + VAR_13 * VAR_8]);
  VAR_5[VAR_11].r = VAR_12, VAR_5[VAR_11].i = VAR_12;
  VAR_11 = VAR_13 + VAR_13 * VAR_8;
  VAR_12 = -VAR_5[VAR_11].r, VAR_12 = -VAR_5[VAR_11].i;
  VAR_14.r = VAR_12, VAR_14.i = VAR_12;
     } else {
  VAR_12 = -1., VAR_12 = -0.;
  VAR_14.r = VAR_12, VAR_14.i = VAR_12;
     }



     VAR_11 = VAR_13 - 1;
     FUNC_6("Upper", "No transpose", VAR_3, &VAR_11, &VAR_5[VAR_9], VAR_6, &
      VAR_5[VAR_13 * VAR_8 + 1], &VAR_0);
     VAR_11 = VAR_13 - 1;
     FUNC_5(&VAR_11, &VAR_14, &VAR_5[VAR_13 * VAR_8 + 1], &VAR_0);

 }
    } else {



 for (VAR_13 = *VAR_4; VAR_13 >= 1; --VAR_13) {
     if (VAR_16) {
  VAR_10 = VAR_13 + VAR_13 * VAR_8;
  FUNC_2(&VAR_12, &VAR_1, &VAR_5[VAR_13 + VAR_13 * VAR_8]);
  VAR_5[VAR_10].r = VAR_12, VAR_5[VAR_10].i = VAR_12;
  VAR_10 = VAR_13 + VAR_13 * VAR_8;
  VAR_12 = -VAR_5[VAR_10].r, VAR_12 = -VAR_5[VAR_10].i;
  VAR_14.r = VAR_12, VAR_14.i = VAR_12;
     } else {
  VAR_12 = -1., VAR_12 = -0.;
  VAR_14.r = VAR_12, VAR_14.i = VAR_12;
     }
     if (VAR_13 < *VAR_4) {



  VAR_10 = *VAR_4 - VAR_13;
  FUNC_6("Lower", "No transpose", VAR_3, &VAR_10, &VAR_5[VAR_13 + 1 + (VAR_13 +
   1) * VAR_8], VAR_6, &VAR_5[VAR_13 + 1 + VAR_13 * VAR_8], &VAR_0);
  VAR_10 = *VAR_4 - VAR_13;
  FUNC_5(&VAR_10, &VAR_14, &VAR_5[VAR_13 + 1 + VAR_13 * VAR_8], &VAR_0);
     }

 }
    }

    return 0;



}
