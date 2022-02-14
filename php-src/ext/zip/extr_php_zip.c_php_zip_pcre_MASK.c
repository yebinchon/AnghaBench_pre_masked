
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_3__ {int st_mode; } ;
typedef TYPE_1__ zend_stat_t ;
typedef int uint32_t ;
typedef int pcre2_match_data ;
typedef int pcre2_match_context ;
typedef int pcre2_code ;
typedef int PCRE2_SPTR ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (char) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (char*) ;
 size_t FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **) ;
 int FUNC_10 (int *,int ,size_t,int ,int ,int *,int *) ;
 int * FUNC_11 (int *,int*) ;
 int FUNC_12 (int *,int ,char*,...) ;
 int * FUNC_13 (int,int *) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 () ;
 scalar_t__ VAR_5 ;
 int FUNC_16 (char*,int ***,int *,void*) ;
 int FUNC_17 (char*,int,char*,char*,char*,char*) ;
 int FUNC_18 (int *,int ) ;

int FUNC_19(zend_string *VAR_6, char *VAR_7, int VAR_8, zval *VAR_9)
{





 int VAR_10;
 zend_string **VAR_11;
 pcre2_match_context *VAR_12 = FUNC_15();
 if (FUNC_4(VAR_7)) {
  return -1;
 }

 VAR_10 = FUNC_16(VAR_7, &VAR_11, ((void*)0), (void *) VAR_5);

 if (VAR_10 > 0) {
  pcre2_code *VAR_13 = ((void*)0);
  pcre2_match_data *VAR_14 = ((void*)0);
  uint32_t VAR_15, VAR_16;
  int VAR_17;

  VAR_13 = FUNC_11(VAR_6, &VAR_16);
  if (!VAR_13) {
   FUNC_12(((void*)0), VAR_1, "Invalid expression");
   return -1;
  }

  FUNC_8(VAR_9);


  for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
   zend_stat_t VAR_18;
   char VAR_19[VAR_2];
   size_t VAR_20 = FUNC_5(VAR_11[VAR_15]);

   if ((VAR_20 == 1 && FUNC_6(VAR_11[VAR_15])[0] == '.') ||
    (VAR_20 == 2 && FUNC_6(VAR_11[VAR_15])[0] == '.' && FUNC_6(VAR_11[VAR_15])[1] == '.')) {
    FUNC_18(VAR_11[VAR_15], 0);
    continue;
   }

   if ((VAR_8 + VAR_20 + 1) >= VAR_2) {
    FUNC_12(((void*)0), VAR_1, "add_path string too long (max: %u, %zu given)",
      VAR_2 - 1, (VAR_8 + VAR_20 + 1));
    FUNC_18(VAR_11[VAR_15], 0);
    break;
   }

   VAR_14 = FUNC_13(VAR_16, VAR_13);
   if (!VAR_14) {

    FUNC_18(VAR_11[VAR_15], 0);
    continue;
   }
   VAR_17 = FUNC_10(VAR_13, (PCRE2_SPTR)FUNC_6(VAR_11[VAR_15]), FUNC_5(VAR_11[VAR_15]), 0, 0, VAR_14, VAR_12);
   FUNC_14(VAR_14);

   if (VAR_17 < 0) {
    FUNC_18(VAR_11[VAR_15], 0);
    continue;
   }

   FUNC_17(VAR_19, VAR_2, "%s%c%s", VAR_7, VAR_0, FUNC_6(VAR_11[VAR_15]));

   if (0 != FUNC_3(VAR_19, &VAR_18)) {
    FUNC_12(((void*)0), VAR_1, "Cannot read <%s>", VAR_19);
    FUNC_18(VAR_11[VAR_15], 0);
    continue;
   }

   if (VAR_3 == (VAR_18.st_mode & VAR_4)) {
    FUNC_18(VAR_11[VAR_15], 0);
    continue;
   }

   FUNC_7(VAR_9, VAR_19);
   FUNC_18(VAR_11[VAR_15], 0);
  }
  FUNC_9(VAR_11);
 }
 return VAR_10;
}
