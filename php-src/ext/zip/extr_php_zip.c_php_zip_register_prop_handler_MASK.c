
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int zip_read_int_t ;
typedef int zip_read_const_char_t ;
typedef int zip_read_const_char_from_ze_t ;
struct TYPE_3__ {int type; int read_const_char_from_obj_func; int read_int_func; int read_const_char_func; } ;
typedef TYPE_1__ zip_prop_handler ;
typedef int zend_string ;
typedef int HashTable ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *,int *,int ,int *) ;
 int FUNC_3 (int *,int *,TYPE_1__*,int) ;
 int * FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int *,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(HashTable *VAR_2, char *VAR_3, zip_read_int_t VAR_4, zip_read_const_char_t VAR_5, zip_read_const_char_from_ze_t VAR_6, int VAR_7)
{
 zip_prop_handler VAR_8;
 zend_string *VAR_9;
 zval VAR_10;

 VAR_8.read_const_char_func = VAR_5;
 VAR_8.read_int_func = VAR_4;
 VAR_8.read_const_char_from_obj_func = VAR_6;
 VAR_8.type = VAR_7;
 VAR_9 = FUNC_4(VAR_3, FUNC_1(VAR_3), 1);
 FUNC_3(VAR_2, VAR_9, &VAR_8, sizeof(zip_prop_handler));


 FUNC_0(&VAR_10);
 FUNC_2(VAR_1, VAR_9, &VAR_10, VAR_0, ((void*)0));
 FUNC_5(VAR_9, 1);
}
