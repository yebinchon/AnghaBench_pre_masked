
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_17__ ;


typedef scalar_t__ sqlite_int64 ;
struct TYPE_24__ {scalar_t__ iType; } ;
struct TYPE_22__ {TYPE_1__* pDoclist; } ;
struct TYPE_23__ {TYPE_17__* pOut; TYPE_2__ in; } ;
struct TYPE_21__ {scalar_t__ iType; } ;
struct TYPE_20__ {scalar_t__ iType; } ;
typedef TYPE_2__ DocListReader ;
typedef TYPE_3__ DocListMerge ;
typedef TYPE_4__ DocList ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_17__*,scalar_t__) ;
 int FUNC_2 (TYPE_17__*) ;
 int FUNC_3 (TYPE_17__*,int) ;
 int FUNC_4 (TYPE_3__*,scalar_t__,TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_12(DocListMerge *VAR_1, DocList *VAR_2){
  DocListReader VAR_3;
  FUNC_0( VAR_2->iType >= VAR_0 );
  FUNC_9(&VAR_3, VAR_2);
  while( !FUNC_8(&VAR_3) ){
    sqlite_int64 VAR_4 = FUNC_6(&VAR_3);
    if( VAR_1->in.pDoclist!=((void*)0) ){
      while( 1 ){
        if( FUNC_8(&VAR_1->in) ) return;
        if( FUNC_5(&VAR_1->in)>=VAR_4 ) break;
        FUNC_10(&VAR_1->in);
      }
      if( FUNC_5(&VAR_1->in)>VAR_4 ){
        FUNC_11(&VAR_3);
        continue;
      }
      FUNC_6(&VAR_1->in);
    }

    if( VAR_1->in.pDoclist==((void*)0) || VAR_1->in.pDoclist->iType < VAR_0 ){

      FUNC_1(VAR_1->pOut, VAR_4);
      if( VAR_1->pOut->iType >= VAR_0 ){

        while( 1 ){
          int VAR_5 = FUNC_7(&VAR_3);
          if( VAR_5==-1 ) break;
          FUNC_3(VAR_1->pOut, VAR_5);
        }
        FUNC_2(VAR_1->pOut);
      } else FUNC_11(&VAR_3);
      continue;
    }
    FUNC_4(VAR_1, VAR_4, &VAR_3);
  }
}
