
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nstemplate ;
typedef int nsIPrintSettings ;
typedef int WCHAR ;
typedef int SYSTEMTIME ;
typedef scalar_t__ PRUnichar ;
typedef char* LPCWSTR ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int *,int *,scalar_t__*,int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,scalar_t__*,int ,int) ;
 int FUNC_3 (scalar_t__*) ;

__attribute__((used)) static void FUNC_4(nsIPrintSettings *VAR_1, LPCWSTR VAR_2, BOOL VAR_3)
{
    PRUnichar VAR_4[200];
    PRUnichar *VAR_5 = VAR_4;
    LPCWSTR VAR_6=VAR_2;
    int VAR_7=0;

    while(*VAR_6) {
        if(*VAR_6 != '&') {
            *VAR_5++ = *VAR_6++;
            continue;
        }

        switch(*++VAR_6) {
        case '&':
            *VAR_5++ = '&';
            *VAR_5++ = '&';
            VAR_6++;
            break;
        case 'b':
            VAR_6++;
            *VAR_5 = 0;
            FUNC_2(VAR_1, VAR_4, VAR_3, VAR_7);
            VAR_5 = VAR_4;
            VAR_7++;
            break;
        case 'd': {
            SYSTEMTIME VAR_8;
            FUNC_1(&VAR_8);
            FUNC_0(VAR_0, 0, &VAR_8, ((void*)0), VAR_5,
                    sizeof(VAR_4)-(VAR_5-VAR_4)*sizeof(WCHAR));
            VAR_5 += FUNC_3(VAR_5);
            VAR_6++;
            break;
        }
        case 'p':
            *VAR_5++ = '&';
            *VAR_5++ = 'P';
            VAR_6++;
            break;
        case 'P':
            *VAR_5++ = '?';
            VAR_6++;
            break;
        case 'u':
            *VAR_5++ = '&';
            *VAR_5++ = 'U';
            VAR_6++;
            break;
        case 'w':

            VAR_6++;
            break;
        default:
            *VAR_5++ = '&';
            *VAR_5++ = *VAR_6++;
        }
    }

    *VAR_5 = 0;
    FUNC_2(VAR_1, VAR_4, VAR_3, VAR_7);

    while(++VAR_7 < 3)
        FUNC_2(VAR_1, VAR_5, VAR_3, VAR_7);
}
