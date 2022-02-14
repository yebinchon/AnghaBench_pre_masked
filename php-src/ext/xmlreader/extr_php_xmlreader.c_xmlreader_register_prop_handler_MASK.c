
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_string ;
typedef int xmlreader_read_int_t ;
typedef int xmlreader_read_const_char_t ;
struct TYPE_3__ {int type; int read_int_func; int read_char_func; } ;
typedef TYPE_1__ xmlreader_prop_handler ;
typedef int HashTable ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *,TYPE_1__*,int) ;
 int * FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(HashTable *VAR_0, char *VAR_1, xmlreader_read_int_t VAR_2, xmlreader_read_const_char_t VAR_3, int VAR_4)
{
 xmlreader_prop_handler VAR_5;
 zend_string *VAR_6;

 VAR_5.read_char_func = VAR_3;
 VAR_5.read_int_func = VAR_2;
 VAR_5.type = VAR_4;
 VAR_6 = FUNC_2(VAR_1, FUNC_0(VAR_1), 1);
 FUNC_1(VAR_0, VAR_6, &VAR_5, sizeof(xmlreader_prop_handler));
 FUNC_3(VAR_6, 1);
}
