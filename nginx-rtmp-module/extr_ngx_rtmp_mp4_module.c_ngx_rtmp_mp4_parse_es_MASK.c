
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int u_char ;
struct TYPE_6__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
typedef int ngx_int_t ;
struct TYPE_5__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int *,int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_rtmp_session_t *VAR_3, u_char *VAR_4, u_char *VAR_5)
{
    uint16_t VAR_6;
    uint8_t VAR_7;

    if (VAR_4 + 3 > VAR_5) {
        return VAR_0;
    }

    VAR_6 = FUNC_2(*(uint16_t *) VAR_4);
    VAR_4 += 2;

    VAR_7 = *(uint8_t *) VAR_4;
    ++VAR_4;

    if (VAR_7 & 0x80) {
        VAR_4 += 2;
    }

    if (VAR_7 & 0x40) {
        return VAR_2;
    }

    if (VAR_7 & 0x20) {
        VAR_4 += 2;
    }

    if (VAR_4 > VAR_5) {
        return VAR_0;
    }

    (void) VAR_6;

    FUNC_0(VAR_1, VAR_3->connection->log, 0,
                   "mp4: es descriptor es id=%i flags=%i",
                   (ngx_int_t) VAR_6, (ngx_int_t) VAR_7);

    return FUNC_1(VAR_3, VAR_4, VAR_5);
}
