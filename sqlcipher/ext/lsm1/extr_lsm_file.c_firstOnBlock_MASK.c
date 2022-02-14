
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LsmPgno ;
typedef int FileSystem ;


 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static LsmPgno FUNC_1(
  FileSystem *VAR_0,
  int VAR_1,
  LsmPgno *VAR_2,
  int VAR_3
){
  LsmPgno VAR_4 = 0;
  int VAR_5;
  for(VAR_5=0; VAR_5<VAR_3; VAR_5++){
    LsmPgno VAR_6 = VAR_2[VAR_5];
    if( FUNC_0(VAR_0, VAR_6)==VAR_1 && (VAR_4==0 || VAR_6<VAR_4) ){
      VAR_4 = VAR_6;
    }
  }
  return VAR_4;
}
