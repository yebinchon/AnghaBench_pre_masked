
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int u64 ;
typedef int i64 ;
typedef int filter ;
typedef int csr ;
struct TYPE_9__ {int flags; char* aDoclist; size_t nDoclist; int nTerm; int zTerm; } ;
typedef int Fts3Table ;
typedef TYPE_1__ Fts3SegFilter ;
typedef TYPE_1__ Fts3MultiSegReader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int,int,int,int,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (char*,int*) ;
 int FUNC_4 (int *,int,int,int ,int ,int ,int ,int,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,TYPE_1__*,TYPE_1__*) ;
 int FUNC_7 (int *,TYPE_1__*) ;

__attribute__((used)) static u64 FUNC_8(
  Fts3Table *VAR_6,
  int VAR_7,
  int VAR_8,
  int *VAR_9
){
  Fts3SegFilter VAR_10;
  Fts3MultiSegReader VAR_11;
  int VAR_12;
  u64 VAR_13 = 0;

  FUNC_0( *VAR_9==VAR_4 );

  FUNC_2(&VAR_10, 0, sizeof(VAR_10));
  FUNC_2(&VAR_11, 0, sizeof(VAR_11));
  VAR_10.flags = VAR_2|VAR_1;
  VAR_10.flags |= VAR_3;

  VAR_12 = FUNC_4(
      VAR_6, VAR_7, VAR_8, VAR_0, 0, 0, 0, 1,&VAR_11
  );
  if( VAR_12==VAR_4 ){
    VAR_12 = FUNC_6(VAR_6, &VAR_11, &VAR_10);
  }

  if( VAR_12==VAR_4 ){
    while( VAR_5==(VAR_12 = FUNC_7(VAR_6, &VAR_11)) ){
      char *VAR_14 = VAR_11.aDoclist;
      char *VAR_15 = &VAR_14[VAR_11.nDoclist];

      i64 VAR_16 = 0;
      i64 VAR_17 = 0;
      i64 VAR_18 = 0;

      VAR_14 += FUNC_3(VAR_14, &VAR_16);
      while( VAR_14<VAR_15 ){
        i64 VAR_19 = 0;
        VAR_14 += FUNC_3(VAR_14, &VAR_19);
        if( VAR_14<VAR_15 ){
          if( VAR_19==0 || VAR_19==1 ){
            VAR_17 = 0;
            VAR_18 = 0;
            if( VAR_19 ){
              VAR_14 += FUNC_3(VAR_14, &VAR_17);
            }else{
              VAR_14 += FUNC_3(VAR_14, &VAR_19);
              VAR_16 += VAR_19;
            }
          }else{
            VAR_18 += (VAR_19 - 2);
            VAR_13 = VAR_13 ^ FUNC_1(
                VAR_11.zTerm, VAR_11.nTerm, VAR_7, VAR_8, VAR_16,
                (int)VAR_17, (int)VAR_18
            );
          }
        }
      }
    }
  }
  FUNC_5(&VAR_11);

  *VAR_9 = VAR_12;
  return VAR_13;
}
