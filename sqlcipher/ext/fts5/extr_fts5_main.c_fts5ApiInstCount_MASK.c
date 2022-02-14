
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nInstCount; } ;
typedef TYPE_1__ Fts5Cursor ;
typedef int Fts5Context ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(Fts5Context *VAR_2, int *VAR_3){
  Fts5Cursor *VAR_4 = (Fts5Cursor*)VAR_2;
  int VAR_5 = VAR_1;
  if( FUNC_0(VAR_4, VAR_0)==0
   || VAR_1==(VAR_5 = FUNC_1(VAR_4)) ){
    *VAR_3 = VAR_4->nInstCount;
  }
  return VAR_5;
}
