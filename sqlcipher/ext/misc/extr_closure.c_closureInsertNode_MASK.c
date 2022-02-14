
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sqlite3_int64 ;
typedef int closure_queue ;
struct TYPE_8__ {int pClosure; } ;
typedef TYPE_1__ closure_cursor ;
struct TYPE_9__ {int iGeneration; int id; } ;
typedef TYPE_2__ closure_avl ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(
  closure_queue *VAR_2,
  closure_cursor *VAR_3,
  sqlite3_int64 VAR_4,
  int VAR_5
){
  closure_avl *VAR_6 = FUNC_3( sizeof(*VAR_6) );
  if( VAR_6==0 ) return VAR_0;
  FUNC_1(VAR_6, 0, sizeof(*VAR_6));
  VAR_6->id = VAR_4;
  VAR_6->iGeneration = VAR_5;
  FUNC_0(&VAR_3->pClosure, VAR_6);
  FUNC_2(VAR_2, VAR_6);
  return VAR_1;
}
