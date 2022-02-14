
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int u_char ;
typedef int ngx_int_t ;
struct TYPE_3__ {scalar_t__ end; int last; } ;
typedef TYPE_1__ ngx_buf_t ;
typedef int bytes ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_buf_t *VAR_2, uint16_t VAR_3)
{
    u_char VAR_4[2];

    VAR_4[0] = ((uint32_t) VAR_3 >> 8) & 0xFF;
    VAR_4[1] = (uint32_t) VAR_3 & 0xFF;

    if (VAR_2->last + sizeof(VAR_4) > VAR_2->end) {
        return VAR_0;
    }

    VAR_2->last = FUNC_0(VAR_2->last, VAR_4, sizeof(VAR_4));

    return VAR_1;
}
