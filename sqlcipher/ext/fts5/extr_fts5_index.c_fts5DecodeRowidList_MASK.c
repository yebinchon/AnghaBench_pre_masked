
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int i64 ;
typedef int Fts5Buffer ;


 int FUNC_0 (int*,int *,char*,int ,char const*) ;
 scalar_t__ FUNC_1 (int const*,scalar_t__*) ;

__attribute__((used)) static void FUNC_2(
  int *VAR_0,
  Fts5Buffer *VAR_1,
  const u8 *VAR_2, int VAR_3
){
  int VAR_4 = 0;
  i64 VAR_5 = 0;

  while( VAR_4<VAR_3 ){
    const char *VAR_6 = "";
    u64 VAR_7;
    VAR_4 += FUNC_1(&VAR_2[VAR_4], &VAR_7);
    VAR_5 += VAR_7;

    if( VAR_4<VAR_3 && VAR_2[VAR_4]==0x00 ){
      VAR_4++;
      if( VAR_4<VAR_3 && VAR_2[VAR_4]==0x00 ){
        VAR_4++;
        VAR_6 = "+";
      }else{
        VAR_6 = "*";
      }
    }

    FUNC_0(VAR_0, VAR_1, " %lld%s", VAR_5, VAR_6);
  }
}
