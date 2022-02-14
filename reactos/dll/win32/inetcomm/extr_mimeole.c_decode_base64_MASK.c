
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


 unsigned char const FUNC_0 (int*) ;
 int FUNC_1 (int *,int ,int **) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned char*,int,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__,int ,int *) ;
 int FUNC_6 (int *,unsigned char*,int,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static HRESULT FUNC_8(IStream *VAR_4, IStream **VAR_5)
{
    const unsigned char *VAR_6, *VAR_7;
    unsigned char VAR_8[1024];
    LARGE_INTEGER VAR_9;
    unsigned char *VAR_10;
    unsigned char VAR_11[4];
    IStream *VAR_12;
    DWORD VAR_13;
    int VAR_14 = 0;
    HRESULT VAR_15;

    VAR_9.QuadPart = 0;
    VAR_15 = FUNC_5(VAR_4, VAR_9, VAR_0, ((void*)0));
    if(FUNC_2(VAR_15))
        return VAR_15;

    VAR_15 = FUNC_1(((void*)0), VAR_2, &VAR_12);
    if(FUNC_2(VAR_15))
        return VAR_15;

    while(1) {
        VAR_15 = FUNC_3(VAR_4, VAR_8, sizeof(VAR_8), &VAR_13);
        if(FUNC_2(VAR_15) || !VAR_13)
            break;

        VAR_6 = VAR_10 = VAR_8;
        VAR_7 = VAR_8 + VAR_13;

        while(1) {

            while(VAR_6 < VAR_7 && (*VAR_6 >= FUNC_0(VAR_3)
                                || VAR_3[*VAR_6] == -1))
                VAR_6++;
            if(VAR_6 == VAR_7)
                break;

            VAR_11[VAR_14++] = VAR_3[*VAR_6++];
            switch(VAR_14) {
            case 2:
                *VAR_10++ = VAR_11[0] << 2 | VAR_11[1] >> 4;
                continue;
            case 3:
                *VAR_10++ = VAR_11[1] << 4 | VAR_11[2] >> 2;
                continue;
            case 4:
                *VAR_10++ = ((VAR_11[2] << 6) & 0xc0) | VAR_11[3];
                VAR_14 = 0;
            }
        }

        if(VAR_10 > VAR_8) {
            VAR_15 = FUNC_6(VAR_12, VAR_8, VAR_10 - VAR_8, ((void*)0));
            if(FUNC_2(VAR_15))
                break;
        }
    }

    if(FUNC_7(VAR_15))
        VAR_15 = FUNC_5(VAR_12, VAR_9, VAR_0, ((void*)0));
    if(FUNC_2(VAR_15)) {
        FUNC_4(VAR_12);
        return VAR_15;
    }

    *VAR_5 = VAR_12;
    return VAR_1;
}
