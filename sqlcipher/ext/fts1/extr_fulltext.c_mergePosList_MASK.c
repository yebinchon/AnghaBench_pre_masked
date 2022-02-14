
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite_int64 ;
struct TYPE_7__ {scalar_t__ iType; } ;
struct TYPE_6__ {int iOffset; TYPE_3__* pOut; int in; } ;
typedef int DocListReader ;
typedef TYPE_1__ DocListMerge ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(DocListMerge *VAR_1, sqlite_int64 VAR_2,
                  DocListReader *VAR_3){
  int VAR_4 = FUNC_3(VAR_3);
  int VAR_5 = FUNC_3(&VAR_1->in);
  int VAR_6 = 0;
  while( VAR_4!=-1 || VAR_5!=-1 ){
    if( VAR_4-VAR_1->iOffset==VAR_5 ){
      if( !VAR_6 ){
        FUNC_0(VAR_1->pOut, VAR_2);
        VAR_6 = 1;
      }
      if( VAR_1->pOut->iType >= VAR_0 ){
        FUNC_2(VAR_1->pOut, VAR_5);
      }
      VAR_4 = FUNC_3(VAR_3);
      VAR_5 = FUNC_3(&VAR_1->in);
    } else if( VAR_5==-1 || (VAR_4!=-1 && VAR_4-VAR_1->iOffset<VAR_5) ){
      VAR_4 = FUNC_3(VAR_3);
    } else {
      VAR_5 = FUNC_3(&VAR_1->in);
    }
  }
  if( VAR_1->pOut->iType >= VAR_0 && VAR_6 ){
    FUNC_1(VAR_1->pOut);
  }
}
