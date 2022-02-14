
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct comclassredirect_data {int miscmask; scalar_t__ miscstatusdocprint; scalar_t__ miscstatusthumbnail; scalar_t__ miscstatuscontent; scalar_t__ miscstatusicon; scalar_t__ miscstatus; } ;
typedef enum comclass_miscfields { ____Placeholder_comclass_miscfields } comclass_miscfields ;
typedef int data ;
struct TYPE_3__ {int cbSize; scalar_t__ lpData; } ;
typedef scalar_t__ DWORD ;
typedef int CLSID ;
typedef int BOOL ;
typedef TYPE_1__ ACTCTX_SECTION_KEYED_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,int ,int const*,TYPE_1__*) ;





 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;

BOOL FUNC_2(const CLSID *VAR_3, DWORD VAR_4, DWORD *VAR_5)
{
    ACTCTX_SECTION_KEYED_DATA VAR_6;

    VAR_6.cbSize = sizeof(VAR_6);
    if (FUNC_0(0, ((void*)0), VAR_0,
                              VAR_3, &VAR_6))
    {
        struct comclassredirect_data *VAR_7 = (struct comclassredirect_data*)VAR_6.lpData;
        enum comclass_miscfields VAR_8 = FUNC_1(VAR_4);

        if (!(VAR_7->miscmask & VAR_8))
        {
            if (!(VAR_7->miscmask & 132))
            {
                *VAR_5 = 0;
                return VAR_2;
            }
            VAR_8 = 132;
        }

        switch (VAR_8)
        {
        case 132:
            *VAR_5 = VAR_7->miscstatus;
            break;
        case 129:
            *VAR_5 = VAR_7->miscstatusicon;
            break;
        case 131:
            *VAR_5 = VAR_7->miscstatuscontent;
            break;
        case 128:
            *VAR_5 = VAR_7->miscstatusthumbnail;
            break;
        case 130:
            *VAR_5 = VAR_7->miscstatusdocprint;
            break;
        default:
           ;
        };

        return VAR_2;
    }
    else
        return VAR_1;
}
