
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int HashTable ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,char*,int,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ) ;

int FUNC_5(char *VAR_1, size_t VAR_2, char *VAR_3, size_t VAR_4, HashTable *VAR_5, zval *VAR_6) {
 FUNC_1("eval", "variable=\"%.*s\"", "Printing variable %.*s", (int) VAR_2, VAR_1);
 FUNC_3("<eval %r>");
 FUNC_4(VAR_6, 0);
 FUNC_3("</eval>");
 FUNC_2("\n");

 FUNC_0(VAR_1);
 FUNC_0(VAR_3);

 return VAR_0;
}
