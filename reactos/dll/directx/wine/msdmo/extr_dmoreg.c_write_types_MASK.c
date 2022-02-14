
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int subtype; int type; } ;
typedef int * LPCWSTR ;
typedef int LONG ;
typedef int HRESULT ;
typedef int HKEY ;
typedef int DWORD ;
typedef TYPE_1__ DMO_PARTIAL_MEDIATYPE ;
typedef int BYTE ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ,int *,int ,int ,int *,int *,int *) ;
 int FUNC_4 (int ,int *,int ,int ,int const*,int) ;

__attribute__((used)) static HRESULT FUNC_5(HKEY VAR_4, LPCWSTR VAR_5, const DMO_PARTIAL_MEDIATYPE* VAR_6, DWORD VAR_7)
{
    LONG VAR_8;

    if (VAR_1 > 5)
    {
        VAR_8 = FUNC_4(VAR_4, VAR_5, 0, VAR_2, (const BYTE*) VAR_6,
                          VAR_7* sizeof(DMO_PARTIAL_MEDIATYPE));
    }
    else
    {
        HKEY VAR_9,VAR_10,VAR_11;
        DWORD VAR_12 = 0;
        WCHAR VAR_13[64];

        VAR_8 = FUNC_3(VAR_4, VAR_5, 0, ((void*)0), VAR_3,
                               VAR_0, ((void*)0), &VAR_9, ((void*)0));
        if (VAR_8)
            return FUNC_1(VAR_8);

        while (VAR_12 < VAR_7)
        {
            FUNC_0(VAR_13,&VAR_6[VAR_12].type);
            VAR_8 = FUNC_3(VAR_9, VAR_13, 0, ((void*)0),
                        VAR_3, VAR_0, ((void*)0), &VAR_10, ((void*)0));
            FUNC_0(VAR_13,&VAR_6[VAR_12].subtype);
            VAR_8 = FUNC_3(VAR_10, VAR_13, 0, ((void*)0),
                        VAR_3, VAR_0, ((void*)0), &VAR_11, ((void*)0));
            FUNC_2(VAR_11);
            FUNC_2(VAR_10);
            VAR_12 ++;
        }
        FUNC_2(VAR_9);
    }

    return FUNC_1(VAR_8);
}
