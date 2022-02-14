
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int Fts5Buffer ;


 int FUNC_0 (int*,int *,char*,char const*,int) ;
 scalar_t__ FUNC_1 (int const*,scalar_t__*) ;

__attribute__((used)) static void FUNC_2(
  int *VAR_0,
  Fts5Buffer *VAR_1,
  const u8 *VAR_2, int VAR_3
){
  int VAR_4 = 0;
  const char *VAR_5 = "";

  while( VAR_4<VAR_3 ){
    u64 VAR_6;
    VAR_4 += FUNC_1(&VAR_2[VAR_4], &VAR_6);
    FUNC_0(VAR_0, VAR_1, "%s%d", VAR_5, (int)VAR_6);
    VAR_5 = " ";
  }
}
