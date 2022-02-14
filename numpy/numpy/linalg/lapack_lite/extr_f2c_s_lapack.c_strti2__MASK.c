
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float real ;
typedef void* logical ;
typedef int integer ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int*) ;

int FUNC_2(char *VAR_1, char *VAR_2, integer *VAR_3, real *VAR_4,
 integer *VAR_5, integer *VAR_6)
{

    integer VAR_7, VAR_8, VAR_9, VAR_10;


    static integer VAR_11;
    static real VAR_12;
    extern logical FUNC_3(char *, char *);
    extern int FUNC_4(integer *, real *, real *, integer *);
    static logical VAR_13;
    extern int FUNC_5(char *, char *, char *, integer *,
     real *, integer *, real *, integer *),
     FUNC_1(char *, integer *);
    static logical VAR_14;
    VAR_7 = *VAR_5;
    VAR_8 = 1 + VAR_7;
    VAR_4 -= VAR_8;


    *VAR_6 = 0;
    VAR_13 = FUNC_3(VAR_1, "U");
    VAR_14 = FUNC_3(VAR_2, "N");
    if (! VAR_13 && ! FUNC_3(VAR_1, "L")) {
 *VAR_6 = -1;
    } else if (! VAR_14 && ! FUNC_3(VAR_2, "U")) {
 *VAR_6 = -2;
    } else if (*VAR_3 < 0) {
 *VAR_6 = -3;
    } else if (*VAR_5 < FUNC_0(1,*VAR_3)) {
 *VAR_6 = -5;
    }
    if (*VAR_6 != 0) {
 VAR_9 = -(*VAR_6);
 FUNC_1("STRTI2", &VAR_9);
 return 0;
    }

    if (VAR_13) {



 VAR_9 = *VAR_3;
 for (VAR_11 = 1; VAR_11 <= VAR_9; ++VAR_11) {
     if (VAR_14) {
  VAR_4[VAR_11 + VAR_11 * VAR_7] = 1.f / VAR_4[VAR_11 + VAR_11 * VAR_7];
  VAR_12 = -VAR_4[VAR_11 + VAR_11 * VAR_7];
     } else {
  VAR_12 = -1.f;
     }



     VAR_10 = VAR_11 - 1;
     FUNC_5("Upper", "No transpose", VAR_2, &VAR_10, &VAR_4[VAR_8], VAR_5, &
      VAR_4[VAR_11 * VAR_7 + 1], &VAR_0);
     VAR_10 = VAR_11 - 1;
     FUNC_4(&VAR_10, &VAR_12, &VAR_4[VAR_11 * VAR_7 + 1], &VAR_0);

 }
    } else {



 for (VAR_11 = *VAR_3; VAR_11 >= 1; --VAR_11) {
     if (VAR_14) {
  VAR_4[VAR_11 + VAR_11 * VAR_7] = 1.f / VAR_4[VAR_11 + VAR_11 * VAR_7];
  VAR_12 = -VAR_4[VAR_11 + VAR_11 * VAR_7];
     } else {
  VAR_12 = -1.f;
     }
     if (VAR_11 < *VAR_3) {



  VAR_9 = *VAR_3 - VAR_11;
  FUNC_5("Lower", "No transpose", VAR_2, &VAR_9, &VAR_4[VAR_11 + 1 + (VAR_11 +
   1) * VAR_7], VAR_5, &VAR_4[VAR_11 + 1 + VAR_11 * VAR_7], &VAR_0);
  VAR_9 = *VAR_3 - VAR_11;
  FUNC_4(&VAR_9, &VAR_12, &VAR_4[VAR_11 + 1 + VAR_11 * VAR_7], &VAR_0);
     }

 }
    }

    return 0;



}
