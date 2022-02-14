
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_string ;
typedef char wchar_t ;
struct TYPE_3__ {char* cwd; size_t cwd_length; } ;
typedef TYPE_1__ cwd_state ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*,int ,char*) ;
 scalar_t__ FUNC_1 (char) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int,int) ;
 int VAR_7 ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*) ;
 int FUNC_13 (char const*,size_t) ;
 char* FUNC_14 (char const*) ;
 char* FUNC_15 (char*,int ,size_t*) ;
 int FUNC_16 (char*,int,char*,char*,char*,char const*) ;
 size_t FUNC_17 (char const*) ;
 scalar_t__ FUNC_18 (TYPE_1__*,char const*,int *,int ) ;
 int * FUNC_19 (char*,size_t,int ) ;

__attribute__((used)) static int FUNC_20(const char *VAR_8, const char *VAR_9, zend_string **VAR_10)
{





 char VAR_11[VAR_2];
 char *VAR_12;

 char VAR_13[VAR_2];
 cwd_state VAR_14;
 int VAR_15 = -1;

 int VAR_16 = VAR_3 | VAR_5 | VAR_4



  ;


 if (!VAR_8 || !VAR_8[0]) {
  return -1;
 }
 if (!FUNC_4(VAR_13, VAR_2)) {
  VAR_13[0] = '\0';
 }

 VAR_14.cwd = FUNC_9(VAR_13);
 VAR_14.cwd_length = FUNC_17(VAR_13);

 if (FUNC_18(&VAR_14, VAR_8, ((void*)0), VAR_0)) {
  FUNC_8(VAR_14.cwd);
  return -1;
 }


 if (FUNC_1(VAR_14.cwd[VAR_14.cwd_length - 1])) {
  VAR_12 = "";
 } else {
  VAR_12 = "/";
 }

 if (FUNC_16(VAR_11, VAR_2, "%s%s%sXXXXXX", VAR_14.cwd, VAR_12, VAR_9) >= VAR_2) {
  FUNC_8(VAR_14.cwd);
  return -1;
 }
 if (FUNC_12(VAR_11)) {
  VAR_15 = FUNC_5(VAR_11, VAR_16);
 }
 if (VAR_15 != -1 && VAR_10) {
  *VAR_10 = FUNC_19(VAR_11, FUNC_17(VAR_11), 0);
 }

 FUNC_8(VAR_14.cwd);
 return VAR_15;
}
