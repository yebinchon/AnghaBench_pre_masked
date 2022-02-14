
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct groupConcat {size_t nUsed; scalar_t__* z; } ;
typedef int sqlite3_context ;


 struct groupConcat* FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,scalar_t__*,size_t,int ) ;

__attribute__((used)) static void FUNC_2(sqlite3_context *VAR_1){
  struct groupConcat *VAR_2;
  VAR_2 = FUNC_0(VAR_1, 0);
  if( VAR_2 && VAR_2->z ){
    VAR_2->z[VAR_2->nUsed] = 0;
    FUNC_1(VAR_1, VAR_2->z, VAR_2->nUsed, VAR_0);
  }
}
