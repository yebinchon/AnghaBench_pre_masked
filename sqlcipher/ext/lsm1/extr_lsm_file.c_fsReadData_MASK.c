
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ i64 ;
struct TYPE_7__ {int fdDb; int pEnv; int pCompress; } ;
typedef int Segment ;
typedef TYPE_1__ FileSystem ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int *,int ,int*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;
 int FUNC_6 (int ,int ,scalar_t__,int *,int) ;

__attribute__((used)) static int FUNC_7(
  FileSystem *VAR_1,
  Segment *VAR_2,
  i64 VAR_3,
  u8 *VAR_4,
  int VAR_5
){
  i64 VAR_6;
  int VAR_7;
  int VAR_8;

  FUNC_1( VAR_1->pCompress );

  VAR_6 = FUNC_4(VAR_1, VAR_3) + 1;
  VAR_7 = (int)FUNC_0(VAR_6 - VAR_3, VAR_5);

  VAR_8 = FUNC_6(VAR_1->pEnv, VAR_1->fdDb, VAR_3, VAR_4, VAR_7);
  if( VAR_8==VAR_0 && VAR_7!=VAR_5 ){
    int VAR_9;

    VAR_8 = FUNC_2(VAR_1, VAR_2, FUNC_5(VAR_1, VAR_3), &VAR_9);
    if( VAR_8==VAR_0 ){
      i64 VAR_10 = FUNC_3(VAR_1, VAR_9);
      VAR_8 = FUNC_6(VAR_1->pEnv, VAR_1->fdDb, VAR_10, &VAR_4[VAR_7], VAR_5-VAR_7);
    }
  }

  return VAR_8;
}
