
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int Fts5Index ;
typedef int Fts5Buffer ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int const*,int) ;

__attribute__((used)) static void FUNC_3(
  Fts5Index *VAR_0,
  void *VAR_1,
  const u8 *VAR_2, int VAR_3
){
  FUNC_0(VAR_0);
  FUNC_1( VAR_3>=0 );
  if( VAR_3>0 ){
    FUNC_2((Fts5Buffer*)VAR_1, VAR_2, VAR_3);
  }
}
