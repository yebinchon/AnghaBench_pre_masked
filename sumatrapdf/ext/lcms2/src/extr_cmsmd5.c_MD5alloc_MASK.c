
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * cmsHANDLE ;
typedef int cmsContext ;
struct TYPE_2__ {int* buf; scalar_t__* bits; } ;
typedef TYPE_1__ _cmsMD5 ;


 scalar_t__ FUNC_0 (int ,int) ;

__attribute__((used)) static
cmsHANDLE FUNC_1(cmsContext VAR_0)
{
    _cmsMD5* VAR_1 = (_cmsMD5*) FUNC_0(VAR_0, sizeof(_cmsMD5));
    if (VAR_1 == ((void*)0)) return ((void*)0);

    VAR_1->buf[0] = 0x67452301;
    VAR_1->buf[1] = 0xefcdab89;
    VAR_1->buf[2] = 0x98badcfe;
    VAR_1->buf[3] = 0x10325476;

    VAR_1->bits[0] = 0;
    VAR_1->bits[1] = 0;

    return (cmsHANDLE) VAR_1;
}
