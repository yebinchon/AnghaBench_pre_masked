
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct write_block {int dummy; } ;
typedef int lua_State ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,struct write_block*,int,int) ;
 int FUNC_5 (struct write_block*,int) ;
 int FUNC_6 (struct write_block*,int *,int) ;

__attribute__((used)) static int
FUNC_7(lua_State *VAR_2, struct write_block * VAR_3, int VAR_4, int VAR_5) {
 int VAR_6 = FUNC_3(VAR_2,VAR_4);
 if (VAR_6 >= VAR_0-1) {
  uint8_t VAR_7 = FUNC_0(VAR_1, VAR_0-1);
  FUNC_6(VAR_3, &VAR_7, 1);
  FUNC_5(VAR_3, VAR_6);
 } else {
  uint8_t VAR_8 = FUNC_0(VAR_1, VAR_6);
  FUNC_6(VAR_3, &VAR_8, 1);
 }

 int VAR_9;
 for (VAR_9=1;VAR_9<=VAR_6;VAR_9++) {
  FUNC_2(VAR_2,VAR_4,VAR_9);
  FUNC_4(VAR_2, VAR_3, -1, VAR_5);
  FUNC_1(VAR_2,1);
 }

 return VAR_6;
}
