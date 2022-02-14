
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ pVtab; } ;
struct TYPE_17__ {int iLangid; TYPE_1__ base; } ;
struct TYPE_16__ {int bLookup; } ;
struct TYPE_15__ {int nIndex; TYPE_2__* aIndex; } ;
struct TYPE_14__ {int nPrefix; } ;
typedef TYPE_3__ Fts3Table ;
typedef TYPE_4__ Fts3MultiSegReader ;
typedef TYPE_5__ Fts3Cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,char const*,int,TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*,int ,int,int ,char const*,int,int,int ,TYPE_4__*) ;
 TYPE_4__* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(
  Fts3Cursor *VAR_3,
  const char *VAR_4,
  int VAR_5,
  int VAR_6,
  Fts3MultiSegReader **VAR_7
){
  Fts3MultiSegReader *VAR_8;
  int VAR_9 = VAR_1;

  VAR_8 = FUNC_2(sizeof(Fts3MultiSegReader));
  if( VAR_8 ){
    int VAR_10;
    int VAR_11 = 0;
    Fts3Table *VAR_12 = (Fts3Table *)VAR_3->base.pVtab;

    if( VAR_6 ){
      for(VAR_10=1; VAR_11==0 && VAR_10<VAR_12->nIndex; VAR_10++){
        if( VAR_12->aIndex[VAR_10].nPrefix==VAR_5 ){
          VAR_11 = 1;
          VAR_9 = FUNC_1(VAR_12, VAR_3->iLangid,
              VAR_10, VAR_0, VAR_4, VAR_5, 0, 0, VAR_8
          );
          VAR_8->bLookup = 1;
        }
      }

      for(VAR_10=1; VAR_11==0 && VAR_10<VAR_12->nIndex; VAR_10++){
        if( VAR_12->aIndex[VAR_10].nPrefix==VAR_5+1 ){
          VAR_11 = 1;
          VAR_9 = FUNC_1(VAR_12, VAR_3->iLangid,
              VAR_10, VAR_0, VAR_4, VAR_5, 1, 0, VAR_8
          );
          if( VAR_9==VAR_2 ){
            VAR_9 = FUNC_0(
                VAR_12, VAR_3->iLangid, VAR_4, VAR_5, VAR_8
            );
          }
        }
      }
    }

    if( VAR_11==0 ){
      VAR_9 = FUNC_1(VAR_12, VAR_3->iLangid,
          0, VAR_0, VAR_4, VAR_5, VAR_6, 0, VAR_8
      );
      VAR_8->bLookup = !VAR_6;
    }
  }

  *VAR_7 = VAR_8;
  return VAR_9;
}
