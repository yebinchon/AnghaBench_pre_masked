
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int* bits; } ;
struct TYPE_5__ {int length; TYPE_1__ u; } ;
typedef TYPE_2__ RECharSet ;
typedef int BYTE ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(RECharSet *VAR_0, UINT VAR_1, UINT VAR_2)
{
    UINT VAR_3;

    UINT VAR_4 = VAR_1 >> 3;
    UINT VAR_5 = VAR_2 >> 3;

    FUNC_0(VAR_2 <= VAR_0->length && VAR_1 <= VAR_2);

    VAR_1 &= 0x7;
    VAR_2 &= 0x7;

    if (VAR_4 == VAR_5) {
        VAR_0->u.bits[VAR_4] |= ((BYTE)0xFF >> (7 - (VAR_2 - VAR_1))) << VAR_1;
    } else {
        VAR_0->u.bits[VAR_4] |= 0xFF << VAR_1;
        for (VAR_3 = VAR_4 + 1; VAR_3 < VAR_5; VAR_3++)
            VAR_0->u.bits[VAR_3] = 0xFF;
        VAR_0->u.bits[VAR_5] |= (BYTE)0xFF >> (7 - VAR_2);
    }
}
