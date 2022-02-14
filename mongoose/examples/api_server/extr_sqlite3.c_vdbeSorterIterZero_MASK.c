
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_4__ {int aBuffer; int aAlloc; } ;
typedef TYPE_1__ VdbeSorterIter ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(sqlite3 *VAR_0, VdbeSorterIter *VAR_1){
  FUNC_1(VAR_0, VAR_1->aAlloc);
  FUNC_1(VAR_0, VAR_1->aBuffer);
  FUNC_0(VAR_1, 0, sizeof(VdbeSorterIter));
}
