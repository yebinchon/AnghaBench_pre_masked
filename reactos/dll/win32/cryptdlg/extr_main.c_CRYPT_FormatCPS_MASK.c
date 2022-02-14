
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {int cbData; scalar_t__ pbData; } ;
struct TYPE_6__ {TYPE_1__ Value; } ;
typedef int LPWSTR ;
typedef int LPCWSTR ;
typedef int DWORD ;
typedef TYPE_2__ CERT_NAME_VALUE ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int const*,int,int ,int *,TYPE_2__**,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static BOOL FUNC_5(DWORD VAR_8,
 DWORD VAR_9, const BYTE *VAR_10, DWORD VAR_11,
 WCHAR *VAR_12, DWORD *VAR_13)
{
    BOOL VAR_14;
    DWORD VAR_15, VAR_16 = 1;
    CERT_NAME_VALUE *VAR_17;

    if ((VAR_14 = FUNC_0(VAR_8, VAR_4,
     VAR_10, VAR_11, VAR_0, ((void*)0), &VAR_17, &VAR_15)))
    {
        LPCWSTR VAR_18;
        DWORD VAR_19;

        if (VAR_9 & VAR_1)
            VAR_18 = VAR_6;
        else
            VAR_18 = VAR_5;

        VAR_19 = FUNC_4(VAR_18);

        if (VAR_9 & VAR_1)
        {
            VAR_16 += 3 * FUNC_4(VAR_7);
            if (VAR_12 && *VAR_13 >= VAR_16)
            {
                FUNC_3(VAR_12, VAR_7);
                VAR_12 += FUNC_4(VAR_7);
                FUNC_3(VAR_12, VAR_7);
                VAR_12 += FUNC_4(VAR_7);
                FUNC_3(VAR_12, VAR_7);
                VAR_12 += FUNC_4(VAR_7);
            }
        }
        VAR_16 += VAR_17->Value.cbData / sizeof(WCHAR);
        if (VAR_12 && *VAR_13 >= VAR_16)
        {
            FUNC_3(VAR_12, (LPWSTR)VAR_17->Value.pbData);
            VAR_12 += VAR_17->Value.cbData / sizeof(WCHAR);
        }
        VAR_16 += VAR_19;
        if (VAR_12 && *VAR_13 >= VAR_16)
        {
            FUNC_3(VAR_12, VAR_18);
            VAR_12 += VAR_19;
        }
        FUNC_1(VAR_17);
        if (!VAR_12)
            *VAR_13 = VAR_16;
        else if (*VAR_13 < VAR_16)
        {
            *VAR_13 = VAR_16;
            FUNC_2(VAR_2);
            VAR_14 = VAR_3;
        }
        else
            *VAR_13 = VAR_16;
    }
    return VAR_14;
}
