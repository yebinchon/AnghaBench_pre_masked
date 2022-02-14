
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int file_count; } ;
typedef int RList ;
typedef TYPE_1__ RBinXtrData ;
typedef int RBin ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int * FUNC_3 (int (*) (TYPE_1__*)) ;

__attribute__((used)) static RList * FUNC_4(RBin *VAR_0) {
 RList *VAR_1 = ((void*)0);
 int VAR_2, VAR_3 = 0;
 RBinXtrData *VAR_4 = FUNC_0 (VAR_0, VAR_3);
 if (!VAR_4) {
  return VAR_1;
 }

 VAR_2 = VAR_4->file_count;
 VAR_1 = FUNC_3 (FUNC_1);
 if (!VAR_1) {
  FUNC_1 (VAR_4);
  return ((void*)0);
 }
 FUNC_2 (VAR_1, VAR_4);
 for (VAR_3 = 1; VAR_4 && VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = FUNC_0 (VAR_0, VAR_3);
  FUNC_2 (VAR_1, VAR_4);
 }
 return VAR_1;
}
