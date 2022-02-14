
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ i64 ;
typedef int Fts5Buffer ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int*,int *,int const*,int ) ;
 scalar_t__ FUNC_2 (int const*,int*,int*) ;
 int FUNC_3 (int*,int *,char*,int,...) ;
 int FUNC_4 (int const*,int *) ;

__attribute__((used)) static int FUNC_5(int *VAR_0, Fts5Buffer *VAR_1, const u8 *VAR_2, int VAR_3){
  i64 VAR_4 = 0;
  int VAR_5 = 0;

  if( VAR_3>0 ){
    VAR_5 = FUNC_4(VAR_2, (u64*)&VAR_4);
    FUNC_3(VAR_0, VAR_1, " id=%lld", VAR_4);
  }
  while( VAR_5<VAR_3 ){
    int VAR_6;
    int VAR_7;
    VAR_5 += FUNC_2(&VAR_2[VAR_5], &VAR_6, &VAR_7);
    FUNC_3(VAR_0, VAR_1, " nPos=%d%s", VAR_6, VAR_7?"*":"");
    VAR_5 += FUNC_1(VAR_0, VAR_1, &VAR_2[VAR_5], FUNC_0(VAR_3-VAR_5, VAR_6));
    if( VAR_5<VAR_3 ){
      i64 VAR_8;
      VAR_5 += FUNC_4(&VAR_2[VAR_5], (u64*)&VAR_8);
      VAR_4 += VAR_8;
      FUNC_3(VAR_0, VAR_1, " id=%lld", VAR_4);
    }
  }

  return VAR_5;
}
