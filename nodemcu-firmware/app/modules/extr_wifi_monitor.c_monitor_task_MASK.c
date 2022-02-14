
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ len; int buf; } ;
typedef TYPE_1__ packet_t ;
typedef scalar_t__ os_param_t ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int,int ) ;
 int * FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,int ,scalar_t__) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_8(os_param_t VAR_3, uint8_t VAR_4)
{
  packet_t *VAR_5 = (packet_t *) VAR_3;
  (void) VAR_4;

  lua_State *VAR_6 = FUNC_3();

  if (VAR_2 != VAR_0) {
    FUNC_5(VAR_6, VAR_1, VAR_2);

    packet_t *VAR_7 = (packet_t *) FUNC_4(VAR_6, VAR_5->len + sizeof(packet_t));
    VAR_7->len = VAR_5->len;
    FUNC_7(VAR_7->buf, VAR_5->buf, VAR_5->len);
    FUNC_1(VAR_6, "wifi.packet");
    FUNC_6(VAR_6, -2);

    FUNC_0(VAR_5);

    FUNC_2(VAR_6, 1, 0);
  } else {
    FUNC_0(VAR_5);
  }
}
