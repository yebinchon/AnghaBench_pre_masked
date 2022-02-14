
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; int key; } ;
typedef TYPE_1__ DsoJsonDictEntry ;


 char* FUNC_0 (int,int) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,char*,...) ;
 int FUNC_4 (char*) ;

char * FUNC_5 (DsoJsonDictEntry * VAR_0) {
 char *VAR_1 = ((void*)0);
 if (VAR_0) {
  char *VAR_2 = FUNC_1 (VAR_0->key);
  char *VAR_3 = FUNC_1 (VAR_0->value);
  if (VAR_2) {
   int VAR_4 = 2 + 3 + FUNC_4 (VAR_2);
   if (VAR_3) VAR_4 += FUNC_4 (VAR_3);
   VAR_1 = FUNC_0 (VAR_4, 1);
   if (VAR_1) {
    if (VAR_3) {
     FUNC_3 (VAR_1, VAR_4, "%s:%s", VAR_2, VAR_3);
    } else {
     FUNC_3 (VAR_1, VAR_4, "%s:\"\"", VAR_2);
    }
   }
   FUNC_2 (VAR_2);
  }
  FUNC_2 (VAR_3);
 }
 return VAR_1;
}
