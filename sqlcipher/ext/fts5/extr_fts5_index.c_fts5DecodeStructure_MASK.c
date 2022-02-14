
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int Fts5Structure ;
typedef int Fts5Buffer ;


 int VAR_0 ;
 int FUNC_0 (int*,int *,int *) ;
 int FUNC_1 (int const*,int,int ,int **) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(
  int *VAR_1,
  Fts5Buffer *VAR_2,
  const u8 *VAR_3, int VAR_4
){
  int VAR_5;
  Fts5Structure *VAR_6 = 0;

  VAR_5 = FUNC_1(VAR_3, VAR_4, 0, &VAR_6);
  if( VAR_5!=VAR_0 ){
    *VAR_1 = VAR_5;
    return;
  }

  FUNC_0(VAR_1, VAR_2, VAR_6);
  FUNC_2(VAR_6);
}
