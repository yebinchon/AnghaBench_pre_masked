
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* abcd; scalar_t__* count; } ;
typedef TYPE_1__ md5_state_t ;


 int VAR_0 ;

void
FUNC_0(md5_state_t *VAR_1)
{
    VAR_1->count[0] = VAR_1->count[1] = 0;
    VAR_1->abcd[0] = 0x67452301;
    VAR_1->abcd[1] = VAR_0 ^ 0x10325476;
    VAR_1->abcd[2] = VAR_0 ^ 0x67452301;
    VAR_1->abcd[3] = 0x10325476;
}
