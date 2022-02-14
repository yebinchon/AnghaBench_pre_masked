
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ i64 ;
typedef int aPrev ;
struct TYPE_7__ {scalar_t__ nMapLimit; scalar_t__ pCompress; int fdDb; int pEnv; } ;
struct TYPE_6__ {int * pRedirect; } ;
typedef TYPE_1__ Segment ;
typedef int Redirect ;
typedef TYPE_2__ FileSystem ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int ,scalar_t__,int *,int) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(
  FileSystem *VAR_1,
  Segment *VAR_2,
  int VAR_3,
  int *VAR_4
){
  int VAR_5 = VAR_0;

  FUNC_0( VAR_1->nMapLimit==0 || VAR_1->pCompress==0 );
  FUNC_0( VAR_3>0 );

  if( VAR_1->pCompress ){
    i64 VAR_6 = FUNC_1(VAR_1, VAR_3) - 4;
    u8 VAR_7[4];
    VAR_5 = FUNC_3(VAR_1->pEnv, VAR_1->fdDb, VAR_6, VAR_7, sizeof(VAR_7));
    if( VAR_5==VAR_0 ){
      Redirect *VAR_8 = (VAR_2 ? VAR_2->pRedirect : 0);
      *VAR_4 = FUNC_2(VAR_8, (int)FUNC_4(VAR_7));
    }
  }else{
    FUNC_0( 0 );
  }
  return VAR_5;
}
