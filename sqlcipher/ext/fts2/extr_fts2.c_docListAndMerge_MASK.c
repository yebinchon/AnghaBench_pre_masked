
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DataBuffer ;
typedef int DLWriter ;
typedef int DLReader ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char const*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int *) ;

__attribute__((used)) static void FUNC_8(
  const char *VAR_1, int VAR_2,
  const char *VAR_3, int VAR_4,
  DataBuffer *VAR_5
){
  DLReader VAR_6, VAR_7;
  DLWriter VAR_8;

  if( VAR_2==0 || VAR_4==0 ) return;

  FUNC_3(&VAR_6, VAR_0, VAR_1, VAR_2);
  FUNC_3(&VAR_7, VAR_0, VAR_3, VAR_4);
  FUNC_7(&VAR_8, VAR_0, VAR_5);

  while( !FUNC_0(&VAR_6) && !FUNC_0(&VAR_7) ){
    if( FUNC_2(&VAR_6)<FUNC_2(&VAR_7) ){
      FUNC_4(&VAR_6);
    }else if( FUNC_2(&VAR_7)<FUNC_2(&VAR_6) ){
      FUNC_4(&VAR_7);
    }else{
      FUNC_5(&VAR_8, FUNC_2(&VAR_6));
      FUNC_4(&VAR_6);
      FUNC_4(&VAR_7);
    }
  }

  FUNC_1(&VAR_6);
  FUNC_1(&VAR_7);
  FUNC_6(&VAR_8);
}
