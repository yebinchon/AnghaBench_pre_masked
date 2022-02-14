
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_context ;
struct TYPE_14__ {int n; int p; } ;
struct TYPE_11__ {scalar_t__ pVtab; } ;
struct TYPE_13__ {int pExpr; TYPE_2__ base; } ;
struct TYPE_12__ {TYPE_1__* pConfig; } ;
struct TYPE_10__ {int eDetail; } ;
typedef TYPE_3__ Fts5Table ;
typedef TYPE_4__ Fts5Cursor ;
typedef TYPE_5__ Fts5Buffer ;




 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int ,int) ;
 int FUNC_1 (int*,TYPE_5__*,int,int const*) ;
 int FUNC_2 (int*,TYPE_5__*,int) ;
 int FUNC_3 (int ,int,int const**,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int const**) ;
 int VAR_1 ;
 int FUNC_6 (int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(sqlite3_context *VAR_2, Fts5Cursor *VAR_3){
  int VAR_4;
  int VAR_5 = VAR_0;
  int VAR_6 = FUNC_4(VAR_3->pExpr);
  Fts5Buffer VAR_7;

  FUNC_0(&VAR_7, 0, sizeof(Fts5Buffer));
  switch( ((Fts5Table*)(VAR_3->base.pVtab))->pConfig->eDetail ){
    case 128:


      for(VAR_4=0; VAR_4<(VAR_6-1); VAR_4++){
        const u8 *VAR_8;
        int VAR_9 = FUNC_5(VAR_3->pExpr, VAR_4, &VAR_8);
        FUNC_2(&VAR_5, &VAR_7, VAR_9);
      }


      for(VAR_4=0; VAR_4<VAR_6; VAR_4++){
        const u8 *VAR_10;
        int VAR_11;
        VAR_11 = FUNC_5(VAR_3->pExpr, VAR_4, &VAR_10);
        FUNC_1(&VAR_5, &VAR_7, VAR_11, VAR_10);
      }
      break;

    case 129:


      for(VAR_4=0; VAR_5==VAR_0 && VAR_4<(VAR_6-1); VAR_4++){
        const u8 *VAR_12;
        int VAR_13;
        VAR_5 = FUNC_3(VAR_3->pExpr, VAR_4, &VAR_12, &VAR_13);
        FUNC_2(&VAR_5, &VAR_7, VAR_13);
      }


      for(VAR_4=0; VAR_5==VAR_0 && VAR_4<VAR_6; VAR_4++){
        const u8 *VAR_14;
        int VAR_15;
        VAR_5 = FUNC_3(VAR_3->pExpr, VAR_4, &VAR_14, &VAR_15);
        FUNC_1(&VAR_5, &VAR_7, VAR_15, VAR_14);
      }
      break;

    default:
      break;
  }

  FUNC_6(VAR_2, VAR_7.p, VAR_7.n, VAR_1);
  return VAR_5;
}
