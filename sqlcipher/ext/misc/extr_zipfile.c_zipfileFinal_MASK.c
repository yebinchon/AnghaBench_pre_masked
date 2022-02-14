
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef void* u16 ;
typedef scalar_t__ sqlite3_int64 ;
typedef int sqlite3_context ;
typedef int eocd ;
struct TYPE_9__ {size_t nSize; size_t iOffset; void* nEntryTotal; void* nEntry; } ;
typedef TYPE_3__ ZipfileEOCD ;
struct TYPE_8__ {size_t n; int a; } ;
struct TYPE_7__ {size_t n; int a; } ;
struct TYPE_10__ {scalar_t__ nEntry; TYPE_2__ cds; TYPE_1__ body; } ;
typedef TYPE_4__ ZipfileCtx ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,size_t) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,int *,int,int ) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int FUNC_7 (TYPE_3__*,int *) ;

void FUNC_8(sqlite3_context *VAR_2){
  ZipfileCtx *VAR_3;
  ZipfileEOCD VAR_4;
  sqlite3_int64 VAR_5;
  u8 *VAR_6;

  VAR_3 = (ZipfileCtx*)FUNC_2(VAR_2, sizeof(ZipfileCtx));
  if( VAR_3==0 ) return;
  if( VAR_3->nEntry>0 ){
    FUNC_1(&VAR_4, 0, sizeof(VAR_4));
    VAR_4.nEntry = (u16)VAR_3->nEntry;
    VAR_4.nEntryTotal = (u16)VAR_3->nEntry;
    VAR_4.nSize = VAR_3->cds.n;
    VAR_4.iOffset = VAR_3->body.n;

    VAR_5 = VAR_3->body.n + VAR_3->cds.n + VAR_0;
    VAR_6 = (u8*)FUNC_4(VAR_5);
    if( VAR_6==0 ){
      FUNC_6(VAR_2);
    }else{
      FUNC_0(VAR_6, VAR_3->body.a, VAR_3->body.n);
      FUNC_0(&VAR_6[VAR_3->body.n], VAR_3->cds.a, VAR_3->cds.n);
      FUNC_7(&VAR_4, &VAR_6[VAR_3->body.n + VAR_3->cds.n]);
      FUNC_5(VAR_2, VAR_6, (int)VAR_5, VAR_1);
    }
  }

  FUNC_3(VAR_3->body.a);
  FUNC_3(VAR_3->cds.a);
}
