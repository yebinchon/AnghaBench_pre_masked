
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_4__ {int * pstrName; int member_0; } ;
typedef TYPE_1__ PROPBAG2 ;
typedef int IPropertyBag2 ;
typedef scalar_t__ HRESULT ;
typedef int CLSID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int*) ;
 scalar_t__ FUNC_3 (int *,int,int,TYPE_1__*,int*) ;
 scalar_t__ FUNC_4 (int const*,int *) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (int *,int ,TYPE_1__*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_9(const CLSID* VAR_10, IPropertyBag2 *VAR_11)
{
    HRESULT VAR_12;
    ULONG VAR_13 = 0;
    ULONG VAR_14 = 0;
    PROPBAG2 VAR_15[64] = {{0}};
    int VAR_16;


    {
        VAR_12 = FUNC_2(VAR_11, &VAR_13);
        FUNC_7(FUNC_5(VAR_12), "Reading property count, hr=%x\n", VAR_12);
    }


    {
        VAR_12 = FUNC_3(VAR_11, VAR_13, 1, VAR_15, &VAR_14);
        FUNC_7(VAR_12 == VAR_5, "IPropertyBag2::GetPropertyInfo - iProperty out of bounce handled wrong, hr=%x\n", VAR_12);

        VAR_12 = FUNC_3(VAR_11, 0, VAR_13+1, VAR_15, &VAR_14);
        FUNC_7(VAR_12 == VAR_5, "IPropertyBag2::GetPropertyInfo - cProperty out of bounce handled wrong, hr=%x\n", VAR_12);

        if (VAR_13 == 0)
        {
            VAR_14 = VAR_13;
            VAR_12 = VAR_4;
        }
        else
        {
            VAR_12 = FUNC_3(VAR_11, 0, FUNC_6(64, VAR_13), VAR_15, &VAR_14);
            FUNC_7(FUNC_5(VAR_12), "Reading infos from property bag failed, hr=%x\n", VAR_12);
        }

        if (FUNC_1(VAR_12))
            return;

        FUNC_7(VAR_13 == VAR_14, "Mismatch of property count (IPropertyBag2::CountProperties=%i, IPropertyBag2::GetPropertyInfo=%i)\n",
           (int)VAR_13, (int)VAR_14);
    }

    if (FUNC_4(VAR_10, &VAR_3))
        FUNC_8(VAR_11, VAR_9, VAR_15, VAR_14);
    else if (FUNC_4(VAR_10, &VAR_2))
        FUNC_8(VAR_11, VAR_8, VAR_15, VAR_14);
    else if (FUNC_4(VAR_10, &VAR_1))
        FUNC_8(VAR_11, VAR_7, VAR_15, VAR_14);
    else if (FUNC_4(VAR_10, &VAR_0))
        FUNC_8(VAR_11, VAR_6, VAR_15, VAR_14);

    for (VAR_16=0; VAR_16 < VAR_14; VAR_16++)
    {
        FUNC_7(VAR_15[VAR_16].pstrName != ((void*)0), "Unset property name in output of IPropertyBag2::GetPropertyInfo\n");
        FUNC_0(VAR_15[VAR_16].pstrName);
    }
}
