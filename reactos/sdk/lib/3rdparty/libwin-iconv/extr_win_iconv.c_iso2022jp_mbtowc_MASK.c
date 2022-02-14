
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int const ushort ;
typedef int uchar ;
struct TYPE_5__ {int const* esc; int esc_len; int cs; int len; } ;
typedef TYPE_1__ iso2022_esc_t ;
struct TYPE_6__ {scalar_t__ mode; int codepage; } ;
typedef TYPE_2__ csconv_t ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int *,int,char const*,int*,int *,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int const* VAR_8 ;
 int const* VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_4 (char*,int const*,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*,int const*,int) ;

__attribute__((used)) static int
FUNC_7(csconv_t *VAR_11, const uchar *VAR_12, int VAR_13, ushort *VAR_14, int *VAR_15)
{
    iso2022_esc_t *VAR_16 = VAR_10;
    char VAR_17[VAR_6];
    int VAR_18;
    HRESULT VAR_19;
    DWORD VAR_20 = 0;
    int VAR_21;
    int VAR_22;
    int VAR_23;
    int VAR_24;
    int VAR_25;

    if (VAR_12[0] == 0x1B)
    {
        for (VAR_25 = 0; VAR_16[VAR_25].esc != ((void*)0); ++VAR_25)
        {
            VAR_22 = VAR_16[VAR_25].esc_len;
            if (VAR_13 < VAR_22)
            {
                if (FUNC_6((char *)VAR_12, VAR_16[VAR_25].esc, VAR_13) == 0)
                    return FUNC_5(VAR_1);
            }
            else
            {
                if (FUNC_6((char *)VAR_12, VAR_16[VAR_25].esc, VAR_22) == 0)
                {
                    VAR_11->mode = FUNC_1(VAR_16[VAR_25].cs, VAR_4);
                    *VAR_15 = 0;
                    return VAR_22;
                }
            }
        }

        return FUNC_5(VAR_0);
    }
    else if (VAR_12[0] == VAR_9[0])
    {
        VAR_11->mode = FUNC_1(FUNC_2(VAR_11->mode), VAR_5);
        *VAR_15 = 0;
        return 1;
    }
    else if (VAR_12[0] == VAR_8[0])
    {
        VAR_11->mode = FUNC_1(FUNC_2(VAR_11->mode), VAR_4);
        *VAR_15 = 0;
        return 1;
    }

    VAR_23 = FUNC_2(VAR_11->mode);
    VAR_24 = FUNC_3(VAR_11->mode);


    if (VAR_12[0] < 0x20)
    {
        VAR_23 = VAR_2;
        VAR_24 = VAR_4;
    }

    VAR_21 = VAR_16[VAR_23].len;
    if (VAR_13 < VAR_21)
        return FUNC_5(VAR_1);
    for (VAR_25 = 0; VAR_25 < VAR_21; ++VAR_25)
        if (!(VAR_12[VAR_25] < 0x80))
            return FUNC_5(VAR_0);
    VAR_22 = VAR_16[VAR_23].esc_len;
    FUNC_4(VAR_17, VAR_16[VAR_23].esc, VAR_22);
    if (VAR_24 == VAR_5)
    {
        FUNC_4(VAR_17 + VAR_22, VAR_9, 1);
        VAR_22 += 1;
    }
    FUNC_4(VAR_17 + VAR_22, VAR_12, VAR_21);

    if ((VAR_11->codepage == 50220 || VAR_11->codepage == 50221
                || VAR_11->codepage == 50222) && VAR_24 == VAR_5)
    {


        VAR_22 = VAR_16[VAR_3].esc_len;
        FUNC_4(VAR_17, VAR_16[VAR_3].esc, VAR_22);
        FUNC_4(VAR_17 + VAR_22, VAR_12, VAR_21);
    }

    VAR_18 = VAR_21 + VAR_22;
    VAR_19 = FUNC_0(&VAR_20, VAR_11->codepage,
            (const char *)VAR_17, &VAR_18, (wchar_t *)VAR_14, VAR_15);
    if (VAR_19 != VAR_7 || VAR_18 != VAR_21 + VAR_22)
        return FUNC_5(VAR_0);



    if (VAR_14[0] == VAR_12[0]
            && VAR_11->mode != FUNC_1(VAR_2, VAR_4))
        return FUNC_5(VAR_0);


    if (VAR_11->mode != FUNC_1(VAR_23, VAR_24))
        VAR_11->mode = FUNC_1(VAR_23, VAR_24);

    return VAR_21;
}
