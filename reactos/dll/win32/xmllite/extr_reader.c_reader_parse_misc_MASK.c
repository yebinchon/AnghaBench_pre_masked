
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int resumestate; } ;
typedef TYPE_1__ xmlreader ;
typedef int WCHAR ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;

 int VAR_1 ;



 int VAR_2 ;
 scalar_t__ FUNC_2 (int const) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int * FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_9(xmlreader *VAR_4)
{
    HRESULT VAR_5 = VAR_0;

    if (VAR_4->resumestate != VAR_1)
    {
        VAR_5 = FUNC_5(VAR_4);
        if (FUNC_1(VAR_5)) return VAR_5;


        switch (VAR_4->resumestate)
        {
        case 129:
        case 130:
            return FUNC_7(VAR_4);
        case 131:
            return FUNC_6(VAR_4);
        case 128:
            return FUNC_8(VAR_4);
        default:
            FUNC_0("unknown resume state %d\n", VAR_4->resumestate);
        }
    }

    while (1)
    {
        const WCHAR *VAR_6 = FUNC_4(VAR_4);

        if (FUNC_2(*VAR_6))
            VAR_5 = FUNC_8(VAR_4);
        else if (!FUNC_3(VAR_4, VAR_2))
            VAR_5 = FUNC_6(VAR_4);
        else if (!FUNC_3(VAR_4, VAR_3))
            VAR_5 = FUNC_7(VAR_4);
        else
            break;

        if (VAR_5 != VAR_0) return VAR_5;
    }

    return VAR_5;
}
