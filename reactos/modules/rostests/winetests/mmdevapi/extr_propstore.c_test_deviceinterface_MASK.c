
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; } ;
struct TYPE_10__ {int member_0; int member_1; int member_2; TYPE_3__ member_3; } ;
struct TYPE_13__ {int member_1; TYPE_2__ member_0; } ;
struct TYPE_9__ {int pwszVal; } ;
struct TYPE_12__ {scalar_t__ vt; TYPE_1__ u; } ;
typedef TYPE_4__ PROPVARIANT ;
typedef TYPE_5__ PROPERTYKEY ;
typedef int IPropertyStore ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,TYPE_5__ const*,TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int,char*,scalar_t__) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(IPropertyStore *VAR_3)
{
    HRESULT VAR_4;
    PROPVARIANT VAR_5;

    static const PROPERTYKEY VAR_6 = {
        {0x233164c8, 0x1b2c, 0x4c7d, {0xbc, 0x68, 0xb6, 0x71, 0x68, 0x7a, 0x25, 0x67}}, 1
    };

    VAR_5.vt = VAR_1;
    VAR_4 = FUNC_0(VAR_3, &VAR_6, &VAR_5);
    FUNC_2(VAR_4 == VAR_0, "GetValue failed: %08x\n", VAR_4);
    FUNC_2(VAR_5.vt == VAR_2, "Got wrong variant type: 0x%x\n", VAR_5.vt);
    FUNC_3("device interface: %s\n", FUNC_4(VAR_5.u.pwszVal));
    FUNC_1(&VAR_5);
}
