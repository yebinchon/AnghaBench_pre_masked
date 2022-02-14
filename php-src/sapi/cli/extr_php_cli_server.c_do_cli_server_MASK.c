
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int st_mode; } ;
typedef TYPE_1__ zend_stat_t ;
typedef int opt_struct ;
struct TYPE_5__ {scalar_t__ phpinfo_as_text; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (char*,int) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (char*,char*,size_t) ;
 scalar_t__ FUNC_6 (int *,char const*,char const*,char const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_7 ;
 int FUNC_9 (int ,char*,int ,char const*) ;
 int VAR_8 ;
 int FUNC_10 (int,char**,int const*,char**,int*,int ,int) ;
 scalar_t__ FUNC_11 (char const*,TYPE_1__*) ;
 TYPE_2__ VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (int ,int ) ;
 int VAR_11 ;
 size_t FUNC_13 (char*) ;
 int FUNC_14 () ;

int FUNC_15(int VAR_12, char **VAR_13)
{
 char *VAR_14 = ((void*)0);
 int VAR_15 = 1;
 int VAR_16;
 const char *VAR_17 = ((void*)0);
 extern const opt_struct VAR_18[];
 const char *VAR_19 = ((void*)0);




 const char *VAR_20 = ((void*)0);
 char VAR_21[VAR_1];

 while ((VAR_16 = FUNC_10(VAR_12, VAR_13, VAR_18, &VAR_14, &VAR_15, 0, 2))!=-1) {
  switch (VAR_16) {
   case 'S':
    VAR_17 = VAR_14;
    break;
   case 't':

    VAR_19 = VAR_14;
    break;
   case 'q':
    if (VAR_7 > 1) {
     VAR_7--;
    }
    break;
  }
 }

 if (VAR_19) {
  zend_stat_t VAR_22;

  if (FUNC_11(VAR_19, &VAR_22)) {
   FUNC_4(VAR_11, "Directory %s does not exist.\n", VAR_19);
   return 1;
  }
  if (!FUNC_0(VAR_22.st_mode)) {
   FUNC_4(VAR_11, "%s is not a directory.\n", VAR_19);
   return 1;
  }
  if (FUNC_3(VAR_19, VAR_21)) {
   VAR_19 = VAR_21;
  }
 } else {
  char *VAR_23 = ((void*)0);






  VAR_19 = VAR_23 ? VAR_21: ".";
 }

 if (VAR_12 > VAR_15) {
  VAR_20 = VAR_13[VAR_15];
 }

 if (VAR_0 == FUNC_6(&VAR_10, VAR_17, VAR_19, VAR_20)) {
  return 1;
 }
 VAR_9.phpinfo_as_text = 0;

 {
  FUNC_9(
   VAR_2,
   "PHP %s Development Server (http://%s) started",
   VAR_3, VAR_17);
 }
 FUNC_14();

 FUNC_7(&VAR_10);
 FUNC_8(&VAR_10);
 return 0;
}
