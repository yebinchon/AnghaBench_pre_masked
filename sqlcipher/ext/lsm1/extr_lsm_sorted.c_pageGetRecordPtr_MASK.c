
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int LsmPgno ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static LsmPgno FUNC_4(u8 *VAR_0, int VAR_1, int VAR_2){
  LsmPgno VAR_3;
  u8 *VAR_4;

  FUNC_0( VAR_2<FUNC_3(VAR_0, VAR_1) && VAR_2>=0 );
  VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);
  FUNC_1(&VAR_4[1], &VAR_3);
  return VAR_3;
}
