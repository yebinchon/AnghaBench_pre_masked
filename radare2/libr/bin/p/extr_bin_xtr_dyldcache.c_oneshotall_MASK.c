
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_11__ {int file; } ;
struct TYPE_10__ {int file_count; } ;
typedef int RList ;
typedef TYPE_1__ RBinXtrData ;
typedef TYPE_2__ RBin ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int const*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int * FUNC_4 (int (*) (TYPE_1__*)) ;

__attribute__((used)) static RList * FUNC_5(RBin *VAR_0, const ut8* VAR_1, ut64 VAR_2) {
 RBinXtrData *VAR_3 = ((void*)0);
 RList *VAR_4 = ((void*)0);
 int VAR_5, VAR_6 = 0;
 if (!VAR_0->file) {
  if (!FUNC_0 (VAR_0)) {
   return ((void*)0);
  }
 }
 VAR_3 = FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_6);
 if (!VAR_3) {
  return VAR_4;
 }

 VAR_5 = VAR_3->file_count;
 VAR_4 = FUNC_4 (FUNC_2);
 if (!VAR_4) {
  FUNC_2 (VAR_3);
  return ((void*)0);
 }
 FUNC_3 (VAR_4, VAR_3);
 for (VAR_6 = 1; VAR_3 && VAR_6 < VAR_5; VAR_6++) {
  VAR_3 = FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_6);
  FUNC_3 (VAR_4, VAR_3);
 }
 return VAR_4;
}
