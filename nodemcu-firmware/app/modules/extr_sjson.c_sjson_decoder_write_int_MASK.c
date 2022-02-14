
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
typedef int luaL_Buffer ;
struct TYPE_4__ {scalar_t__ buffer_ref; int min_needed; int min_available; size_t buffer_len; scalar_t__ complete; scalar_t__ error; int jsn; void* buffer; int * L; } ;
typedef TYPE_1__ JSN_DATA ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*,size_t) ;
 int FUNC_1 (int *,char const*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 void* FUNC_4 (int *,int,size_t*) ;
 scalar_t__ FUNC_5 (int *,int,char*) ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,scalar_t__) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_12 (int *,int) ;
 int FUNC_13 (int *,TYPE_1__*) ;
 int FUNC_14 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_15(lua_State *VAR_2, int VAR_3, int VAR_4) {
  JSN_DATA *VAR_5 = (JSN_DATA *)FUNC_5(VAR_2, VAR_3, "sjson.decoder");
  size_t VAR_6;

  const char *VAR_7 = FUNC_4(VAR_2, VAR_4, &VAR_6);

  if (VAR_5->error) {
    FUNC_6(VAR_2, "JSON parse error: previous call");
  }

  if (!VAR_5->complete) {
    VAR_5->L = VAR_2;


    if (VAR_5->buffer_ref != VAR_0) {
      luaL_Buffer VAR_8;
      FUNC_3(VAR_2, &VAR_8);

      FUNC_11(VAR_2, VAR_1, VAR_5->buffer_ref);
      size_t VAR_9;
      const char *VAR_10 = FUNC_4(VAR_2, -1, &VAR_9);
      FUNC_9(VAR_2, 1);
      int VAR_11 = VAR_5->min_needed - VAR_5->min_available;
      VAR_10 += VAR_11;
      VAR_9 -= VAR_11;
      if (VAR_9 > 0) {
        FUNC_1(&VAR_8, VAR_10, VAR_9);
      }
      VAR_5->min_available += VAR_11;

      FUNC_8(VAR_2, VAR_1, VAR_5->buffer_ref);
      VAR_5->buffer_ref = VAR_0;

      FUNC_10(VAR_2, VAR_4);
      FUNC_2(&VAR_8);
      FUNC_7(&VAR_8);
    } else {
      FUNC_10(VAR_2, VAR_4);
    }

    size_t VAR_12;
    VAR_5->buffer = FUNC_4(VAR_2, -1, &VAR_12);
    VAR_5->buffer_len = VAR_12;
    VAR_5->buffer_ref = FUNC_12(VAR_2, 1);

    FUNC_0(VAR_5->jsn, VAR_7, VAR_6);

    if (VAR_5->error) {
      FUNC_6(VAR_2, "JSON parse error: %s", VAR_5->error);
    }
  }

  if (VAR_5->complete) {

    FUNC_14(VAR_2, VAR_5);

    return FUNC_13(VAR_2, VAR_5);
  }

  return 0;
}
