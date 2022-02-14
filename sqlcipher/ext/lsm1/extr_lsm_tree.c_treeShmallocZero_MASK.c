
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int lsm_db ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (int *,int,int,int*) ;
 void* FUNC_3 (int *,int ) ;

__attribute__((used)) static void *FUNC_4(lsm_db *VAR_1, int VAR_2, u32 *VAR_3, int *VAR_4){
  u32 VAR_5;
  void *VAR_6;
  VAR_5 = FUNC_2(VAR_1, 1, VAR_2, VAR_4);
  VAR_6 = FUNC_3(VAR_1, VAR_5);
  if( VAR_6 ){
    FUNC_0( *VAR_4==VAR_0 );
    FUNC_1(VAR_6, 0, VAR_2);
    *VAR_3 = VAR_5;
  }
  return VAR_6;
}
