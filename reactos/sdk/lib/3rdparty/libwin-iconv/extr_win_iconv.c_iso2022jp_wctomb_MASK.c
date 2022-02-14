
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int ushort ;
typedef char uchar ;
struct TYPE_5__ {char* esc; int esc_len; int cs; int len; } ;
typedef TYPE_1__ iso2022_esc_t ;
struct TYPE_6__ {scalar_t__ mode; int codepage; } ;
typedef TYPE_2__ csconv_t ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int *,int ,int const*,int*,char*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_7(csconv_t *VAR_10, ushort *VAR_11, int VAR_12, uchar *VAR_13, int VAR_14)
{
    iso2022_esc_t *VAR_15 = VAR_9;
    char VAR_16[VAR_5];
    int VAR_17 = VAR_5;
    int VAR_18 = VAR_12;
    HRESULT VAR_19;
    DWORD VAR_20 = 0;
    int VAR_21;
    int VAR_22;
    int VAR_23;
    int VAR_24;
    int VAR_25;







    VAR_19 = FUNC_0(&VAR_20, VAR_10->codepage,
            (const wchar_t *)VAR_11, &VAR_12, VAR_16, &VAR_17);
    if (VAR_19 != VAR_6 || VAR_18 != VAR_12)
        return FUNC_5(VAR_1);
    else if (VAR_14 < VAR_17)
        return FUNC_5(VAR_0);

    if (VAR_17 == 1)
    {
        VAR_23 = VAR_2;
        VAR_22 = 0;
    }
    else
    {
        for (VAR_25 = 1; VAR_15[VAR_25].esc != ((void*)0); ++VAR_25)
        {
            VAR_22 = VAR_15[VAR_25].esc_len;
            if (FUNC_6(VAR_16, VAR_15[VAR_25].esc, VAR_22) == 0)
            {
                VAR_23 = VAR_15[VAR_25].cs;
                break;
            }
        }
        if (VAR_15[VAR_25].esc == ((void*)0))

            return FUNC_5(VAR_1);
    }

    VAR_24 = VAR_3;
    if (VAR_16[VAR_22] == VAR_8[0])
    {
        VAR_24 = VAR_4;
        VAR_22 += 1;
    }

    VAR_21 = VAR_15[VAR_23].len;



    if (VAR_23 == VAR_2 && !(VAR_11[0] < 0x80))
        return FUNC_5(VAR_1);
    else if (VAR_17 < VAR_22 + VAR_21)
        return FUNC_5(VAR_1);

    if (VAR_10->mode == FUNC_1(VAR_23, VAR_24))
    {

        if (VAR_22 != 0)
            FUNC_4(VAR_16, VAR_16 + VAR_22, VAR_21);
        VAR_22 = 0;
    }
    else
    {
        if (VAR_23 == VAR_2)
        {
            VAR_22 = VAR_15[VAR_2].esc_len;
            FUNC_4(VAR_16 + VAR_22, VAR_16, VAR_21);
            FUNC_3(VAR_16, VAR_15[VAR_2].esc, VAR_22);
        }
        if (FUNC_2(VAR_10->mode) == VAR_4)
        {

            FUNC_4(VAR_16 + 1, VAR_16, VAR_21 + VAR_22);
            FUNC_3(VAR_16, VAR_7, 1);
            VAR_22 += 1;
        }
    }

    if (VAR_14 < VAR_21 + VAR_22)
        return FUNC_5(VAR_0);
    FUNC_3(VAR_13, VAR_16, VAR_21 + VAR_22);
    VAR_10->mode = FUNC_1(VAR_23, VAR_24);
    return VAR_21 + VAR_22;
}
