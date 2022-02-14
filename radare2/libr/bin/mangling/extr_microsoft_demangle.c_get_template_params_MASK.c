
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int amount_of_read_chars; int buff_for_parsing; } ;
typedef TYPE_1__ SStateInfo ;
typedef int EDemanglerErr ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 char* FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

int FUNC_6(char *VAR_3, unsigned int *VAR_4, char **VAR_5) {
 EDemanglerErr VAR_6 = VAR_0;
 SStateInfo VAR_7;
 FUNC_3 (&VAR_7, VAR_3);
 const char VAR_8[] = "template-parameter-";
 char *VAR_9, *VAR_10 = ((void*)0);
 if (!FUNC_5 (VAR_3, "?", 1)) {

  VAR_7.amount_of_read_chars += 1;
  VAR_7.buff_for_parsing += 1;
  VAR_10 = FUNC_2 (&VAR_7);
  if (VAR_10) {
   VAR_9 = FUNC_4("%s%s", VAR_8, VAR_10);
   FUNC_1 (VAR_10);
   VAR_10 = VAR_9;
  }
 } else {
  if (FUNC_5 (VAR_3, "$", 1)) {
   VAR_6 = VAR_1;
   goto get_template_params_err;
  }
  VAR_3++;
  VAR_7.amount_of_read_chars += 2;
  VAR_7.buff_for_parsing += 2;
  if (!FUNC_5 (VAR_3, "0", 1)) {

   VAR_9 = FUNC_2 (&VAR_7);
   if (VAR_9) {
    int VAR_11 = FUNC_0 (VAR_9);
    VAR_10 = FUNC_4 ("%d", VAR_11);
    FUNC_1 (VAR_9);
   }
  } else if (!FUNC_5 (VAR_3, "2", 1)) {

   char *VAR_12 = FUNC_2 (&VAR_7);
   char *VAR_13 = FUNC_2 (&VAR_7);
   if (VAR_12 && VAR_13) {
    int VAR_14 = FUNC_0 (VAR_13);
    VAR_10 = FUNC_4 ("%sE%d", VAR_12, VAR_14);
   }
   FUNC_1 (VAR_12);
   FUNC_1 (VAR_13);
  } else if (!FUNC_5 (VAR_3, "D", 1)) {

   VAR_10 = FUNC_2 (&VAR_7);
   if (VAR_10) {
    VAR_9 = FUNC_4("%s%s", VAR_8, VAR_10);
    FUNC_1 (VAR_10);
    VAR_10 = VAR_9;
   }
  } else if (!FUNC_5 (VAR_3, "F", 1)) {

   char *VAR_15 = FUNC_2 (&VAR_7);
   char *VAR_16 = FUNC_2 (&VAR_7);
   if (VAR_15 && VAR_16) {
    int VAR_17 = FUNC_0 (VAR_15);
    int VAR_18 = FUNC_0 (VAR_16);
    VAR_10 = FUNC_4 ("{%d, %d}", VAR_17, VAR_18);
   }
   FUNC_1 (VAR_15);
   FUNC_1 (VAR_16);
  } else if (!FUNC_5 (VAR_3, "G", 1)) {

   char *VAR_19 = FUNC_2 (&VAR_7);
   char *VAR_20 = FUNC_2 (&VAR_7);
   char *VAR_21 = FUNC_2 (&VAR_7);
   if (VAR_19 && VAR_20 && VAR_21) {
    int VAR_22 = FUNC_0 (VAR_19);
    int VAR_23 = FUNC_0 (VAR_20);
    int VAR_24 = FUNC_0 (VAR_21);
    VAR_10 = FUNC_4 ("{%d, %d, %d}", VAR_22, VAR_23, VAR_24);
   }
   FUNC_1 (VAR_19);
   FUNC_1 (VAR_20);
   FUNC_1 (VAR_21);
  } else if (!FUNC_5 (VAR_3, "H", 1)) {

   VAR_10 = FUNC_2 (&VAR_7);
  } else if (!FUNC_5 (VAR_3, "I", 1)) {

   char *VAR_25 = FUNC_2 (&VAR_7);
   char *VAR_26 = FUNC_2 (&VAR_7);
   if (VAR_25 && VAR_26) {
    VAR_10 = FUNC_4 ("{%s, %s}", VAR_25, VAR_26);
   }
   FUNC_1 (VAR_25);
   FUNC_1 (VAR_26);
  } else if (!FUNC_5 (VAR_3, "J", 1)) {

   char *VAR_27 = FUNC_2 (&VAR_7);
   char *VAR_28 = FUNC_2 (&VAR_7);
   char *VAR_29 = FUNC_2 (&VAR_7);
   if (VAR_27 && VAR_28 && VAR_29) {
    VAR_10 = FUNC_4 ("{%s, %s, %s}", VAR_27, VAR_28, VAR_29);
   }
   FUNC_1 (VAR_27);
   FUNC_1 (VAR_28);
   FUNC_1 (VAR_29);
  } else if (!FUNC_5 (VAR_3, "Q", 1)) {

   VAR_10 = FUNC_2 (&VAR_7);
   if (VAR_10) {
    VAR_9 = FUNC_4("non-type-%s%s", VAR_8, VAR_10);
    FUNC_1 (VAR_10);
    VAR_10 = VAR_9;
   }
  }
 }

 if (!VAR_10) {
  VAR_6 = VAR_2;
  goto get_template_params_err;
 }

 *VAR_5 = VAR_10;
 *VAR_4 = VAR_7.amount_of_read_chars;

get_template_params_err:
 return VAR_6;
}
