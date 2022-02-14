
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_2__ {char* string; int const op; int const mask; int arg1; int arg2; int arg3; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 char* FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,int const*) ;
 int const FUNC_2 (int const) ;
 int const FUNC_3 (int ,int const) ;
 char* FUNC_4 (char const*) ;
 char* FUNC_5 (char const*,int const,...) ;
 char* FUNC_6 (char*) ;

__attribute__((used)) static char *FUNC_7(ut64 VAR_10, const ut8 *VAR_11, int VAR_12, int *VAR_13) {
 int VAR_14 = 0;
 while (VAR_9[VAR_14].string && VAR_9[VAR_14].op != (VAR_11[0] & ~VAR_9[VAR_14].mask)) {
  VAR_14++;
 }

 if (VAR_9[VAR_14].string) {

  const char* VAR_15 = VAR_9[VAR_14].string;
  ut8 VAR_16 = VAR_9[VAR_14].mask;
  ut8 VAR_17 = VAR_9[VAR_14].arg1;
  ut8 VAR_18 = VAR_9[VAR_14].arg2;
  ut8 VAR_19 = VAR_9[VAR_14].arg3;
  ut8 VAR_20 = VAR_9[VAR_14].len;
  ut8 VAR_21 = 0, VAR_22 = 0;
  char* VAR_23 = 0;

  switch (VAR_20) {
  case 1:
   if ((VAR_17 == VAR_7) || (VAR_17 == VAR_8)) {

    VAR_23 = FUNC_5 (VAR_15, VAR_11[0] & VAR_16);
   } else {
    VAR_23 = FUNC_4 (VAR_15);
   }
   break;
  case 2:
   if (VAR_12>1) {
    if (VAR_17 == VAR_6) {
     VAR_23 = FUNC_5 (VAR_15, FUNC_3 (VAR_10 + 2, VAR_11[1]));
    } else if (VAR_17 == VAR_0) {
     VAR_23 = FUNC_5 (VAR_15, FUNC_1 (VAR_10 + 2, VAR_11));
    } else if ((VAR_17 == VAR_7) || (VAR_17 == VAR_8)) {

     if (VAR_18 == VAR_6) {
      VAR_23 = FUNC_5 (VAR_15, VAR_11[0] & VAR_16, FUNC_3 (VAR_10 + 2, VAR_11[1]));
     } else {
      VAR_23 = FUNC_5 (VAR_15, VAR_11[0] & VAR_16, VAR_11[1]);
     }
     VAR_22 = VAR_11[1];
    } else if ((VAR_18 == VAR_7) || (VAR_18 == VAR_8)) {

     VAR_23 = FUNC_5 (VAR_15, VAR_11[1], VAR_11[0] & VAR_16);
     VAR_21 = VAR_11[1];
    } else if (VAR_17 == VAR_2) {

     VAR_23 = FUNC_5 (VAR_15, FUNC_2 (VAR_11[1]), VAR_11[1] & 0x07);
     VAR_21 = VAR_11[1];
    } else {

     VAR_23 = FUNC_5 (VAR_15, VAR_11[1]);
     VAR_21 = VAR_11[1];
    }
   } else {
    *VAR_13 = -1;
    return FUNC_6 ("truncated");
   }
   break;
  case 3:
   if (VAR_12 > 2) {
    if ((VAR_17 == VAR_1) || (VAR_17 == VAR_4)) {
     VAR_23 = FUNC_5 (VAR_15, 0x100 * VAR_11[1] + VAR_11[2]);
    } else if (VAR_17 == VAR_4) {
     VAR_23 = FUNC_5 (VAR_15, 0x100 * VAR_11[1] + VAR_11[2]);
    } else if (VAR_18 == VAR_6) {
     if (VAR_16 != VAR_5) {

      VAR_23 = FUNC_5 (VAR_15, VAR_11[0] & VAR_16, VAR_11[1], FUNC_3 (VAR_10 + 3, VAR_11[1]));
     } else if (VAR_17 == VAR_2) {

      VAR_23 = FUNC_5 (VAR_15, FUNC_2 (VAR_11[1]), VAR_11[1] & 0x07, FUNC_3 (VAR_10 + 3, VAR_11[2]));
      VAR_21 = VAR_11[1];
     } else {

      VAR_23 = FUNC_5 (VAR_15, VAR_11[1], FUNC_3 (VAR_10 + 3, VAR_11[2]));
      VAR_21 = VAR_11[1];
     }
    } else if (VAR_19 == VAR_6) {

     VAR_23 = FUNC_5 (VAR_15, VAR_11[0] & VAR_16, VAR_11[1], FUNC_3 (VAR_10 + 3, VAR_11[2]));
     VAR_22 = VAR_11[1];
    } else if (VAR_17 == VAR_3 && VAR_18 == VAR_3) {

     VAR_23 = FUNC_5 (VAR_15, VAR_11[2], VAR_11[1]);
     VAR_21 = VAR_11[2];
     VAR_22 = VAR_11[1];
    } else {

     VAR_23 = FUNC_5 (VAR_15, VAR_11[1], VAR_11[2]);
     VAR_21 = VAR_11[1];
    }
   } else {
    *VAR_13 = -1;
    return FUNC_6 ("truncated");
   }
   break;
  default:

   return 0;
  }


  *VAR_13 = VAR_20;
  if (VAR_23) {
   VAR_23 = FUNC_0 (VAR_23, VAR_17, VAR_21);
   VAR_23 = FUNC_0 (VAR_23, VAR_18, VAR_22);
   return VAR_23;
  }
  return ((void*)0);
 }


 return 0;
}
