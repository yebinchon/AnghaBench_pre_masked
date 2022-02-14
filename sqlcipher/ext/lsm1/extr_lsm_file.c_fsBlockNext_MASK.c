
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int i64 ;
typedef int aNext ;
struct TYPE_11__ {scalar_t__ nMapLimit; scalar_t__ pCompress; int nBlocksize; int nPagesize; int fdDb; int pEnv; } ;
struct TYPE_10__ {int * aData; } ;
struct TYPE_9__ {int pRedirect; } ;
typedef TYPE_1__ Segment ;
typedef TYPE_2__ Page ;
typedef TYPE_3__ FileSystem ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int ,int,int ,TYPE_2__**,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int,int *,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(
  FileSystem *VAR_1,
  Segment *VAR_2,
  int VAR_3,
  int *VAR_4
){
  int VAR_5;
  int VAR_6;

  if( VAR_2 ){
    VAR_6 = FUNC_2(VAR_2->pRedirect, VAR_3);
  }else{
    VAR_6 = VAR_3;
  }

  FUNC_0( VAR_1->nMapLimit==0 || VAR_1->pCompress==0 );
  if( VAR_1->pCompress ){
    i64 VAR_7;
    u8 VAR_8[4];

    VAR_7 = (i64)VAR_6 * VAR_1->nBlocksize - sizeof(VAR_8);
    VAR_5 = FUNC_3(VAR_1->pEnv, VAR_1->fdDb, VAR_7, VAR_8, sizeof(VAR_8));
    if( VAR_5==VAR_0 ){
      *VAR_4 = (int)FUNC_5(VAR_8);
    }
  }else{
    const int VAR_9 = (VAR_1->nBlocksize / VAR_1->nPagesize);
    Page *VAR_10;
    VAR_5 = FUNC_1(VAR_1, 0, VAR_6*VAR_9, 0, &VAR_10, 0);
    if( VAR_5==VAR_0 ){
      *VAR_4 = FUNC_5(&VAR_10->aData[VAR_1->nPagesize-4]);
      FUNC_4(VAR_10);
    }
  }

  if( VAR_2 ){
    *VAR_4 = FUNC_2(VAR_2->pRedirect, *VAR_4);
  }
  return VAR_5;
}
