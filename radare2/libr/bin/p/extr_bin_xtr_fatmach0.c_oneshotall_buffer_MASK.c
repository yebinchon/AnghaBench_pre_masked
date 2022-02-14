
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int file_count; } ;
typedef int RList ;
typedef int RBuffer ;
typedef TYPE_1__ RBinXtrData ;
typedef int RBin ;


 TYPE_1__* FUNC_0 (int *,int *,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int * FUNC_3 (int (*) (TYPE_1__*)) ;

__attribute__((used)) static RList * FUNC_4(RBin *VAR_0, RBuffer *VAR_1) {
 RBinXtrData *VAR_2 = FUNC_0 (VAR_0, VAR_1, 0);
 if (VAR_2) {

  int VAR_3 = VAR_2->file_count;
  RList *VAR_4 = FUNC_3 (FUNC_1);
  if (!VAR_4) {
   FUNC_1 (VAR_2);
   return ((void*)0);
  }
  FUNC_2 (VAR_4, VAR_2);
  int VAR_5 = 0;
  for (VAR_5 = 1; VAR_2 && VAR_5 < VAR_3; VAR_5++) {
   VAR_2 = FUNC_0 (VAR_0, VAR_1, VAR_5);
   FUNC_2 (VAR_4, VAR_2);
  }
  return VAR_4;
 }
 return ((void*)0);
}
