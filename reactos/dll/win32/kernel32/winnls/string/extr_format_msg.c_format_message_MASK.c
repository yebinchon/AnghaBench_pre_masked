
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct format_args {int list; int args; } ;
struct _format_message_data {int size; char* formatted; char* t; int width; int * space; void* inspace; scalar_t__ w; } ;
typedef char WCHAR ;
typedef char* LPWSTR ;
typedef char* LPCWSTR ;
typedef int DWORD ;
typedef void* BOOL ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int ) ;
 void* VAR_5 ;
 int FUNC_4 (struct _format_message_data*,char) ;
 char* FUNC_5 (void*,int,char*,int,struct format_args*,char**) ;

__attribute__((used)) static LPWSTR FUNC_6( BOOL VAR_6, DWORD VAR_7, LPCWSTR VAR_8,
                              struct format_args *VAR_9 )
{
    struct _format_message_data VAR_10;
    LPCWSTR VAR_11;
    BOOL VAR_12 = VAR_1;

    VAR_10.size = 100;
    VAR_10.formatted = VAR_10.t = FUNC_1( FUNC_0(), 0, (VAR_10.size + 2) * sizeof(WCHAR) );

    VAR_10.width = VAR_7 & VAR_4;
    VAR_10.w = 0;
    VAR_10.inspace = VAR_1;
    VAR_10.space = ((void*)0);
    VAR_11 = VAR_8;
    while (*VAR_11 && !VAR_12) {
        if (*VAR_11=='%') {
            int VAR_13;
            WCHAR *VAR_14,*VAR_15;

            VAR_11++;
            switch (*VAR_11) {
            case '1':case '2':case '3':case '4':case '5':
            case '6':case '7':case '8':case '9':
                if (VAR_7 & VAR_3)
                    goto ignore_inserts;
                else if (((VAR_7 & VAR_2) && !VAR_9->args) ||
                        (!(VAR_7 & VAR_2) && !VAR_9->list))
                {
                    FUNC_3(VAR_0);
                    FUNC_2(FUNC_0(), 0, VAR_10.formatted);
                    return ((void*)0);
                }
                VAR_13 = *VAR_11-'0';
                switch (VAR_11[1]) {
                case '0':case '1':case '2':case '3':
                case '4':case '5':case '6':case '7':
                case '8':case '9':
                    VAR_11++;
                    VAR_13 = VAR_13*10 + *VAR_11-'0';
                    VAR_11++;
                    break;
                default:
                    VAR_11++;
                    break;
                }
                VAR_11 = FUNC_5( VAR_6, VAR_13, VAR_11, VAR_7, VAR_9, &VAR_14 );
                for (VAR_15 = VAR_14; *VAR_15; VAR_15++) FUNC_4(&VAR_10, *VAR_15);
                FUNC_2( FUNC_0(), 0, VAR_14 );
                break;
            case 'n':
                FUNC_4(&VAR_10, '\r');
                FUNC_4(&VAR_10, '\n');
                VAR_11++;
                break;
            case 'r':
                FUNC_4(&VAR_10, '\r');
                VAR_11++;
                break;
            case 't':
                FUNC_4(&VAR_10, '\t');
                VAR_11++;
                break;
            case '0':
                VAR_12 = VAR_5;
                VAR_11++;
                break;
            case '\0':
                FUNC_3(VAR_0);
                FUNC_2(FUNC_0(), 0, VAR_10.formatted);
                return ((void*)0);
            ignore_inserts:
            default:
                if (VAR_7 & VAR_3)
                    FUNC_4(&VAR_10, '%');
                FUNC_4(&VAR_10, *VAR_11++);
                break;
            }
        } else {
            WCHAR VAR_16 = *VAR_11;
            VAR_11++;
            if (VAR_16 == '\r') {
                if (*VAR_11 == '\n')
                    VAR_11++;
                if(VAR_10.width)
                    FUNC_4(&VAR_10, ' ');
                else
                {
                    FUNC_4(&VAR_10, '\r');
                    FUNC_4(&VAR_10, '\n');
                }
            } else {
                if (VAR_16 == '\n')
                {
                    if(VAR_10.width)
                        FUNC_4(&VAR_10, ' ');
                    else
                    {
                        FUNC_4(&VAR_10, '\r');
                        FUNC_4(&VAR_10, '\n');
                    }
                }
                else
                    FUNC_4(&VAR_10, VAR_16);
            }
        }
    }
    *VAR_10.t = '\0';

    return VAR_10.formatted;
}
