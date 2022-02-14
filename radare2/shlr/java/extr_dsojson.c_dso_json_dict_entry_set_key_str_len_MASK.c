
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
 int * FUNC_2 (char*,unsigned int) ;

int FUNC_3 (DsoJsonObj * VAR_0, char *VAR_1, unsigned int VAR_2) {
 int VAR_3 = 0;
 if (FUNC_0 (VAR_0)) {
  DsoJsonDictEntry *VAR_4 = (DsoJsonDictEntry *)VAR_0;
  DsoJsonObj *VAR_5 = FUNC_2 (VAR_1, VAR_2);
  if (VAR_4->key) {
   FUNC_1 (VAR_4->key);
  }
  VAR_4->key = VAR_5;
  VAR_3 = 1;
 }
 return VAR_3;
}
