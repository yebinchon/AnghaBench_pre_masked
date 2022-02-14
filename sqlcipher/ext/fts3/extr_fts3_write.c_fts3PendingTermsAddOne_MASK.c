
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int nPendingData; int iPrevDocid; } ;
struct TYPE_8__ {scalar_t__ nData; } ;
typedef TYPE_1__ PendingList ;
typedef TYPE_2__ Fts3Table ;
typedef int Fts3HashElem ;
typedef int Fts3Hash ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,char const*,int) ;
 TYPE_1__* FUNC_2 (int *,char const*,int,TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__**,int ,int,int,int*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(
  Fts3Table *VAR_2,
  int VAR_3,
  int VAR_4,
  Fts3Hash *VAR_5,
  const char *VAR_6,
  int VAR_7
){
  PendingList *VAR_8;
  int VAR_9 = VAR_1;

  VAR_8 = (PendingList *)FUNC_1(VAR_5, VAR_6, VAR_7);
  if( VAR_8 ){
    VAR_2->nPendingData -= (VAR_8->nData + VAR_7 + sizeof(Fts3HashElem));
  }
  if( FUNC_3(&VAR_8, VAR_2->iPrevDocid, VAR_3, VAR_4, &VAR_9) ){
    if( VAR_8==FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8) ){



      FUNC_0( 0==FUNC_1(VAR_5, VAR_6, VAR_7) );
      FUNC_4(VAR_8);
      VAR_9 = VAR_0;
    }
  }
  if( VAR_9==VAR_1 ){
    VAR_2->nPendingData += (VAR_8->nData + VAR_7 + sizeof(Fts3HashElem));
  }
  return VAR_9;
}
