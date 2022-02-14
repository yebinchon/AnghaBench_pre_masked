
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum chomp_state { ____Placeholder_chomp_state } chomp_state ;
typedef char WCHAR ;
typedef int BOOL ;





 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0( const WCHAR *VAR_2, WCHAR *VAR_3 )
{
    enum chomp_state VAR_4 = 129;
    const WCHAR *VAR_5;
    int VAR_6 = 1;
    BOOL VAR_7;

    for (VAR_5 = VAR_2; *VAR_5; VAR_5++)
    {
        VAR_7 = VAR_1;
        switch (VAR_4)
        {
        case 128:
            switch (*VAR_5)
            {
            case ' ':
                break;
            case '"':
                VAR_4 = 130;
                VAR_6++;
                break;
            default:
                VAR_6++;
                VAR_7 = VAR_0;
                VAR_4 = 129;
            }
            break;

        case 129:
            switch (*VAR_5)
            {
            case '"':
                VAR_4 = 130;
                break;
            case ' ':
                VAR_4 = 128;
                if (VAR_3) *VAR_3++ = 0;
                break;
            default:
                if (VAR_5 > VAR_2 && VAR_5[-1] == '"')
                {
                    if (VAR_3) *VAR_3++ = 0;
                    VAR_6++;
                }
                VAR_7 = VAR_0;
            }
            break;

        case 130:
            switch (*VAR_5)
            {
            case '"':
                VAR_4 = 129;
                break;
            default:
                VAR_7 = VAR_0;
            }
            break;
        }
        if (!VAR_7 && VAR_3) *VAR_3++ = *VAR_5;
    }
    if (VAR_3) *VAR_3 = 0;
    return VAR_6;
}
