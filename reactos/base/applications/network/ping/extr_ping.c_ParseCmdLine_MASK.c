
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* ULONG ;
typedef int UCHAR ;
struct TYPE_2__ {int Ttl; int Flags; } ;
typedef int* PWSTR ;
typedef void* BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,...) ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__ VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 int* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 int VAR_25 ;
 void* FUNC_1 (int*,int *,int ) ;

__attribute__((used)) static
BOOL
FUNC_2(int VAR_26, PWSTR VAR_27[])
{
    int VAR_28;

    if (VAR_26 < 2)
    {
        FUNC_0(VAR_20, VAR_10);
        return VAR_3;
    }

    for (VAR_28 = 1; VAR_28 < VAR_26; VAR_28++)
    {
        if (VAR_27[VAR_28][0] == L'-' || VAR_27[VAR_28][0] == L'/')
        {
            switch (VAR_27[VAR_28][1])
            {
            case L't':
                VAR_16 = VAR_21;
                break;

            case L'a':
                VAR_18 = VAR_21;
                break;

            case L'n':
            {
                if (VAR_28 + 1 < VAR_26)
                {
                    VAR_16 = VAR_3;
                    VAR_15 = FUNC_1(VAR_27[++VAR_28], ((void*)0), 0);
                    if (VAR_15 == 0)
                    {
                        FUNC_0(VAR_19, VAR_7, VAR_27[VAR_28 - 1], 1, VAR_25);
                        return VAR_3;
                    }
                }
                else
                {
                    FUNC_0(VAR_19, VAR_9, VAR_27[VAR_28]);
                    return VAR_3;
                }
                break;
            }

            case L'l':
            {
                if (VAR_28 + 1 < VAR_26)
                {
                    VAR_17 = FUNC_1(VAR_27[++VAR_28], ((void*)0), 0);
                    if (VAR_17 > VAR_14)
                    {
                        FUNC_0(VAR_19, VAR_7, VAR_27[VAR_28 - 1], 0, VAR_14);
                        return VAR_3;
                    }
                }
                else
                {
                    FUNC_0(VAR_19, VAR_9, VAR_27[VAR_28]);
                    return VAR_3;
                }
                break;
            }

            case L'f':
            {
                if (VAR_4 == VAR_1)
                {
                    FUNC_0(VAR_19, VAR_11, VAR_27[VAR_28], L"IPv4");
                    return VAR_3;
                }

                VAR_4 = VAR_0;
                VAR_13.Flags |= VAR_12;
                break;
            }

            case L'i':
            {
                if (VAR_28 + 1 < VAR_26)
                {
                    ULONG VAR_29 = FUNC_1(VAR_27[++VAR_28], ((void*)0), 0);

                    if ((VAR_29 == 0) || (VAR_29 > VAR_24))
                    {
                        FUNC_0(VAR_19, VAR_7, VAR_27[VAR_28 - 1], 1, VAR_24);
                        return VAR_3;
                    }

                    VAR_13.Ttl = (UCHAR)VAR_29;
                }
                else
                {
                    FUNC_0(VAR_19, VAR_9, VAR_27[VAR_28]);
                    return VAR_3;
                }
                break;
            }

            case L'v':
            {
                if (VAR_4 == VAR_1)
                {
                    FUNC_0(VAR_19, VAR_11, VAR_27[VAR_28], L"IPv4");
                    return VAR_3;
                }

                VAR_4 = VAR_0;

                if (VAR_28 + 1 < VAR_26)
                {

                    VAR_28++;
                }
                else
                {
                    FUNC_0(VAR_19, VAR_9, VAR_27[VAR_28]);
                    return VAR_3;
                }

                break;
            }

            case L'w':
            {
                if (VAR_28 + 1 < VAR_26)
                {
                    VAR_23 = FUNC_1(VAR_27[++VAR_28], ((void*)0), 0);
                    if (VAR_23 < VAR_2)
                        VAR_23 = VAR_2;
                }
                else
                {
                    FUNC_0(VAR_19, VAR_9, VAR_27[VAR_28]);
                    return VAR_3;
                }
                break;
            }

            case L'R':
            {
                if (VAR_4 == VAR_0)
                {
                    FUNC_0(VAR_19, VAR_11, VAR_27[VAR_28], L"IPv6");
                    return VAR_3;
                }

                VAR_4 = VAR_1;


                break;
            }

            case L'4':
            {
                if (VAR_4 == VAR_1)
                {
                    FUNC_0(VAR_19, VAR_11, VAR_27[VAR_28], L"IPv4");
                    return VAR_3;
                }

                VAR_4 = VAR_0;
                break;
            }

            case L'6':
            {
                if (VAR_4 == VAR_0)
                {
                    FUNC_0(VAR_19, VAR_11, VAR_27[VAR_28], L"IPv6");
                    return VAR_3;
                }

                VAR_4 = VAR_1;
                break;
            }

            case L'?':
                FUNC_0(VAR_20, VAR_10);
                return VAR_3;

            default:
                FUNC_0(VAR_19, VAR_5, VAR_27[VAR_28]);
                FUNC_0(VAR_19, VAR_10);
                return VAR_3;
            }
        }
        else
        {
            if (VAR_22 != ((void*)0))
            {
                FUNC_0(VAR_19, VAR_6, VAR_27[VAR_28]);
                return VAR_3;
            }

            VAR_22 = VAR_27[VAR_28];
        }
    }

    if (VAR_22 == ((void*)0))
    {
        FUNC_0(VAR_19, VAR_8);
        return VAR_3;
    }

    return VAR_21;
}
