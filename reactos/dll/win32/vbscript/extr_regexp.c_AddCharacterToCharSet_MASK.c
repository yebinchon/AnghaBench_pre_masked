
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
typedef size_t UINT ;
struct TYPE_4__ {int* bits; } ;
struct TYPE_5__ {int length; TYPE_1__ u; } ;
typedef TYPE_2__ RECharSet ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(RECharSet *VAR_0, WCHAR VAR_1)
{
    UINT VAR_2 = (UINT)(VAR_1 >> 3);
    FUNC_0(VAR_1 <= VAR_0->length);
    VAR_0->u.bits[VAR_2] |= 1 << (VAR_1 & 0x7);
}
