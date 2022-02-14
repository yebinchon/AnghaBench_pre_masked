
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum parse_state { ____Placeholder_parse_state } parse_state ;
typedef char WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;




__attribute__((used)) static int FUNC_0( const WCHAR *VAR_2, WCHAR *VAR_3, int *VAR_4 )
{
    enum parse_state VAR_5 = 130;
    const WCHAR *VAR_6;
    WCHAR *VAR_7 = VAR_3;
    BOOL VAR_8, VAR_9 = VAR_0;
    int VAR_10 = 0, VAR_11 = 0;

    for (VAR_6 = VAR_2; *VAR_6; VAR_6++)
    {
        VAR_8 = VAR_0;
        switch (VAR_5)
        {
        case 128:
            switch (*VAR_6)
            {
            case ' ':
                VAR_9 = VAR_1;
                VAR_8 = VAR_1;
                VAR_11++;
                break;
            case '"':
                VAR_5 = 130;
                if (VAR_9 && VAR_6[1] != '\"') VAR_10--;
                else VAR_10++;
                break;
            default:
                VAR_5 = 129;
                VAR_9 = VAR_1;
                VAR_11++;
                break;
            }
            break;

        case 129:
            switch (*VAR_6)
            {
            case '"':
                VAR_5 = 130;
                if (VAR_9) VAR_10--;
                else VAR_10++;
                break;
            case ' ':
                VAR_5 = 128;
                if (!VAR_10) goto done;
                VAR_9 = VAR_1;
                VAR_11++;
                break;
            default:
                if (VAR_10) VAR_9 = VAR_1;
                VAR_11++;
                break;
            }
            break;

        case 130:
            switch (*VAR_6)
            {
            case '"':
                if (VAR_9 && VAR_6[1] != '\"') VAR_10--;
                else VAR_10++;
                break;
            case ' ':
                VAR_5 = 128;
                if (!VAR_10 || (VAR_10 > 1 && !VAR_11)) goto done;
                VAR_9 = VAR_1;
                VAR_11++;
                break;
            default:
                VAR_5 = 129;
                if (VAR_10) VAR_9 = VAR_1;
                VAR_11++;
                break;
            }
            break;

        default: break;
        }
        if (!VAR_8) *VAR_7++ = *VAR_6;
        if (!VAR_10) VAR_9 = VAR_0;
    }

done:
    if (!VAR_11) *VAR_3 = 0;
    else *VAR_7 = 0;

    *VAR_4 = VAR_10;
    return VAR_6 - VAR_2;
}
