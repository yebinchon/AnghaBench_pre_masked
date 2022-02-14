
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char const*,int *,int ) ;
 int FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,char const**,int,char) ;
 int FUNC_8 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char const*,int) ;
 int FUNC_11 (char const*,int,char const*) ;
 int FUNC_12 (int *,char const*,int ) ;
 int FUNC_13 (int ,char const*) ;
 int FUNC_14 (char const*) ;
 int FUNC_15 (int) ;
 int FUNC_16 () ;
 int FUNC_17 (int ,int (*) (int)) ;
 char* FUNC_18 (int *) ;
 int VAR_9 ;
 int FUNC_19 (char const*,char*) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int,char*,int) ;

int FUNC_23(int VAR_10, const char **VAR_11) {
 char *VAR_12;
 const char *VAR_13, *VAR_14 = ((void*)0);
 int VAR_15, VAR_16 = VAR_0;
 int VAR_17 = 1, VAR_18 = 1;
 bool VAR_19 = 0;


 if (VAR_10 < 2) {
  return FUNC_15 (1);
 }
 VAR_13 = VAR_11[1];

 if (VAR_13[0] == '-') {
  switch (VAR_13[1]) {
  case 0:

   break;
  case '0':
   VAR_16 = VAR_2;
   VAR_17++;
   VAR_18++;
   if (VAR_17 >= VAR_10) {
    return FUNC_15 (1);
   }
   break;
  case 'g':
   VAR_17 += 2;
   if (VAR_17 >= VAR_10) {
    return FUNC_15 (1);
   }
   VAR_14 = VAR_11[2];
   VAR_18 += 2;
   break;
  case 'J':
   VAR_6 |= VAR_3;
   VAR_17++;
   VAR_18++;
   if (VAR_17 >= VAR_10) {
    return FUNC_15 (1);
   }
   break;
  case 'c': return (VAR_10 < 3)? FUNC_15 (1): FUNC_14 (VAR_11[2]);
  case 'v': return FUNC_16 ();
  case 'h': return FUNC_15 (2);
  case 'e': return FUNC_1 ();
  case 'd': return FUNC_0 ();
  case 'D':
   if (VAR_10 == 4) {
    return FUNC_3 (VAR_11[2], VAR_11[3]) ? 0 : 1;
   }
   return FUNC_15 (0);
  case 'j':
   if (VAR_10 > 2) {
    return FUNC_10 (VAR_11[VAR_17 + 1], VAR_1);
   }
   return FUNC_8 ();
  default:
   FUNC_4 ("Invalid flag %s\n", VAR_13);
   break;
  }
 }


 if (VAR_18 == 1 && !FUNC_19 (VAR_11[VAR_18], "-")) {

  VAR_11[VAR_18] = "";
  if (VAR_10 == VAR_17 + 1) {
   VAR_19 = 1;

   VAR_11[VAR_18] = "-";
   VAR_10++;
   VAR_18++;
  }
 }

 if (VAR_10 - 1 == VAR_17) {
  if (VAR_14) {
   return FUNC_11 (VAR_11[VAR_17], VAR_16, VAR_14);
  }
  return FUNC_10 (VAR_11[VAR_17], VAR_16);
 }




 int VAR_20 = 0;
 if (VAR_19 || !FUNC_19 (VAR_11[VAR_17 + 1], "-")) {
  if ((VAR_7 = FUNC_12 (((void*)0), VAR_11[VAR_17], 0))) {
   FUNC_9 (VAR_7, VAR_6);
   int VAR_21 = VAR_17 + 2;
   if (VAR_21 < VAR_10) {
    VAR_8 |= FUNC_7 (VAR_7, VAR_11 + VAR_18 + 2, VAR_10 - VAR_21, '-');
   }
   for (; (VAR_12 = FUNC_18 (((void*)0)));) {
    VAR_8 |= FUNC_13 (VAR_7, VAR_12);
    if (VAR_16) {
     FUNC_5 (VAR_9);
     FUNC_22 (1, "", 1);
    }
    FUNC_6 (VAR_12);
   }
  }
 } else if (!FUNC_19 (VAR_11[VAR_17 + 1], "=")) {
  VAR_20 = FUNC_2 (VAR_11[VAR_17], ((void*)0), 0);
 } else {
  VAR_7 = FUNC_12 (((void*)0), VAR_11[VAR_17], 0);
  if (!VAR_7) {
   return 1;
  }
  FUNC_9 (VAR_7, VAR_6);
  for (VAR_15 = VAR_17 + 1; VAR_15 < VAR_10; VAR_15++) {
   VAR_8 |= FUNC_13 (VAR_7, VAR_11[VAR_15]);
   if (VAR_16) {
    FUNC_5 (VAR_9);
    FUNC_22 (1, "", 1);
   }
  }
 }
 FUNC_21 (VAR_20);
 return VAR_20;
}
