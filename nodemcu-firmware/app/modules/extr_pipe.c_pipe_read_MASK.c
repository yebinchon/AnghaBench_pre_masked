
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int end; int start; char const* buf; } ;
typedef TYPE_1__ buffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int,int ) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 char FUNC_2 (int *,int,int*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char const*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int,int) ;
 int FUNC_9 (int *,int,int) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static int FUNC_11(lua_State *VAR_2) {
  buffer_t *VAR_3 = FUNC_0(VAR_2, 1, VAR_0);
  int VAR_4, VAR_5=0, VAR_6;
  FUNC_10(VAR_2,2);
  const char VAR_7 = FUNC_2(VAR_2, 2, &VAR_6);
  FUNC_5(VAR_2,1);

  while (VAR_3 && VAR_6) {
    int VAR_8, VAR_9, VAR_10 = VAR_3->end - VAR_3->start;

    if (VAR_6 < 0 ) {

      for (VAR_4 = VAR_3->start; VAR_4 < VAR_3->end && VAR_3->buf[VAR_4] != VAR_7; VAR_4++) {}


      if (VAR_4 == VAR_3->end) {
        VAR_8 = VAR_9 = VAR_10;
      } else {
        VAR_8 = VAR_9 = VAR_4 + 1 - VAR_3->start;
        if (VAR_6 == VAR_1)
          VAR_8--;
      }
    } else {
      VAR_8 = VAR_9 = (VAR_6 < VAR_10) ? VAR_6 : VAR_10;
      VAR_6 -= VAR_9;
    }
    FUNC_6(VAR_2, VAR_3->buf + VAR_3->start, VAR_8);
    VAR_5++;
    VAR_3->start += VAR_9;
    if (VAR_3->start == VAR_3->end) {

      int VAR_11 = FUNC_4(VAR_2, 1);
      for (VAR_4 = 1; VAR_4 < VAR_11; VAR_4++) {
        FUNC_8(VAR_2, 1, VAR_4+1); FUNC_9(VAR_2, 1, VAR_4);
      }
      FUNC_7(VAR_2); FUNC_9(VAR_2, 1, VAR_11--);
      if (VAR_11) {
        FUNC_8(VAR_2, 1, 1);
        VAR_3 = FUNC_1(VAR_2, -1);
        FUNC_5(VAR_2, 1);
      } else {
        VAR_3 = ((void*)0);
      }
    }
  }
  if (VAR_5)
    FUNC_3(VAR_2, VAR_5);
  else
    FUNC_7(VAR_2);
  return 1;
}
