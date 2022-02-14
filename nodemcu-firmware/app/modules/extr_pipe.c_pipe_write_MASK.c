
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int end; int start; int buf; } ;
typedef TYPE_1__ buffer_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int,int,char*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int,size_t*) ;
 int FUNC_4 (int,char const*,size_t) ;
 int FUNC_5 (int,int,int) ;
 TYPE_1__* FUNC_6 (int *,int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(lua_State *VAR_3) {
  size_t VAR_4 = VAR_1;
  const char *VAR_5 = FUNC_3(VAR_3, 2, &VAR_4);
  if (VAR_4==0)
    return 0;
  FUNC_1(VAR_3, VAR_4 != VAR_1, 2, "must be a string");
  buffer_t *VAR_6 = FUNC_0(VAR_3, 1, VAR_0);

  do {
    int VAR_7 = VAR_6->end - VAR_6->start;

    if (VAR_7 == VAR_2) {
      VAR_6 = FUNC_6(VAR_3, 1, FUNC_2(VAR_3, 1)+1);
      VAR_7 = 0;
    } else if (VAR_6->start) {
      FUNC_5(VAR_6->buf, VAR_6->buf + VAR_6->start, VAR_7);
      VAR_6->start = 0; VAR_6->end = VAR_7;
    }

    int VAR_8 = VAR_2-VAR_7;
    if (VAR_4 <= (unsigned )VAR_8)
      break;



    FUNC_4(VAR_6->buf + VAR_6->end, VAR_5, VAR_8);
    VAR_6->end += VAR_8;
    VAR_4 -= VAR_8;
    VAR_5 += VAR_8;

  } while(1);


  FUNC_4(VAR_6->buf + VAR_6->end, VAR_5, VAR_4);
  VAR_6->end += VAR_4;
 return 0;
}
