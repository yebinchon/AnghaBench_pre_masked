
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
struct key_value_s {char* key; char* value; } ;
typedef char* PG ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (char*,int,char*,int,int,int ) ;
 int FUNC_3 (char*,int ,int *,int) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_7(struct key_value_s *VAR_6, int VAR_7)
{

 char *VAR_8 = VAR_6->key;
 char *VAR_9 = VAR_6->value;
 int VAR_10 = FUNC_6(VAR_8);
 int VAR_11 = FUNC_6(VAR_9);

 if (!FUNC_4(VAR_8, "extension") && *VAR_9) {
  zval VAR_12;
  FUNC_3(VAR_9, VAR_2, &VAR_12, 1);
  return FUNC_0(VAR_12) == VAR_1;
 }

 if (FUNC_2(VAR_8, VAR_10, VAR_9, VAR_11, VAR_7, VAR_3) == VAR_0) {
  return -1;
 }

 if (!FUNC_4(VAR_8, "disable_functions") && *VAR_9) {
  char *VAR_13 = FUNC_5(VAR_9);
  PG(VAR_14) = VAR_13;
  FUNC_1(VAR_13, VAR_5);
  return 1;
 }

 if (!FUNC_4(VAR_8, "disable_classes") && *VAR_9) {
  char *VAR_15 = FUNC_5(VAR_9);
  PG(VAR_16) = VAR_15;
  FUNC_1(VAR_15, VAR_4);
  return 1;
 }

 return 1;
}
