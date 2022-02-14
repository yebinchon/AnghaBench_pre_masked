
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int Page ;
typedef scalar_t__ LsmPgno ;


 int FUNC_0 (int) ;
 scalar_t__* FUNC_1 (int *,int*) ;
 int FUNC_2 (scalar_t__*,scalar_t__*) ;
 scalar_t__* FUNC_3 (scalar_t__*,int,int) ;

__attribute__((used)) static LsmPgno FUNC_4(Page *VAR_0, int VAR_1){
  LsmPgno VAR_2;
  u8 *VAR_3;
  int VAR_4;
  u8 *VAR_5;

  VAR_3 = FUNC_1(VAR_0, &VAR_4);
  VAR_5 = FUNC_3(VAR_3, VAR_4, VAR_1);
  FUNC_0( VAR_5[0]==0 );
  VAR_5++;
  VAR_5 += FUNC_2(VAR_5, &VAR_2);
  FUNC_2(VAR_5, &VAR_2);
  FUNC_0( VAR_2>0 );
  return VAR_2;
}
