
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct jsonsl_state_st {int pos_cur; int pos_begin; } ;
typedef int luaL_Buffer ;
struct TYPE_4__ {int L; } ;
typedef TYPE_1__ JSN_DATA ;


 int FUNC_0 (char const) ;
 char* FUNC_1 (TYPE_1__*,struct jsonsl_state_st*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void FUNC_6(JSN_DATA *VAR_0, struct jsonsl_state_st *VAR_1) {
  luaL_Buffer VAR_2;
  FUNC_2(VAR_0->L, &VAR_2);
  int VAR_3;
  const char *VAR_4 = FUNC_1(VAR_0, VAR_1) + 1;
  for (VAR_3 = 0; VAR_3 < VAR_1->pos_cur - VAR_1->pos_begin - 1; VAR_3++) {
    int VAR_5 = VAR_4[VAR_3];
    if (VAR_5 == '\\') {
      VAR_3++;
      VAR_5 = VAR_4[VAR_3] & 255;
      switch (VAR_4[VAR_3]) {
        case 'b':
          VAR_5 = '\b';
          break;
        case 'f':
          VAR_5 = '\f';
          break;
        case 'n':
          VAR_5 = '\n';
          break;
        case 'r':
          VAR_5 = '\r';
          break;
        case 't':
          VAR_5 = '\t';
          break;
        case 'u':
          VAR_5 = FUNC_0(VAR_4[++VAR_3]) << 12;
          VAR_5 += FUNC_0(VAR_4[++VAR_3]) << 8;
          VAR_5 += FUNC_0(VAR_4[++VAR_3]) << 4;
          VAR_5 += FUNC_0(VAR_4[++VAR_3]) ;
          FUNC_5(&VAR_2, VAR_5);
          continue;
      }
    }
    FUNC_4(&VAR_2, VAR_5);
  }
  FUNC_3(&VAR_2);
}
