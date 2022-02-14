
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* r; scalar_t__* h; } ;
typedef TYPE_1__ poly1305_internal ;


 int FUNC_0 (unsigned char const*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, const unsigned char VAR_1[16])
{
    poly1305_internal *VAR_2 = (poly1305_internal *) VAR_0;


    VAR_2->h[0] = 0;
    VAR_2->h[1] = 0;
    VAR_2->h[2] = 0;


    VAR_2->r[0] = FUNC_0(&VAR_1[0]) & 0x0ffffffc0fffffff;
    VAR_2->r[1] = FUNC_0(&VAR_1[8]) & 0x0ffffffc0ffffffc;
}
