
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int headers_section; TYPE_2__* custHeaders; } ;
typedef TYPE_1__ http_request_t ;
typedef char WCHAR ;
struct TYPE_11__ {scalar_t__ wFlags; scalar_t__ wCount; void* lpszValue; void* lpszField; } ;
struct TYPE_10__ {char* lpszValue; scalar_t__ wFlags; } ;
typedef void* LPWSTR ;
typedef TYPE_2__* LPHTTPHEADERW ;
typedef char* LPCWSTR ;
typedef size_t INT ;
typedef TYPE_3__ HTTPHEADERW ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 size_t FUNC_2 (TYPE_1__*,char*,int ,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (char*,size_t) ;
 int FUNC_7 (char*) ;
 void* FUNC_8 (char*,size_t) ;
 int FUNC_9 (char*,char*,size_t) ;
 size_t FUNC_10 (char*) ;

__attribute__((used)) static DWORD FUNC_11(http_request_t *VAR_12, LPCWSTR VAR_13, LPCWSTR VAR_14, DWORD VAR_15)
{
    LPHTTPHEADERW VAR_16;
    INT VAR_17;
    BOOL VAR_18 = !!(VAR_15 & VAR_11);
    DWORD VAR_19 = VAR_4;

    FUNC_5("--> %s: %s - 0x%08x\n", FUNC_7(VAR_13), FUNC_7(VAR_14), VAR_15);

    FUNC_0( &VAR_12->headers_section );

    VAR_17 = FUNC_2(VAR_12, VAR_13, 0, VAR_18);
    if (VAR_17 >= 0)
    {
        VAR_16 = &VAR_12->custHeaders[VAR_17];


        if (VAR_15 & VAR_10)
        {
            FUNC_1( VAR_12, VAR_17 );

            if (VAR_14 && VAR_14[0])
            {
                HTTPHEADERW VAR_20;

                VAR_20.lpszField = (LPWSTR)VAR_13;
                VAR_20.lpszValue = (LPWSTR)VAR_14;
                VAR_20.wFlags = VAR_20.wCount = 0;

                if (VAR_15 & VAR_11)
                    VAR_20.wFlags |= VAR_6;

                VAR_19 = FUNC_3( VAR_12, &VAR_20 );
            }

            goto out;
        }


        if (VAR_15 & VAR_7)
        {
            VAR_19 = VAR_2;
            goto out;
        }


        if (VAR_15 & VAR_0)
        {
            LPWSTR VAR_21;
            WCHAR VAR_22 = 0;
            INT VAR_23 = 0;
            INT VAR_24 = FUNC_10(VAR_16->lpszValue);
            INT VAR_25 = FUNC_10(VAR_14);


            if (VAR_15 & VAR_11)
                VAR_16->wFlags |= VAR_6;
            else
                VAR_16->wFlags &= ~VAR_6;

            if (VAR_15 & VAR_8)
            {
                VAR_22 = ',';
                VAR_16->wFlags |= VAR_5;
            }
            else if (VAR_15 & VAR_9)
            {
                VAR_22 = ';';
                VAR_16->wFlags |= VAR_5;
            }

            VAR_23 = VAR_24 + VAR_25 + ((VAR_22 > 0) ? 2 : 0);

            VAR_21 = FUNC_8(VAR_16->lpszValue, (VAR_23+1)*sizeof(WCHAR));
            if (VAR_21)
            {
                VAR_16->lpszValue = VAR_21;

                if (VAR_22 > 0)
                {
                    VAR_16->lpszValue[VAR_24] = VAR_22;
                    VAR_24++;
                    VAR_16->lpszValue[VAR_24] = ' ';
                    VAR_24++;
                }

                FUNC_9(&VAR_16->lpszValue[VAR_24], VAR_14, VAR_25*sizeof(WCHAR));
                VAR_16->lpszValue[VAR_23] = '\0';
            }
            else
            {
                FUNC_6("heap_realloc (%d bytes) failed\n",VAR_23+1);
                VAR_19 = VAR_3;
            }

            goto out;
        }
    }


    if ((VAR_15 & ~VAR_11) == VAR_10)
    {
        VAR_19 = VAR_1;
        goto out;
    }


    if (VAR_14)
    {
        HTTPHEADERW VAR_26;

        VAR_26.lpszField = (LPWSTR)VAR_13;
        VAR_26.lpszValue = (LPWSTR)VAR_14;
        VAR_26.wFlags = VAR_26.wCount = 0;

        if (VAR_15 & VAR_11)
            VAR_26.wFlags |= VAR_6;

        VAR_19 = FUNC_3( VAR_12, &VAR_26 );
        goto out;
    }


out:
    FUNC_5("<-- %d\n", VAR_19);
    FUNC_4( &VAR_12->headers_section );
    return VAR_19;
}
