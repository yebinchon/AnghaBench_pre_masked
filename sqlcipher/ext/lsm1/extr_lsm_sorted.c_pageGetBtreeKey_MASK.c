
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int nData; void* pData; } ;
typedef int Segment ;
typedef int Page ;
typedef int LsmPgno ;
typedef TYPE_1__ LsmBlob ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int *,int*) ;
 int FUNC_4 (int ,int *,int ,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,int,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int ,int *,int *,int ,int*,TYPE_1__*) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(
  Segment *VAR_2,
  Page *VAR_3,
  int VAR_4,
  LsmPgno *VAR_5,
  int *VAR_6,
  void **VAR_7,
  int *VAR_8,
  LsmBlob *VAR_9
){
  u8 *VAR_10;
  int VAR_11;
  u8 *VAR_12;
  int VAR_13;

  VAR_10 = FUNC_3(VAR_3, &VAR_11);
  FUNC_2( VAR_1 & FUNC_9(VAR_10, VAR_11) );
  FUNC_2( VAR_4>=0 && VAR_4<FUNC_11(VAR_10, VAR_11) );

  VAR_12 = FUNC_8(VAR_10, VAR_11, VAR_4);
  VAR_13 = *VAR_12++;
  VAR_12 += FUNC_1(VAR_12, *VAR_5);

  if( VAR_13==0 ){
    int VAR_14;
    LsmPgno VAR_15;
    Page *VAR_16;
    VAR_12 += FUNC_1(VAR_12, VAR_15);
    VAR_14 = FUNC_4(FUNC_7(VAR_3), VAR_2, VAR_15, &VAR_16);
    if( VAR_14!=VAR_0 ) return VAR_14;
    FUNC_10(FUNC_6(VAR_3), VAR_2, VAR_16, 0, &VAR_13, VAR_9);
    FUNC_5(VAR_16);
    *VAR_7 = VAR_9->pData;
    *VAR_8 = VAR_9->nData;
  }else{
    VAR_12 += FUNC_0(VAR_12, *VAR_8);
    *VAR_7 = VAR_12;
  }
  if( VAR_6 ) *VAR_6 = FUNC_12(VAR_13);

  return VAR_0;
}
