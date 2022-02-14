
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ (* enumProps ) (void const*,scalar_t__) ;scalar_t__ (* getProp ) (void const*,scalar_t__,int const*,scalar_t__*) ;} ;
typedef TYPE_1__ WINE_CONTEXT_INTERFACE ;
struct TYPE_6__ {int unknown; scalar_t__ cb; scalar_t__ propID; } ;
typedef TYPE_2__ WINE_CERT_PROP_HEADER ;
typedef int const* LPBYTE ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (int const*) ;
 int * FUNC_2 (int const*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,void const*,TYPE_1__ const*,scalar_t__,scalar_t__,int *,scalar_t__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int *,int const*,scalar_t__) ;
 scalar_t__ FUNC_7 (void const*,scalar_t__) ;
 scalar_t__ FUNC_8 (void const*,scalar_t__,int const*,scalar_t__*) ;
 scalar_t__ FUNC_9 (void const*,scalar_t__) ;
 scalar_t__ FUNC_10 (void const*,scalar_t__,int const*,scalar_t__*) ;
 scalar_t__ FUNC_11 (void const*,scalar_t__,int const*,scalar_t__*) ;

__attribute__((used)) static BOOL FUNC_12(const void *VAR_3,
 const BYTE *VAR_4, DWORD VAR_5, DWORD VAR_6,
 const WINE_CONTEXT_INTERFACE *VAR_7, DWORD VAR_8, BOOL VAR_9,
 BYTE *VAR_10, DWORD *VAR_11)
{
    BOOL VAR_12;

    FUNC_5("(%p, %p, %08x, %d, %p, %p)\n", VAR_3, VAR_7, VAR_8,
     VAR_9, VAR_10, VAR_11);

    if (VAR_3)
    {
        DWORD VAR_13 = sizeof(WINE_CERT_PROP_HEADER) + VAR_5;
        DWORD VAR_14 = 0;

        VAR_12 = VAR_2;
        do {
            VAR_14 = VAR_7->enumProps(VAR_3, VAR_14);
            if (VAR_14 && (!VAR_9 || !FUNC_3(VAR_14)))
            {
                DWORD VAR_15 = 0;

                VAR_12 = VAR_7->getProp(VAR_3, VAR_14, ((void*)0), &VAR_15);
                if (VAR_12)
                    VAR_13 += sizeof(WINE_CERT_PROP_HEADER) + VAR_15;
            }
        } while (VAR_12 && VAR_14 != 0);

        if (!VAR_10)
        {
            *VAR_11 = VAR_13;
            VAR_12 = VAR_2;
        }
        else if (*VAR_11 < VAR_13)
        {
            *VAR_11 = VAR_13;
            FUNC_4(VAR_0);
            VAR_12 = VAR_1;
        }
        else
        {
            WINE_CERT_PROP_HEADER *VAR_16;
            DWORD VAR_17 = 0;
            LPBYTE VAR_18 = ((void*)0);

            VAR_14 = 0;
            do {
                VAR_14 = VAR_7->enumProps(VAR_3, VAR_14);
                if (VAR_14 && (!VAR_9 || !FUNC_3(VAR_14)))
                {
                    DWORD VAR_19 = 0;

                    VAR_12 = VAR_7->getProp(VAR_3, VAR_14, ((void*)0),
                     &VAR_19);
                    if (VAR_12)
                    {
                        if (VAR_17 < VAR_19)
                        {
                            if (VAR_18)
                                VAR_18 = FUNC_2(VAR_18, VAR_19);
                            else
                                VAR_18 = FUNC_0(VAR_19);
                            VAR_17 = VAR_19;
                        }
                        if (VAR_18)
                        {
                            VAR_12 = VAR_7->getProp(VAR_3, VAR_14, VAR_18,
                             &VAR_19);
                            if (VAR_12)
                            {
                                VAR_16 = (WINE_CERT_PROP_HEADER*)VAR_10;
                                VAR_16->propID = VAR_14;
                                VAR_16->unknown = 1;
                                VAR_16->cb = VAR_19;
                                VAR_10 += sizeof(WINE_CERT_PROP_HEADER);
                                if (VAR_19)
                                {
                                    FUNC_6(VAR_10, VAR_18, VAR_19);
                                    VAR_10 += VAR_19;
                                }
                            }
                        }
                        else
                            VAR_12 = VAR_1;
                    }
                }
            } while (VAR_12 && VAR_14 != 0);
            FUNC_1(VAR_18);

            VAR_16 = (WINE_CERT_PROP_HEADER*)VAR_10;
            VAR_16->propID = VAR_6;
            VAR_16->unknown = 1;
            VAR_16->cb = VAR_5;
            FUNC_6(VAR_10 + sizeof(WINE_CERT_PROP_HEADER),
             VAR_4, VAR_5);
        }
    }
    else
        VAR_12 = VAR_1;
    return VAR_12;
}
