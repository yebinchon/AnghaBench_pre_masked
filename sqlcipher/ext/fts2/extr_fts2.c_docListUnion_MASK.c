
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DataBuffer ;
typedef int DLWriter ;
typedef int DLReader ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,char const*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int *) ;
 int FUNC_9 (int *,int *,int *) ;

__attribute__((used)) static void FUNC_10(
  const char *VAR_1, int VAR_2,
  const char *VAR_3, int VAR_4,
  DataBuffer *VAR_5
){
  DLReader VAR_6, VAR_7;
  DLWriter VAR_8;

  if( VAR_2==0 ){
    if( VAR_4!=0) FUNC_0(VAR_5, VAR_3, VAR_4);
    return;
  }
  if( VAR_4==0 ){
    FUNC_0(VAR_5, VAR_1, VAR_2);
    return;
  }

  FUNC_4(&VAR_6, VAR_0, VAR_1, VAR_2);
  FUNC_4(&VAR_7, VAR_0, VAR_3, VAR_4);
  FUNC_8(&VAR_8, VAR_0, VAR_5);

  while( !FUNC_1(&VAR_6) || !FUNC_1(&VAR_7) ){
    if( FUNC_1(&VAR_7) ){
      FUNC_6(&VAR_8, &VAR_6);
      FUNC_5(&VAR_6);
    }else if( FUNC_1(&VAR_6) ){
      FUNC_6(&VAR_8, &VAR_7);
      FUNC_5(&VAR_7);
    }else if( FUNC_3(&VAR_6)<FUNC_3(&VAR_7) ){
      FUNC_6(&VAR_8, &VAR_6);
      FUNC_5(&VAR_6);
    }else if( FUNC_3(&VAR_6)>FUNC_3(&VAR_7) ){
      FUNC_6(&VAR_8, &VAR_7);
      FUNC_5(&VAR_7);
    }else{
      FUNC_9(&VAR_6, &VAR_7, &VAR_8);
      FUNC_5(&VAR_6);
      FUNC_5(&VAR_7);
    }
  }

  FUNC_2(&VAR_6);
  FUNC_2(&VAR_7);
  FUNC_7(&VAR_8);
}
