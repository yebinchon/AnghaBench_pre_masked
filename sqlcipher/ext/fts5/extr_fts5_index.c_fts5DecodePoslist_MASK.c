
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int Fts5Buffer ;


 scalar_t__ FUNC_0 (int const*,int) ;
 int FUNC_1 (int*,int *,char*,int) ;

__attribute__((used)) static int FUNC_2(int *VAR_0, Fts5Buffer *VAR_1, const u8 *VAR_2, int VAR_3){
  int VAR_4 = 0;
  while( VAR_4<VAR_3 ){
    int VAR_5;
    VAR_4 += FUNC_0(&VAR_2[VAR_4], VAR_5);
    FUNC_1(VAR_0, VAR_1, " %d", VAR_5);
  }
  return VAR_4;
}
