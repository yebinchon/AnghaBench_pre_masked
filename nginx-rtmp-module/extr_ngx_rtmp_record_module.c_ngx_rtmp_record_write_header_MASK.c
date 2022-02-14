
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_file_t ;
typedef int flv_header ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int*,int,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_file_t *VAR_2)
{
    static u_char VAR_3[] = {
        0x46,
        0x4c,
        0x56,
        0x01,
        0x05,
        0x00,
        0x00,
        0x00,
        0x09,
        0x00,
        0x00,
        0x00,
        0x00
    };

    return FUNC_0(VAR_2, VAR_3, sizeof(VAR_3), 0) == VAR_0
           ? VAR_0
           : VAR_1;
}
