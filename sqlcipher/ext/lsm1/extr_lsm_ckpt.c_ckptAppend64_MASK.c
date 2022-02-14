
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int i64 ;
typedef int CkptBuffer ;


 int FUNC_0 (int *,int ,int,int*) ;

__attribute__((used)) static void FUNC_1(CkptBuffer *VAR_0, int *VAR_1, i64 VAR_2, int *VAR_3){
  int VAR_4 = *VAR_1;
  FUNC_0(VAR_0, VAR_4++, (VAR_2 >> 32) & 0xFFFFFFFF, VAR_3);
  FUNC_0(VAR_0, VAR_4++, (VAR_2 & 0xFFFFFFFF), VAR_3);
  *VAR_1 = VAR_4;
}
