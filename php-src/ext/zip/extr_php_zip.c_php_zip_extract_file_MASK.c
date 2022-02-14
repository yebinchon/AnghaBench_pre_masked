
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_string ;
struct zip_stat {int dummy; } ;
struct zip_file {int dummy; } ;
struct zip {int dummy; } ;
typedef int php_stream_statbuf ;
typedef int php_stream ;
struct TYPE_3__ {char* cwd; scalar_t__ cwd_length; } ;
typedef TYPE_1__ cwd_state ;
typedef int b ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (char*) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,size_t) ;
 int * FUNC_7 (char*,size_t,int *,int ) ;
 size_t FUNC_8 (char*,size_t) ;
 int FUNC_9 (int *,int ,char*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,int,int,int *) ;
 int * FUNC_12 (char*,char*,int,int *) ;
 scalar_t__ FUNC_13 (char*,int ,int *,int *) ;
 int FUNC_14 (int *,char*,int) ;
 char* FUNC_15 (char*,scalar_t__) ;
 size_t FUNC_16 (char**,int ,char*,char*,...) ;
 size_t FUNC_17 (char*) ;
 int FUNC_18 (TYPE_1__*,char*,int *,int ) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (struct zip_file*) ;
 struct zip_file* FUNC_21 (struct zip*,char*,int ) ;
 int FUNC_22 (struct zip_file*,char*,int) ;
 scalar_t__ FUNC_23 (struct zip*,char*,int ,struct zip_stat*) ;

__attribute__((used)) static int FUNC_24(struct zip * VAR_6, char *VAR_7, char *VAR_8, size_t VAR_9)
{
 php_stream_statbuf VAR_10;
 struct zip_file *VAR_11;
 struct zip_stat VAR_12;
 char VAR_13[8192];
 int VAR_14, VAR_15;
 php_stream *VAR_16;
 char *VAR_17;
 char *VAR_18;
 char VAR_19[VAR_2];
 size_t VAR_20, VAR_21;
 int VAR_22 = 0;
 char *VAR_23;
 size_t VAR_24;
 cwd_state VAR_25;
 zend_string *VAR_26;

 VAR_25.cwd = FUNC_0(1);
 VAR_25.cwd[0] = '\0';
 VAR_25.cwd_length = 0;




 FUNC_18(&VAR_25, VAR_8, ((void*)0), VAR_0);
 VAR_23 = FUNC_15(VAR_25.cwd, VAR_25.cwd_length);
 if(!VAR_23) {
  return 0;
 }
 VAR_24 = FUNC_17(VAR_23);

 if (VAR_24 >= VAR_2 || FUNC_23(VAR_6, VAR_8, 0, &VAR_12) != 0) {
  return 0;
 }


 if (VAR_24 > 1 && FUNC_2(VAR_23[VAR_24 - 1])) {
  VAR_21 = FUNC_16(&VAR_18, 0, "%s/%s", VAR_7, VAR_23);
  VAR_22 = 1;
 } else {
  FUNC_6(VAR_19, VAR_23, VAR_24);
  VAR_20 = FUNC_8(VAR_19, VAR_24);

  if (!VAR_20 || (VAR_20 == 1 && VAR_19[0] == '.')) {
   VAR_21 = FUNC_16(&VAR_18, 0, "%s", VAR_7);
  } else {
   VAR_21 = FUNC_16(&VAR_18, 0, "%s/%s", VAR_7, VAR_19);
  }

  VAR_26 = FUNC_7(VAR_23, VAR_24, ((void*)0), 0);

  if (FUNC_3(VAR_18)) {
   FUNC_5(VAR_18);
   FUNC_19(VAR_26, 0);
   FUNC_1(VAR_25.cwd);
   return 0;
  }
 }


 if (FUNC_13(VAR_18, VAR_4, &VAR_10, ((void*)0)) < 0) {
  VAR_15 = FUNC_11(VAR_18, 0777, VAR_3|VAR_5, ((void*)0));
  if (!VAR_15) {
   FUNC_5(VAR_18);
   if (!VAR_22) {
    FUNC_19(VAR_26, 0);
    FUNC_1(VAR_25.cwd);
   }
   return 0;
  }
 }


 if (VAR_22) {
  FUNC_5(VAR_18);
  FUNC_1(VAR_25.cwd);
  return 1;
 }

 VAR_21 = FUNC_16(&VAR_17, 0, "%s/%s", VAR_18, FUNC_4(VAR_26));
 if (!VAR_21) {
  FUNC_5(VAR_18);
  FUNC_19(VAR_26, 0);
  FUNC_1(VAR_25.cwd);
  return 0;
 } else if (VAR_21 > VAR_2) {
  FUNC_9(((void*)0), VAR_1, "Full extraction path exceed MAXPATHLEN (%i)", VAR_2);
  FUNC_5(VAR_18);
  FUNC_19(VAR_26, 0);
  FUNC_1(VAR_25.cwd);
  return 0;
 }





 if (FUNC_3(VAR_17)) {
  FUNC_5(VAR_17);
  FUNC_5(VAR_18);
  FUNC_19(VAR_26, 0);
  FUNC_1(VAR_25.cwd);
  return 0;
 }

 VAR_11 = FUNC_21(VAR_6, VAR_8, 0);
 if (VAR_11 == ((void*)0)) {
  VAR_14 = -1;
  goto done;
 }

 VAR_16 = FUNC_12(VAR_17, "w+b", VAR_5, ((void*)0));

 if (VAR_16 == ((void*)0)) {
  VAR_14 = -1;
  FUNC_20(VAR_11);
  goto done;
 }

 VAR_14 = 0;

 while ((VAR_14=FUNC_22(VAR_11, VAR_13, sizeof(VAR_13))) > 0) {
  FUNC_14(VAR_16, VAR_13, VAR_14);
 }

 FUNC_10(VAR_16);
 VAR_14 = FUNC_20(VAR_11);

done:
 FUNC_5(VAR_17);
 FUNC_19(VAR_26, 0);
 FUNC_5(VAR_18);
 FUNC_1(VAR_25.cwd);

 if (VAR_14<0) {
  return 0;
 } else {
  return 1;
 }
}
