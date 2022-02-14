
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
struct key_value_s {struct key_value_s* next; struct key_value_s* key; void* value; } ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (void**) ;
 char* FUNC_2 (int *,void**,int ) ;
 int FUNC_3 (struct key_value_s*) ;
 struct key_value_s* FUNC_4 (int) ;
 int FUNC_5 (struct key_value_s*,int ,int) ;
 void* FUNC_6 (char*) ;

__attribute__((used)) static char *FUNC_7(zval *VAR_0, zval *VAR_1, void **VAR_2, int VAR_3)
{
 struct key_value_s *VAR_4;
 struct key_value_s ***VAR_5 = (struct key_value_s ***) VAR_2;
 int VAR_6;
 void *VAR_7 = &VAR_6;

 VAR_4 = FUNC_4(sizeof(*VAR_4));

 if (!VAR_4) {
  return "malloc() failed";
 }

 FUNC_5(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->key = FUNC_6(FUNC_0(VAR_0));

 if (!VAR_4->key) {
  FUNC_3(VAR_4);
  return "fpm_conf_set_array: strdup(key) failed";
 }

 if (VAR_3) {
  char *VAR_8 = FUNC_2(VAR_1, &VAR_7, 0);
  if (VAR_8) {
   FUNC_3(VAR_4->key);
   FUNC_3(VAR_4);
   return VAR_8;
  }
  VAR_4->value = FUNC_6(VAR_6 ? "1" : "0");
 } else {
  VAR_4->value = FUNC_6(FUNC_0(VAR_1));
  if (FUNC_1(&VAR_4->value) == -1) {
   FUNC_3(VAR_4->key);
   FUNC_3(VAR_4);
   return "Can't use '$pool' when the pool is not defined";
  }
 }

 if (!VAR_4->value) {
  FUNC_3(VAR_4->key);
  FUNC_3(VAR_4);
  return "fpm_conf_set_array: strdup(value) failed";
 }

 VAR_4->next = **VAR_5;
 **VAR_5 = VAR_4;
 return ((void*)0);
}
