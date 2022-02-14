
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_11__ {int (* xUncompress ) (int ,char*,int*,char const*,int) ;int pCtx; } ;
typedef TYPE_2__ lsm_compress ;
typedef int i64 ;
typedef int aSz ;
struct TYPE_13__ {int nBuffer; int* aIBuffer; int nPagesize; TYPE_2__* pCompress; } ;
struct TYPE_12__ {int nCompress; TYPE_1__* pFS; scalar_t__ aData; int iPg; } ;
struct TYPE_10__ {int nPagesize; } ;
typedef int Segment ;
typedef TYPE_3__ Page ;
typedef TYPE_4__ FileSystem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,int *,int ,int,int *) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*,int *,int ,int*,int) ;
 scalar_t__ FUNC_4 (int*,int*) ;
 int FUNC_5 (int ,char*,int*,char const*,int) ;

__attribute__((used)) static int FUNC_6(
  FileSystem *VAR_3,
  Segment *VAR_4,
  Page *VAR_5,
  int *VAR_6
){
  lsm_compress *VAR_7 = VAR_3->pCompress;
  i64 VAR_8 = VAR_5->iPg;
  u8 VAR_9[3];
  int VAR_10;

  FUNC_0( VAR_7 && VAR_5->nCompress==0 );

  if( FUNC_2(VAR_3, 0) ) return VAR_1;

  VAR_10 = FUNC_3(VAR_3, VAR_4, VAR_8, VAR_9, sizeof(VAR_9));

  if( VAR_10==VAR_2 ){
    int VAR_11;
    if( VAR_9[0] & 0x80 ){
      VAR_5->nCompress = (int)FUNC_4(VAR_9, &VAR_11);
    }else{
      VAR_5->nCompress = (int)VAR_9[0] - sizeof(VAR_9)*2;
      VAR_11 = 1;
    }
    if( VAR_11 ){
      if( VAR_6 ){
        *VAR_6 = VAR_5->nCompress + sizeof(VAR_9)*2;
      }else{
        VAR_10 = VAR_0;
      }
    }else{
      VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_8, 3, &VAR_8);
      if( VAR_10==VAR_2 ){
        if( VAR_5->nCompress>VAR_3->nBuffer ){
          VAR_10 = VAR_0;
        }else{
          VAR_10 = FUNC_3(VAR_3, VAR_4, VAR_8, VAR_3->aIBuffer, VAR_5->nCompress);
        }
        if( VAR_10==VAR_2 ){
          int VAR_12 = VAR_3->nPagesize;
          VAR_10 = VAR_7->xUncompress(VAR_7->pCtx,
              (char *)VAR_5->aData, &VAR_12,
              (const char *)VAR_3->aIBuffer, VAR_5->nCompress
          );
          if( VAR_10==VAR_2 && VAR_12!=VAR_5->pFS->nPagesize ){
            VAR_10 = VAR_0;
          }
        }
      }
    }
  }
  return VAR_10;
}
