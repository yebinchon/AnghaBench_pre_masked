
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct context {TYPE_1__* tbl; } ;
typedef int lua_State ;
struct TYPE_2__ {int sizearray; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,size_t) ;
 int FUNC_1 (int *,int) ;
 char* FUNC_2 (int *,int,size_t*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct context*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_5(struct context * VAR_3, lua_State *VAR_4, int VAR_5, int *VAR_6, uint32_t *VAR_7, int *VAR_8) {
 int VAR_9 = VAR_3->tbl->sizearray;
 int VAR_10 = FUNC_3(VAR_4, VAR_5);
 if (VAR_10 == VAR_2) {
  *VAR_6 = FUNC_1(VAR_4, VAR_5);
  if (*VAR_6 > 0 && *VAR_6 <= VAR_9) {
   return 0;
  }
  *VAR_7 = (uint32_t)*VAR_6;
  *VAR_8 = VAR_0;
 } else {
  size_t VAR_11 = 0;
  const char * VAR_12 = FUNC_2(VAR_4, VAR_5, &VAR_11);
  *VAR_7 = FUNC_0(VAR_12, VAR_11);
  *VAR_6 = FUNC_4(VAR_3, VAR_12, VAR_11);
  *VAR_8 = VAR_1;
 }
 return 1;
}
