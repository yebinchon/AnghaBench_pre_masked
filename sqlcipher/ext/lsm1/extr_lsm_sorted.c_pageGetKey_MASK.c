
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int Segment ;
typedef int Page ;
typedef int LsmBlob ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *,int*) ;
 int FUNC_2 (int *,int*) ;
 int * FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,int *,int,int,void**,int *) ;

__attribute__((used)) static u8 *FUNC_9(
  Segment *VAR_1,
  Page *VAR_2,
  int VAR_3,
  int *VAR_4,
  int *VAR_5,
  LsmBlob *VAR_6
){
  u8 *VAR_7;
  int VAR_8;
  int VAR_9;
  u8 *VAR_10;
  int VAR_11;

  VAR_10 = FUNC_1(VAR_2, &VAR_11);

  FUNC_0( !(FUNC_4(VAR_10, VAR_11) & VAR_0) );
  FUNC_0( VAR_3<FUNC_5(VAR_10, VAR_11) );

  VAR_7 = FUNC_3(VAR_10, VAR_11, VAR_3);
  VAR_9 = *VAR_7++;
  VAR_7 += FUNC_2(VAR_7, &VAR_8);
  VAR_7 += FUNC_2(VAR_7, VAR_5);
  if( FUNC_6(VAR_9) ){
    VAR_7 += FUNC_2(VAR_7, &VAR_8);
  }
  *VAR_4 = FUNC_7(VAR_9);

  FUNC_8(VAR_1, VAR_2, VAR_7-VAR_10, *VAR_5, (void **)&VAR_7, VAR_6);
  return VAR_7;
}
