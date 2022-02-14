
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int time_t ;
struct tm {scalar_t__ tm_year; int tm_sec; scalar_t__ tm_mon; int tm_wday; int tm_min; int tm_hour; int tm_mday; } ;
struct TYPE_8__ {char* version; char* statusText; int status_code; int headers_section; TYPE_3__* custHeaders; int read_gzip; int path; int verb; } ;
typedef TYPE_1__ http_request_t ;
typedef char WCHAR ;
struct TYPE_10__ {int wFlags; char* lpszValue; } ;
struct TYPE_9__ {scalar_t__ wMilliseconds; int wSecond; int wMinute; int wHour; int wDayOfWeek; int wDay; scalar_t__ wMonth; scalar_t__ wYear; } ;
typedef TYPE_2__ SYSTEMTIME ;
typedef char* LPWSTR ;
typedef char* LPVOID ;
typedef TYPE_3__* LPHTTPHEADERW ;
typedef int* LPDWORD ;
typedef size_t INT ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 size_t FUNC_2 (TYPE_1__*,char*,size_t,int) ;

 int VAR_8 ;

 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;




 int VAR_13 ;

 int VAR_14 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int,...) ;
 int VAR_15 ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (TYPE_1__*,int ,int ,char*,int ) ;
 char* FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int) ;
 struct tm* FUNC_11 (int *) ;
 char** VAR_16 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (char*,char const*,int) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static DWORD FUNC_16(http_request_t *VAR_17, DWORD VAR_18,
        LPVOID VAR_19, LPDWORD VAR_20, LPDWORD VAR_21)
{
    LPHTTPHEADERW VAR_22 = ((void*)0);
    BOOL VAR_23 = !!(VAR_18 & VAR_10);
    INT VAR_24 = VAR_21 ? *VAR_21 : 0;
    DWORD VAR_25 = (VAR_18 & ~VAR_12);
    INT VAR_26 = -1;

    FUNC_1( &VAR_17->headers_section );


    switch (VAR_25)
    {
    case 133:
        if (!VAR_19)
        {
            FUNC_3( &VAR_17->headers_section );
            return VAR_3;
        }
        VAR_26 = FUNC_2(VAR_17, VAR_19, VAR_24, VAR_23);
        break;
    case 131:
        {
            LPWSTR VAR_27;
            DWORD VAR_28 = 0;
            DWORD VAR_29 = VAR_3;

            if (VAR_23)
                VAR_27 = FUNC_7(VAR_17, VAR_17->verb, VAR_17->path, VAR_17->version, VAR_15);
            else
                VAR_27 = FUNC_8(VAR_17, VAR_15);
            if (!VAR_27)
            {
                FUNC_3( &VAR_17->headers_section );
                return VAR_4;
            }

            VAR_28 = FUNC_15(VAR_27) * sizeof(WCHAR);
            if (VAR_28 + sizeof(WCHAR) > *VAR_20)
            {
                VAR_28 += sizeof(WCHAR);
                VAR_29 = VAR_2;
            }
            else if (VAR_19)
            {
                FUNC_13(VAR_19, VAR_27, VAR_28 + sizeof(WCHAR));
                FUNC_4("returning data: %s\n", FUNC_10(VAR_19, VAR_28 / sizeof(WCHAR)));
                VAR_29 = VAR_5;
            }
            *VAR_20 = VAR_28;

            FUNC_12(VAR_27);
            FUNC_3( &VAR_17->headers_section );
            return VAR_29;
        }
    case 132:
        {
            LPWSTR VAR_30;
            DWORD VAR_31;

            if (VAR_23)
                VAR_30 = FUNC_7(VAR_17, VAR_17->verb, VAR_17->path, VAR_17->version, VAR_6);
            else
                VAR_30 = FUNC_8(VAR_17, VAR_6);

            if (!VAR_30)
            {
                FUNC_3( &VAR_17->headers_section );
                return VAR_4;
            }

            VAR_31 = FUNC_15(VAR_30) * sizeof(WCHAR);
            if (VAR_31 > *VAR_20)
            {
                *VAR_20 = VAR_31;
                FUNC_12(VAR_30);
                FUNC_3( &VAR_17->headers_section );
                return VAR_2;
            }

            if (VAR_19)
            {
                DWORD VAR_32;

                FUNC_4("returning data: %s\n", FUNC_10(VAR_30, VAR_31 / sizeof(WCHAR)));

                for (VAR_32 = 0; VAR_32 < VAR_31 / sizeof(WCHAR); VAR_32++)
                {
                    if (VAR_30[VAR_32] == '\n')
                        VAR_30[VAR_32] = 0;
                }
                FUNC_13(VAR_19, VAR_30, VAR_31);
            }
            *VAR_20 = VAR_31 - sizeof(WCHAR);

            FUNC_12(VAR_30);
            FUNC_3( &VAR_17->headers_section );
            return VAR_5;
        }
    case 129:
        if (VAR_17->statusText)
        {
            DWORD VAR_33 = FUNC_15(VAR_17->statusText);
            if (VAR_33 + 1 > *VAR_20/sizeof(WCHAR))
            {
                *VAR_20 = (VAR_33 + 1) * sizeof(WCHAR);
                FUNC_3( &VAR_17->headers_section );
                return VAR_2;
            }
            if (VAR_19)
            {
                FUNC_13(VAR_19, VAR_17->statusText, (VAR_33 + 1) * sizeof(WCHAR));
                FUNC_4("returning data: %s\n", FUNC_10(VAR_19, VAR_33));
            }
            *VAR_20 = VAR_33 * sizeof(WCHAR);
            FUNC_3( &VAR_17->headers_section );
            return VAR_5;
        }
        break;
    case 128:
        if (VAR_17->version)
        {
            DWORD VAR_34 = FUNC_15(VAR_17->version);
            if (VAR_34 + 1 > *VAR_20/sizeof(WCHAR))
            {
                *VAR_20 = (VAR_34 + 1) * sizeof(WCHAR);
                FUNC_3( &VAR_17->headers_section );
                return VAR_2;
            }
            if (VAR_19)
            {
                FUNC_13(VAR_19, VAR_17->version, (VAR_34 + 1) * sizeof(WCHAR));
                FUNC_4("returning data: %s\n", FUNC_10(VAR_19, VAR_34));
            }
            *VAR_20 = VAR_34 * sizeof(WCHAR);
            FUNC_3( &VAR_17->headers_section );
            return VAR_5;
        }
        break;
    case 134:
        VAR_26 = FUNC_2(VAR_17, VAR_16[VAR_17->read_gzip ? VAR_8 : VAR_25],
                VAR_24,VAR_23);
        break;
    case 130: {
        DWORD VAR_35 = VAR_5;

        if(VAR_23)
        {
            FUNC_3( &VAR_17->headers_section );
            return VAR_1;
        }

        if(VAR_24)
            break;

        if(VAR_18 & VAR_9) {
            if(*VAR_20 >= sizeof(DWORD))
                *(DWORD*)VAR_19 = VAR_17->status_code;
            else
                VAR_35 = VAR_2;
            *VAR_20 = sizeof(DWORD);
        }else {
            WCHAR VAR_36[12];
            DWORD VAR_37;
            static const WCHAR VAR_38[] = {'%','u',0};

            VAR_37 = FUNC_14(VAR_36, VAR_38, VAR_17->status_code) * sizeof(WCHAR);

            if(VAR_37 <= *VAR_20) {
                FUNC_13(VAR_19, VAR_36, VAR_37+sizeof(WCHAR));
            }else {
                VAR_37 += sizeof(WCHAR);
                VAR_35 = VAR_2;
            }

            *VAR_20 = VAR_37;
        }
        FUNC_3( &VAR_17->headers_section );
        return VAR_35;
    }
    default:
        FUNC_5 (VAR_14 == (VAR_13 + 1));

        if (VAR_25 < VAR_14 && VAR_16[VAR_25])
            VAR_26 = FUNC_2(VAR_17, VAR_16[VAR_25],
                                              VAR_24,VAR_23);
    }

    if (VAR_26 >= 0)
        VAR_22 = &VAR_17->custHeaders[VAR_26];


    if (!VAR_22 ||
        ((VAR_18 & VAR_10) &&
         (~VAR_22->wFlags & VAR_7)))
    {
        FUNC_3( &VAR_17->headers_section );
        return VAR_0;
    }


    if (VAR_18 & VAR_9 && VAR_19)
    {
        *(int *)VAR_19 = FUNC_6(VAR_22->lpszValue);
        FUNC_4(" returning number: %d\n", *(int *)VAR_19);
     }
    else if (VAR_18 & VAR_11 && VAR_19)
    {
        time_t VAR_39;
        struct tm VAR_40;
        SYSTEMTIME *VAR_41;

        VAR_39 = FUNC_0(VAR_22->lpszValue);

        VAR_40 = *FUNC_11(&VAR_39);
        VAR_41 = (SYSTEMTIME *)VAR_19;
        VAR_41->wDay = VAR_40.tm_mday;
        VAR_41->wHour = VAR_40.tm_hour;
        VAR_41->wMilliseconds = 0;
        VAR_41->wMinute = VAR_40.tm_min;
        VAR_41->wDayOfWeek = VAR_40.tm_wday;
        VAR_41->wMonth = VAR_40.tm_mon + 1;
        VAR_41->wSecond = VAR_40.tm_sec;
        VAR_41->wYear = 1900+VAR_40.tm_year;

        FUNC_4(" returning time: %04d/%02d/%02d - %d - %02d:%02d:%02d.%02d\n",
              VAR_41->wYear, VAR_41->wMonth, VAR_41->wDay, VAR_41->wDayOfWeek,
              VAR_41->wHour, VAR_41->wMinute, VAR_41->wSecond, VAR_41->wMilliseconds);
    }
    else if (VAR_22->lpszValue)
    {
        DWORD VAR_42 = (FUNC_15(VAR_22->lpszValue) + 1) * sizeof(WCHAR);

        if (VAR_42 > *VAR_20)
        {
            *VAR_20 = VAR_42;
            FUNC_3( &VAR_17->headers_section );
            return VAR_2;
        }
        if (VAR_19)
        {
            FUNC_13(VAR_19, VAR_22->lpszValue, VAR_42);
            FUNC_4("! returning string: %s\n", FUNC_9(VAR_19));
        }
        *VAR_20 = VAR_42 - sizeof(WCHAR);
    }
    if (VAR_21) (*VAR_21)++;

    FUNC_3( &VAR_17->headers_section );
    return VAR_5;
}
