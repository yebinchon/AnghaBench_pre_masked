
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ReusableSpace {void* pSpace; size_t nFree; int nNeeded; } ;
typedef size_t sqlite3_int64 ;


 int FUNC_0 (void*) ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void *FUNC_3(
  struct ReusableSpace *VAR_0,
  void *VAR_1,
  sqlite3_int64 VAR_2
){
  FUNC_2( FUNC_0(VAR_0->pSpace) );
  if( VAR_1==0 ){
    VAR_2 = FUNC_1(VAR_2);
    if( VAR_2 <= VAR_0->nFree ){
      VAR_0->nFree -= VAR_2;
      VAR_1 = &VAR_0->pSpace[VAR_0->nFree];
    }else{
      VAR_0->nNeeded += VAR_2;
    }
  }
  FUNC_2( FUNC_0(VAR_1) );
  return VAR_1;
}
