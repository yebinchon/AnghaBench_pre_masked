
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_ini_parser_cb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*,int*) ;
 int FUNC_2 (char**,int *,int *,int ) ;
 int FUNC_3 (char*) ;
 char* VAR_6 ;
 char* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int,char*,int) ;
 scalar_t__ FUNC_6 (char*,int) ;
 int FUNC_7 (char*,int,int ,int ,int*) ;
 int FUNC_8 (int ,char*,...) ;

int FUNC_9(char *VAR_10)
{
 int VAR_11 = 0;
 char *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 int VAR_14 = 0;
 int VAR_15, VAR_16;
 int VAR_17 = 1;
 char VAR_18 = '*';

 int VAR_19 = 1;

 if (!VAR_10 || !VAR_10[0]) {
  FUNC_8(VAR_3, "configuration filename is empty");
  return -1;
 }

 VAR_15 = FUNC_4(VAR_10, VAR_1, 0);
 if (VAR_15 < 0) {
  FUNC_8(VAR_4, "failed to open configuration file '%s'", VAR_10);
  return -1;
 }

 if (VAR_9++ > 4) {
  FUNC_8(VAR_3, "failed to include more than 5 files recusively");
  FUNC_0(VAR_15);
  return -1;
 }

 VAR_8 = 0;
 while (VAR_17 > 0) {
  int VAR_20;
  VAR_8++;
  VAR_6 = VAR_10;
  for (VAR_16 = 0; (VAR_17 = FUNC_5(VAR_15, &VAR_18, sizeof(char))) == sizeof(char) && VAR_18 != '\n'; VAR_16++) {
   if (VAR_16 == VAR_14) {
    VAR_14 += 1024;
    VAR_13 = (char*) FUNC_6(VAR_12, sizeof(char) * (VAR_14 + 2));
    if (VAR_13 == ((void*)0)) {
     VAR_9--;
     FUNC_0(VAR_15);
     FUNC_3(VAR_12);
     return -1;
    }
    VAR_12 = VAR_13;
   }

   VAR_12[VAR_16] = VAR_18;
  }
  if (VAR_16 == 0) {
   continue;
  }

  VAR_12[VAR_16++] = '\n';
  VAR_12[VAR_16] = '\0';
  VAR_20 = FUNC_7(VAR_12, 1, VAR_2, (zend_ini_parser_cb_t)VAR_5, &VAR_11);
  VAR_6 = VAR_10;
  if (VAR_11 || VAR_20 == VAR_0) {
   if (VAR_7) FUNC_3(VAR_7);
   VAR_9--;
   FUNC_0(VAR_15);
   FUNC_3(VAR_12);
   return -1;
  }
  if (VAR_7) {
   char *VAR_21 = VAR_7;
   VAR_7 = ((void*)0);
   FUNC_2(&VAR_21, ((void*)0), ((void*)0), 0);
   FUNC_1(VAR_21, &VAR_11);
   if (VAR_11) {
    FUNC_3(VAR_21);
    VAR_9--;
    FUNC_0(VAR_15);
    FUNC_3(VAR_12);
    return -1;
   }
   FUNC_3(VAR_21);
  }
 }
 FUNC_3(VAR_12);

 VAR_9--;
 FUNC_0(VAR_15);
 return VAR_19;
}
