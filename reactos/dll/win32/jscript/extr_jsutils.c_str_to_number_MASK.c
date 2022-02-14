
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jsstr_t ;
typedef char WCHAR ;
typedef int LONG ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int DOUBLE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (char const) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (char const*,char const*,int ) ;

__attribute__((used)) static HRESULT FUNC_7(jsstr_t *VAR_6, double *VAR_7)
{
    const WCHAR *VAR_8;
    BOOL VAR_9 = VAR_1;
    DOUBLE VAR_10 = 0.0;

    static const WCHAR VAR_11[] = {'I','n','f','i','n','i','t','y'};

    VAR_8 = FUNC_4(VAR_6);
    if(!VAR_8)
        return VAR_0;

    while(FUNC_3(*VAR_8))
        VAR_8++;

    if(*VAR_8 == '-') {
        VAR_9 = VAR_5;
        VAR_8++;
    }else if(*VAR_8 == '+') {
        VAR_8++;
    }

    if(!FUNC_6(VAR_8, VAR_11, FUNC_0(VAR_11))) {
        VAR_8 += FUNC_0(VAR_11);
        while(*VAR_8 && FUNC_3(*VAR_8))
            VAR_8++;

        if(*VAR_8)
            *VAR_7 = VAR_3;
        else
            *VAR_7 = VAR_9 ? -VAR_2 : VAR_2;
        return VAR_4;
    }

    if(*VAR_8 == '0' && VAR_8[1] == 'x') {
        DWORD VAR_12 = 0;

        VAR_8 += 2;
        while((VAR_12 = FUNC_1(*VAR_8)) != -1) {
            VAR_10 = VAR_10*16 + VAR_12;
            VAR_8++;
        }

        *VAR_7 = VAR_10;
        return VAR_4;
    }

    while(FUNC_2(*VAR_8))
        VAR_10 = VAR_10*10 + (*VAR_8++ - '0');

    if(*VAR_8 == 'e' || *VAR_8 == 'E') {
        BOOL VAR_13 = VAR_1;
        LONG VAR_14 = 0;

        VAR_8++;
        if(*VAR_8 == '-') {
            VAR_8++;
            VAR_13 = VAR_5;
        }else if(*VAR_8 == '+') {
            VAR_8++;
        }

        while(FUNC_2(*VAR_8))
            VAR_14 = VAR_14*10 + (*VAR_8++ - '0');
        if(VAR_13)
            VAR_14 = -VAR_14;

        VAR_10 *= FUNC_5(10, VAR_14);
    }else if(*VAR_8 == '.') {
        DOUBLE VAR_15 = 0.1;

        VAR_8++;
        while(FUNC_2(*VAR_8)) {
            VAR_10 += VAR_15 * (*VAR_8++ - '0');
            VAR_15 *= 0.1;
        }
    }

    while(FUNC_3(*VAR_8))
        VAR_8++;

    if(*VAR_8) {
        *VAR_7 = VAR_3;
        return VAR_4;
    }

    if(VAR_9)
        VAR_10 = -VAR_10;

    *VAR_7 = VAR_10;
    return VAR_4;
}
