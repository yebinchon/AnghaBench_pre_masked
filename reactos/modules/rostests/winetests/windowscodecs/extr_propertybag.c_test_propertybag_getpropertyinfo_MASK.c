
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_3__ {scalar_t__ vt; scalar_t__ dwType; int pstrName; } ;
typedef TYPE_1__ PROPBAG2 ;
typedef int IPropertyBag2 ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,scalar_t__,TYPE_1__*,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int,char*,scalar_t__,...) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_6(IPropertyBag2 *VAR_7, ULONG VAR_8)
{
    HRESULT VAR_9;
    PROPBAG2 VAR_10[2];
    ULONG VAR_11;


    VAR_9 = FUNC_2(VAR_7, VAR_8, 1, VAR_10, &VAR_11);
    FUNC_4(VAR_9 == VAR_4,
       "GetPropertyInfo handled iProperty out of bounce wrong, hr=%x\n", VAR_9);


    VAR_9 = FUNC_2(VAR_7, 0, VAR_8+1, VAR_10, &VAR_11);
    FUNC_4(VAR_9 == VAR_4,
       "GetPropertyInfo handled cProperty out of bounce wrong, hr=%x\n", VAR_9);


    if (VAR_8 == 0)
        return;

    VAR_9 = FUNC_2(VAR_7, 0, VAR_8, VAR_10, &VAR_11);
    FUNC_4(VAR_9 == VAR_1, "GetPropertyInfo failed, hr=%x\n", VAR_9);
    if (FUNC_1(VAR_9))
        return;

    FUNC_4(VAR_8 == VAR_11,
       "GetPropertyInfo returned unexpected property count, %i != %i)\n",
       VAR_8, VAR_11);

    if(VAR_8 != 2)
        return;

    FUNC_4(VAR_10[0].vt == VAR_3, "Invalid variant type, pb[0].vt=%x\n", VAR_10[0].vt);
    FUNC_4(VAR_10[0].dwType == VAR_0, "Invalid variant type, pb[0].dwType=%x\n", VAR_10[0].dwType);
    FUNC_4(FUNC_3(VAR_10[0].pstrName, VAR_5) == 0, "Invalid property name, pb[0].pstrName=%s\n", FUNC_5(VAR_10[0].pstrName));
    FUNC_0(VAR_10[0].pstrName);

    FUNC_4(VAR_10[1].vt == VAR_2, "Invalid variant type, pb[1].vt=%x\n", VAR_10[1].vt);
    FUNC_4(VAR_10[1].dwType == VAR_0, "Invalid variant type, pb[1].dwType=%x\n", VAR_10[1].dwType);
    FUNC_4(FUNC_3(VAR_10[1].pstrName, VAR_6) == 0, "Invalid property name, pb[1].pstrName=%s\n", FUNC_5(VAR_10[1].pstrName));
    FUNC_0(VAR_10[1].pstrName);
}
