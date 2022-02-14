
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8 ;
struct RxControl {int dummy; } ;
struct TYPE_7__ {int len; int * buf; } ;
typedef TYPE_2__ packet_t ;
struct TYPE_6__ {scalar_t__ Type; } ;
struct TYPE_8__ {TYPE_1__ framectrl; } ;
typedef TYPE_3__ management_request_t ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int) ;
 char* FUNC_2 (int *,int) ;
 TYPE_2__* FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *,int,char const*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (int *,TYPE_3__*,int const*,int) ;
 scalar_t__ FUNC_9 (int *,int *,int const*,char const*) ;

__attribute__((used)) static int FUNC_10(lua_State *VAR_3) {
  packet_t *VAR_4 = FUNC_3(VAR_3, 1, "wifi.packet");
  struct RxControl *VAR_5 = (struct RxControl *) VAR_4->buf;
  management_request_t *VAR_6 = (management_request_t *) (VAR_5 + 1);
  const uint8 *VAR_7 = VAR_4->buf + VAR_4->len;

  if ((void *) (VAR_6 + 1) > (void *) VAR_7) {
    return 0;
  }
  if (VAR_6->framectrl.Type != VAR_0) {
    return 0;
  }

  if (FUNC_7(VAR_3, 2) == VAR_1) {
    int VAR_8 = FUNC_1(VAR_3, 2);
    if (FUNC_8(VAR_3, VAR_6, VAR_7, VAR_8)) {
      return 1;
    }
  } else {
    const char *VAR_9 = FUNC_2(VAR_3, 2);
    if (FUNC_9(VAR_3, VAR_4->buf, VAR_7, VAR_9)) {
      return 1;
    }


    FUNC_6(VAR_3, FUNC_0(VAR_2));
    FUNC_4(VAR_3, -1, VAR_9);
    if (!FUNC_5(VAR_3, -1)) {
      return 1;
    }
  }

  return 0;
}
