
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DocListType ;
typedef int DataBuffer ;
typedef int DLWriter ;
typedef int DLReader ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,char const*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int *) ;
 int FUNC_8 (int *,int *,int *) ;

__attribute__((used)) static void FUNC_9(
  const char *VAR_2, int VAR_3,
  const char *VAR_4, int VAR_5,
  DocListType VAR_6,
  DataBuffer *VAR_7
){
  DLReader VAR_8, VAR_9;
  DLWriter VAR_10;

  if( VAR_3==0 || VAR_5==0 ) return;

  FUNC_0( VAR_6!=VAR_1 );

  FUNC_4(&VAR_8, VAR_0, VAR_2, VAR_3);
  FUNC_4(&VAR_9, VAR_0, VAR_4, VAR_5);
  FUNC_7(&VAR_10, VAR_6, VAR_7);

  while( !FUNC_1(&VAR_8) && !FUNC_1(&VAR_9) ){
    if( FUNC_3(&VAR_8)<FUNC_3(&VAR_9) ){
      FUNC_5(&VAR_8);
    }else if( FUNC_3(&VAR_9)<FUNC_3(&VAR_8) ){
      FUNC_5(&VAR_9);
    }else{
      FUNC_8(&VAR_8, &VAR_9, &VAR_10);
      FUNC_5(&VAR_8);
      FUNC_5(&VAR_9);
    }
  }

  FUNC_2(&VAR_8);
  FUNC_2(&VAR_9);
  FUNC_6(&VAR_10);
}
