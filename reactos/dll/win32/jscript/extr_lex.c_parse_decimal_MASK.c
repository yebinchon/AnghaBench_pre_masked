
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int LONGLONG ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (int,int) ;

HRESULT FUNC_4(const WCHAR **VAR_6, const WCHAR *VAR_7, double *VAR_8)
{
    const WCHAR *VAR_9 = *VAR_6;
    LONGLONG VAR_10 = 0, VAR_11;
    int VAR_12 = 0;

    while(VAR_9 < VAR_7 && FUNC_2(*VAR_9)) {
        VAR_11 = VAR_10*10 + *(VAR_9++) - '0';
        if(VAR_10>VAR_4/10 || VAR_11<0) {
            VAR_12++;
            break;
        }
        else
            VAR_10 = VAR_11;
    }
    while(VAR_9 < VAR_7 && FUNC_2(*VAR_9)) {
        VAR_12++;
        VAR_9++;
    }

    if(*VAR_9 == '.') {
        VAR_9++;

        while(VAR_9 < VAR_7 && FUNC_2(*VAR_9)) {
            VAR_11 = VAR_10*10 + *(VAR_9++) - '0';
            if(VAR_10>VAR_4/10 || VAR_11<0)
                break;

            VAR_10 = VAR_11;
            VAR_12--;
        }
        while(VAR_9 < VAR_7 && FUNC_2(*VAR_9))
            VAR_9++;
    }

    if(VAR_9 < VAR_7 && (*VAR_9 == 'e' || *VAR_9 == 'E')) {
        int VAR_13 = 1, VAR_14 = 0;

        if(++VAR_9 < VAR_7) {
            if(*VAR_9 == '+') {
                VAR_9++;
            }else if(*VAR_9 == '-') {
                VAR_13 = -1;
                VAR_9++;
            }else if(!FUNC_2(*VAR_9)) {
                FUNC_0("Expected exponent part\n");
                return VAR_0;
            }
        }

        if(VAR_9 == VAR_7) {
            FUNC_0("unexpected end of file\n");
            return VAR_0;
        }

        while(VAR_9 < VAR_7 && FUNC_2(*VAR_9)) {
            if(VAR_14 > VAR_1/10 || (VAR_14 = VAR_14*10 + *VAR_9++ - '0')<0)
                VAR_14 = VAR_1;
        }
        VAR_14 *= VAR_13;

        if(VAR_12<0 && VAR_14<0 && VAR_14+VAR_12>0) VAR_12 = VAR_2;
        else if(VAR_12>0 && VAR_14>0 && VAR_14+VAR_12<0) VAR_12 = VAR_1;
        else VAR_12 += VAR_14;
    }

    if(FUNC_1(*VAR_9)) {
        FUNC_0("wrong char after zero\n");
        return VAR_3;
    }

    *VAR_8 = VAR_12>=0 ? VAR_10*FUNC_3(10, VAR_12) : VAR_10/FUNC_3(10, -VAR_12);
    *VAR_6 = VAR_9;
    return VAR_5;
}
