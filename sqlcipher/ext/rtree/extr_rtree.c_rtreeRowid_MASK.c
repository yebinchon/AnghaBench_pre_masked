
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite_int64 ;
typedef int sqlite3_vtab_cursor ;
struct TYPE_3__ {int iCell; } ;
typedef TYPE_1__ RtreeSearchPoint ;
typedef int RtreeNode ;
typedef int RtreeCursor ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int ) ;
 int * FUNC_2 (int *,int*) ;
 TYPE_1__* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(sqlite3_vtab_cursor *VAR_1, sqlite_int64 *VAR_2){
  RtreeCursor *VAR_3 = (RtreeCursor *)VAR_1;
  RtreeSearchPoint *VAR_4 = FUNC_3(VAR_3);
  int VAR_5 = VAR_0;
  RtreeNode *VAR_6 = FUNC_2(VAR_3, &VAR_5);
  if( VAR_5==VAR_0 && VAR_4 ){
    *VAR_2 = FUNC_1(FUNC_0(VAR_3), VAR_6, VAR_4->iCell);
  }
  return VAR_5;
}
