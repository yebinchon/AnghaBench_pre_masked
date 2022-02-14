
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * key; } ;
typedef int DsoJsonObj ;
typedef TYPE_1__ DsoJsonDictEntry ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*) ;

int FUNC_3 (DsoJsonObj * VAR_0, char *VAR_1) {
 int VAR_2 = 0;
 if (FUNC_0 (VAR_0)) {
  DsoJsonDictEntry *VAR_3 = (DsoJsonDictEntry *)VAR_0;
  DsoJsonObj *VAR_4 = FUNC_2 (VAR_1);
  if (VAR_3->key) {
   FUNC_1 (VAR_3->key);
  }
  VAR_3->key = VAR_4;
  VAR_2 = 1;
 }
 return VAR_2;
}
