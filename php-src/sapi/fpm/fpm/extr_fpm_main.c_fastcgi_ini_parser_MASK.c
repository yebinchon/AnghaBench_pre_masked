
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
struct key_value_s {char* key; char* value; int * next; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (struct key_value_s*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static void FUNC_4(zval *VAR_2, zval *VAR_3, zval *VAR_4, int VAR_5, void *VAR_6)
{
 int *VAR_7 = (int *)VAR_6;
 char *VAR_8;
 char *VAR_9 = ((void*)0);
 struct key_value_s VAR_10;

 if (!VAR_7 || !VAR_2) return;

 if (VAR_5 != VAR_0) {
  FUNC_3(VAR_1, "Passing INI directive through FastCGI: only classic entries are allowed");
  return;
 }

 VAR_8 = FUNC_0(VAR_2);

 if (!VAR_8 || FUNC_2(VAR_8) < 1) {
  FUNC_3(VAR_1, "Passing INI directive through FastCGI: empty key");
  return;
 }

 if (VAR_3) {
  VAR_9 = FUNC_0(VAR_3);
 }

 if (!VAR_9) {
  FUNC_3(VAR_1, "Passing INI directive through FastCGI: empty value for key '%s'", VAR_8);
  return;
 }

 VAR_10.key = VAR_8;
 VAR_10.value = VAR_9;
 VAR_10.next = ((void*)0);
 if (FUNC_1(&VAR_10, *VAR_7) == -1) {
  FUNC_3(VAR_1, "Passing INI directive through FastCGI: unable to set '%s'", VAR_8);
 }
}
