
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int temp ;
struct TYPE_5__ {scalar_t__ pwszVal; } ;
struct TYPE_6__ {scalar_t__ vt; TYPE_1__ u; } ;
typedef TYPE_2__ PROPVARIANT ;
typedef int PROPERTYKEY ;
typedef int IPropertyStore ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int const*,TYPE_2__*) ;
 int const VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ,int ,scalar_t__,int,char*,int,int *,int *) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(IPropertyStore *VAR_8)
{
    HRESULT VAR_9;
    PROPVARIANT VAR_10;
    char VAR_11[128];
    VAR_11[sizeof(VAR_11)-1] = 0;

    VAR_10.vt = VAR_6;
    VAR_9 = FUNC_0(VAR_8, &VAR_4, &VAR_10);
    FUNC_3(VAR_9 == VAR_5, "Failed with %08x\n", VAR_9);
    FUNC_3(VAR_10.vt == VAR_7, "Value should be %i, is %i\n", VAR_7, VAR_10.vt);
    if (VAR_9 == VAR_5 && VAR_10.vt == VAR_7)
    {
        FUNC_2(VAR_0, 0, VAR_10.u.pwszVal, -1, VAR_11, sizeof(VAR_11)-1, ((void*)0), ((void*)0));
        FUNC_4("guid: %s\n", VAR_11);
        FUNC_1(&VAR_10);
    }

    VAR_10.vt = VAR_6;
    VAR_9 = FUNC_0(VAR_8, (const PROPERTYKEY*)&VAR_3, &VAR_10);
    FUNC_3(VAR_9 == VAR_5, "Failed with %08x\n", VAR_9);
    FUNC_3(VAR_10.vt == VAR_7 && VAR_10.u.pwszVal, "FriendlyName value had wrong type: 0x%x or was NULL\n", VAR_10.vt);
    FUNC_1(&VAR_10);

    VAR_10.vt = VAR_6;
    VAR_9 = FUNC_0(VAR_8, (const PROPERTYKEY*)&VAR_2, &VAR_10);
    FUNC_3(VAR_9 == VAR_5, "Failed with %08x\n", VAR_9);
    FUNC_3(VAR_10.vt == VAR_6, "Key should not be found\n");
    FUNC_1(&VAR_10);

    VAR_10.vt = VAR_6;
    VAR_9 = FUNC_0(VAR_8, (const PROPERTYKEY*)&VAR_1, &VAR_10);
    FUNC_3(VAR_9 == VAR_5, "Failed with %08x\n", VAR_9);
    FUNC_3(VAR_10.vt == VAR_6, "Key should not be found\n");
    FUNC_1(&VAR_10);
}
