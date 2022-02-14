
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nPage; } ;
typedef scalar_t__ Pgno ;
typedef TYPE_1__ IntegrityCk ;


 int FUNC_0 (TYPE_1__*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(IntegrityCk *VAR_0, Pgno VAR_1){
  if( VAR_1==0 ) return 1;
  if( VAR_1>VAR_0->nPage ){
    FUNC_0(VAR_0, "invalid page number %d", VAR_1);
    return 1;
  }
  if( FUNC_1(VAR_0, VAR_1) ){
    FUNC_0(VAR_0, "2nd reference to page %d", VAR_1);
    return 1;
  }
  FUNC_2(VAR_0, VAR_1);
  return 0;
}
