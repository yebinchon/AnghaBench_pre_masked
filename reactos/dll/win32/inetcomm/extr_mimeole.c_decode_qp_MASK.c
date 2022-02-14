
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buf ;
struct TYPE_3__ {scalar_t__ QuadPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef int IStream ;
typedef int HRESULT ;
typedef int DWORD ;


 int FUNC_0 (int *,int ,int **) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned char*,int,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__,int ,int *) ;
 int FUNC_5 (int *,unsigned char*,int,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (unsigned char) ;

__attribute__((used)) static HRESULT FUNC_8(IStream *VAR_3, IStream **VAR_4)
{
    const unsigned char *VAR_5, *VAR_6;
    unsigned char *VAR_7, VAR_8 = 0;
    unsigned char VAR_9[1024];
    LARGE_INTEGER VAR_10;
    IStream *VAR_11;
    DWORD VAR_12;
    int VAR_13 = -1;
    HRESULT VAR_14;

    VAR_10.QuadPart = 0;
    VAR_14 = FUNC_4(VAR_3, VAR_10, VAR_0, ((void*)0));
    if(FUNC_1(VAR_14))
        return VAR_14;

    VAR_14 = FUNC_0(((void*)0), VAR_2, &VAR_11);
    if(FUNC_1(VAR_14))
        return VAR_14;

    while(1) {
        VAR_14 = FUNC_2(VAR_3, VAR_9, sizeof(VAR_9), &VAR_12);
        if(FUNC_1(VAR_14) || !VAR_12)
            break;

        VAR_5 = VAR_7 = VAR_9;
        VAR_6 = VAR_9 + VAR_12;

        while(VAR_5 < VAR_6) {
            unsigned char VAR_15 = *VAR_5++;

            switch(VAR_13) {
            case -1:
                if(VAR_15 == '=')
                    VAR_13 = 0;
                else
                    *VAR_7++ = VAR_15;
                continue;
            case 0:
                VAR_8 = VAR_15;
                VAR_13 = 1;
                continue;
            case 1:
                if(VAR_8 != '\r' || VAR_15 != '\n') {
                    int VAR_16 = FUNC_7(VAR_8), VAR_17 = FUNC_7(VAR_15);
                    if(VAR_16 != -1 && VAR_17 != -1)
                        *VAR_7++ = (VAR_16 << 4) | VAR_17;
                    else
                        *VAR_7++ = '=';
                }
                VAR_13 = -1;
                continue;
            }
        }

        if(VAR_7 > VAR_9) {
            VAR_14 = FUNC_5(VAR_11, VAR_9, VAR_7 - VAR_9, ((void*)0));
            if(FUNC_1(VAR_14))
                break;
        }
    }

    if(FUNC_6(VAR_14))
        VAR_14 = FUNC_4(VAR_11, VAR_10, VAR_0, ((void*)0));
    if(FUNC_1(VAR_14)) {
        FUNC_3(VAR_11);
        return VAR_14;
    }

    *VAR_4 = VAR_11;
    return VAR_1;
}
