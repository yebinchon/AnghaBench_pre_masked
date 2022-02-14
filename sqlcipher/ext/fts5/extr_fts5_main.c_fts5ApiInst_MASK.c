
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pVtab; } ;
struct TYPE_6__ {int nInstCount; int* aInst; TYPE_1__ base; } ;
typedef int Fts5Table ;
typedef TYPE_2__ Fts5Cursor ;
typedef int Fts5Context ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(
  Fts5Context *VAR_3,
  int VAR_4,
  int *VAR_5,
  int *VAR_6,
  int *VAR_7
){
  Fts5Cursor *VAR_8 = (Fts5Cursor*)VAR_3;
  int VAR_9 = VAR_1;
  if( FUNC_0(VAR_8, VAR_0)==0
   || VAR_1==(VAR_9 = FUNC_1(VAR_8))
  ){
    if( VAR_4<0 || VAR_4>=VAR_8->nInstCount ){
      VAR_9 = VAR_2;






    }else{
      *VAR_5 = VAR_8->aInst[VAR_4*3];
      *VAR_6 = VAR_8->aInst[VAR_4*3 + 1];
      *VAR_7 = VAR_8->aInst[VAR_4*3 + 2];
    }
  }
  return VAR_9;
}
