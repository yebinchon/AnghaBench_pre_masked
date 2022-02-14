
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {char* (* cb_core_cmdstr ) (int ,char*) ;int (* cb_printf ) (char*,char*) ;int user; } ;
typedef int RSocket ;
typedef int RIODesc ;
typedef TYPE_1__ RIO ;


 int * FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 char* FUNC_1 (int,unsigned int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int*,char const*,int) ;
 int FUNC_5 (int*,int ,int) ;
 void* FUNC_6 (int*,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int*,int) ;
 int FUNC_9 (int *,int*,unsigned int) ;
 int FUNC_10 (int *,int*,int) ;
 int FUNC_11 (int*,int) ;
 char* FUNC_12 (char*) ;
 int FUNC_13 (char const*) ;
 char* FUNC_14 (int ,char*) ;
 int FUNC_15 (char*,char*) ;
 unsigned int FUNC_16 (int,char*,unsigned int) ;

__attribute__((used)) static char *FUNC_17(RIO *VAR_4, RIODesc *VAR_5, const char *VAR_6) {
 int VAR_7, VAR_8 = 0, VAR_9 = 0;
 RSocket *VAR_10 = FUNC_0 (VAR_5);
 unsigned int VAR_11;
 char *VAR_12, *VAR_13, *VAR_14;
 ut8 VAR_15[VAR_1];

 VAR_15[0] = VAR_0;
 VAR_11 = FUNC_13 (VAR_6) + 1;
 if (VAR_11 > VAR_1 - 5) {
  FUNC_2 ("Command too long\n");
  return ((void*)0);
 }
 FUNC_11 (VAR_15 + 1, VAR_11);
 FUNC_4 (VAR_15 + 5, VAR_6, VAR_11);
 (void)FUNC_10 (VAR_10, VAR_15, VAR_11+5);
 FUNC_7 (VAR_10);


 for (;;) {
  VAR_7 = FUNC_9 (VAR_10, VAR_15, 1);
  if (VAR_7 != 1) {
   return ((void*)0);
  }


  if (VAR_15[0] != VAR_0) {
   break;
  }


  VAR_15[0] |= VAR_2;
  FUNC_5 (VAR_15 + 1, 0, 4);
  VAR_7 = FUNC_9 (VAR_10, VAR_15 + 1, 4);
  if (VAR_7 != 4) {
   return ((void*)0);
  }
  VAR_9 = FUNC_6 (VAR_15, 1);
  if (VAR_9 + 1 == 0) {
   VAR_9 = 0;
  }
  VAR_14 = FUNC_1 (1, VAR_9 + 1);
  VAR_7 = FUNC_9 (VAR_10, (ut8*)VAR_14, VAR_9);
  FUNC_2 ("RUN %d CMD(%s)\n", VAR_7, VAR_14);
  if (VAR_14 && *VAR_14) {
   VAR_13 = VAR_4->cb_core_cmdstr (VAR_4->user, VAR_14);
  } else {
   VAR_13 = FUNC_12 ("");
  }
  FUNC_2 ("[%s]=>(%s)\n", VAR_14, VAR_13);
  VAR_8 = FUNC_13 (VAR_13);
  FUNC_3 (VAR_14);
  FUNC_11 (VAR_15 + 1, VAR_8);
  FUNC_4 (VAR_15 + 5, VAR_13, VAR_8);
  FUNC_3 (VAR_13);
  (void)FUNC_10 (VAR_10, VAR_15, VAR_8 + 5);
  FUNC_7 (VAR_10);
 }


 VAR_7 = FUNC_9 (VAR_10, VAR_15 + 1, 4);
 if (VAR_7 != 4) {
  return ((void*)0);
 }
 if (VAR_15[0] != (VAR_0 | VAR_2)) {
  FUNC_2 ("Unexpected rap cmd reply\n");
  return ((void*)0);
 }

 VAR_11 = FUNC_6 (VAR_15, 1);
 VAR_7 = 0;
 if (VAR_11 > VAR_3) {
  FUNC_2 ("Invalid length\n");
  return ((void*)0);
 }
 VAR_12 = (char *)FUNC_1 (1, VAR_11 + 1);
 if (VAR_12) {
  int VAR_16, VAR_17 = 0;
  do {
   VAR_16 = FUNC_9 (VAR_10, (ut8*)VAR_12 + VAR_17, VAR_11 - VAR_17);
   if (VAR_16 < 1) {
    break;
   }
   VAR_17 += VAR_16;
  } while (VAR_17 < VAR_11);

  VAR_12[VAR_11] = 0;
  if (VAR_4->cb_printf) {
   VAR_4->cb_printf ("%s", VAR_12);
  } else {
   if (FUNC_16 (1, VAR_12, VAR_11) != VAR_11) {
    FUNC_2 ("Failed to write\n");
   }
  }
  FUNC_3 (VAR_12);
 }






 return ((void*)0);
}
