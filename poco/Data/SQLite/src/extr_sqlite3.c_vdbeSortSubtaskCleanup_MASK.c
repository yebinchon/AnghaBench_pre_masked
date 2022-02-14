
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_8__ {scalar_t__ pFd; } ;
struct TYPE_7__ {scalar_t__ pFd; } ;
struct TYPE_9__ {scalar_t__ aMemory; int pList; } ;
struct TYPE_10__ {TYPE_2__ file2; TYPE_1__ file; TYPE_3__ list; int pUnpacked; } ;
typedef TYPE_4__ SortSubtask ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(sqlite3 *VAR_0, SortSubtask *VAR_1){
  FUNC_2(VAR_0, VAR_1->pUnpacked);







  {
    FUNC_0( VAR_1->list.aMemory==0 );
    FUNC_5(0, VAR_1->list.pList);
  }
  if( VAR_1->file.pFd ){
    FUNC_3(VAR_1->file.pFd);
  }
  if( VAR_1->file2.pFd ){
    FUNC_3(VAR_1->file2.pFd);
  }
  FUNC_1(VAR_1, 0, sizeof(SortSubtask));
}
