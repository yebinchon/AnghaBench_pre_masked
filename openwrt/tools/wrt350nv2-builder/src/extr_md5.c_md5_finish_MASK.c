
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* count; int* abcd; } ;
typedef TYPE_1__ md5_state_t ;
typedef int md5_byte_t ;


 int FUNC_0 (TYPE_1__*,int const*,int) ;

void
FUNC_1(md5_state_t *VAR_0, md5_byte_t VAR_1[16])
{
    static const md5_byte_t VAR_2[64] = {
 0x80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
    };
    md5_byte_t VAR_3[8];
    int VAR_4;


    for (VAR_4 = 0; VAR_4 < 8; ++VAR_4)
 VAR_3[VAR_4] = (md5_byte_t)(VAR_0->count[VAR_4 >> 2] >> ((VAR_4 & 3) << 3));

    FUNC_0(VAR_0, VAR_2, ((55 - (VAR_0->count[0] >> 3)) & 63) + 1);

    FUNC_0(VAR_0, VAR_3, 8);
    for (VAR_4 = 0; VAR_4 < 16; ++VAR_4)
 VAR_1[VAR_4] = (md5_byte_t)(VAR_0->abcd[VAR_4 >> 2] >> ((VAR_4 & 3) << 3));
}
