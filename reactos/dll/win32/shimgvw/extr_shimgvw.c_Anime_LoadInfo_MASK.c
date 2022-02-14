
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int WORD ;
typedef scalar_t__ UINT ;
struct TYPE_8__ {scalar_t__ value; } ;
typedef TYPE_1__ PropertyItem ;
typedef TYPE_1__ GUID ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__,TYPE_1__*) ;
 int FUNC_2 (int ,int ,scalar_t__*) ;
 int FUNC_3 (int ,TYPE_1__*,scalar_t__*) ;
 int FUNC_4 (int ,scalar_t__*) ;
 int FUNC_5 (int ,TYPE_1__*,scalar_t__) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 scalar_t__ FUNC_10 (scalar_t__) ;

__attribute__((used)) static BOOL FUNC_11(void)
{
    GUID *VAR_10;
    UINT VAR_11 = 0;
    UINT VAR_12;
    UINT VAR_13;
    PropertyItem *VAR_14;

    FUNC_0();
    FUNC_6(VAR_5, VAR_0);

    if (!VAR_6)
        return VAR_1;

    FUNC_4(VAR_6, &VAR_11);
    if (VAR_11)
    {
        VAR_10 = (GUID *)FUNC_8(VAR_11, sizeof(GUID));
        if (VAR_10)
        {
            FUNC_5(VAR_6, VAR_10, VAR_11);
            FUNC_3(VAR_6, VAR_10, &VAR_13);
            VAR_7 = VAR_13;
            FUNC_9(VAR_10);
        }
    }

    VAR_13 = 0;
    FUNC_2(VAR_6, VAR_3, &VAR_13);
    VAR_12 = VAR_13;
    if (VAR_12)
    {
        VAR_9 = (PropertyItem *)FUNC_10(VAR_12);
        FUNC_1(VAR_6, VAR_3, VAR_12, VAR_9);
    }

    VAR_13 = 0;
    FUNC_2(VAR_6, VAR_4, &VAR_13);
    VAR_12 = VAR_13;
    if (VAR_12)
    {
        VAR_14 = (PropertyItem *)FUNC_10(VAR_12);
        if (VAR_14)
        {
            if (FUNC_1(VAR_6, VAR_4, VAR_12, VAR_14) == VAR_2)
            {
                VAR_8 = *(WORD *)VAR_14->value;
            }
            FUNC_9(VAR_14);
        }
    }

    if (VAR_9)
    {
        FUNC_7(VAR_5, VAR_0, 0, ((void*)0));
    }

    return VAR_9 != ((void*)0);
}
