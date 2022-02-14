
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int const WCHAR ;
struct TYPE_4__ {scalar_t__ (* filter ) (int const*,int) ;int const* mime; } ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (TYPE_1__*) ;
 int const* FUNC_1 (int) ;
 int FUNC_2 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (char*,int ,int ) ;
 int const* VAR_3 ;
 int FUNC_5 (char const*,int ) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int const*,int const**) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (int const) ;
 int FUNC_10 (int const*,int const*,int) ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int const*,int const*) ;
 int FUNC_13 (int const*) ;
 scalar_t__ FUNC_14 (int const*,int) ;
 scalar_t__ FUNC_15 (int const*,int) ;
 scalar_t__ FUNC_16 (int const*,int) ;
 scalar_t__ FUNC_17 (int const*,int) ;
 scalar_t__ FUNC_18 (int const*,int) ;
 int const* VAR_6 ;

__attribute__((used)) static HRESULT FUNC_19(const BYTE *VAR_7, DWORD VAR_8, const WCHAR *VAR_9, const WCHAR *VAR_10, WCHAR **VAR_11)
{
    int VAR_12, VAR_13, VAR_14 = -1;
    const WCHAR *VAR_15 = ((void*)0);

    if(!VAR_7 || !VAR_8) {
        if(!VAR_9)
            return VAR_0;

        VAR_12 = FUNC_13(VAR_9)+1;
        *VAR_11 = FUNC_1(VAR_12*sizeof(WCHAR));
        if(!*VAR_11)
            return VAR_1;

        FUNC_10(*VAR_11, VAR_9, VAR_12*sizeof(WCHAR));
        return VAR_2;
    }

    if(VAR_9 && (!FUNC_12(VAR_9, VAR_3)
                || !FUNC_12(VAR_9, VAR_6)))
        VAR_9 = ((void*)0);

    if(VAR_9) {
        VAR_15 = VAR_9;

        for(VAR_13=0; VAR_13 < FUNC_0(VAR_5); VAR_13++) {
            if(!FUNC_12(VAR_9, VAR_5[VAR_13].mime)) {
                VAR_14 = VAR_13;
                for(VAR_12=VAR_8; VAR_12>0; VAR_12--) {
                    if(VAR_5[VAR_13].filter(VAR_7+VAR_8-VAR_12, VAR_12))
                        break;
                }
                if(!VAR_12)
                    VAR_15 = ((void*)0);
                break;
            }
        }

        if(VAR_13 == FUNC_0(VAR_5)) {
            for(VAR_13=0; VAR_13 < FUNC_0(VAR_4); VAR_13++) {
                if(!FUNC_12(VAR_9, VAR_4[VAR_13].mime)) {
                    if(!VAR_4[VAR_13].filter(VAR_7, VAR_8))
                        VAR_15 = ((void*)0);
                    break;
                }
            }
        }
    }



    if(!VAR_9 || VAR_14!=-1) {
        for(VAR_12=VAR_8; !VAR_15 && VAR_12>0; VAR_12--) {
            for(VAR_13=0; VAR_13<FUNC_0(VAR_5); VAR_13++) {
                if(VAR_5[VAR_13].filter(VAR_7+VAR_8-VAR_12, VAR_12)) {
                    VAR_15 = VAR_5[VAR_13].mime;
                    break;
                }
            }
        }
    }

    VAR_13=0;
    while(!VAR_15) {
        if(VAR_4[VAR_13].filter(VAR_7, VAR_8))
            VAR_15 = VAR_4[VAR_13].mime;
        VAR_13++;
    }

    if(VAR_14!=-1 && VAR_15==VAR_6)
        VAR_15 = VAR_5[VAR_14].mime;
    else if(VAR_9 && VAR_15==VAR_3) {
        for(VAR_12=VAR_8; VAR_15==VAR_3 && VAR_12>0; VAR_12--) {
            if(!FUNC_9(VAR_7[VAR_8-VAR_12]))
                break;
            for(VAR_13=0; VAR_13<FUNC_0(VAR_5); VAR_13++) {
                if(VAR_5[VAR_13].filter(VAR_7+VAR_8-VAR_12, VAR_12)) {
                    VAR_15 = VAR_6;
                    break;
                }
            }
        }

        if(VAR_15 == VAR_3)
            VAR_15 = VAR_9;
    }

    if(VAR_10 && (VAR_15 == VAR_3 || VAR_15 == VAR_6)) {
        WCHAR *VAR_16;
        HRESULT VAR_17;

        VAR_17 = FUNC_7(VAR_10, &VAR_16);
        if(FUNC_3(VAR_17)) {
            if(!FUNC_8(VAR_16)) {
                *VAR_11 = VAR_16;
                return VAR_17;
            }
            FUNC_2(VAR_16);
        }
    }

    FUNC_4("found %s for %s\n", FUNC_6(VAR_15), FUNC_5((const char*)VAR_7, FUNC_11(32, VAR_8)));

    VAR_12 = FUNC_13(VAR_15)+1;
    *VAR_11 = FUNC_1(VAR_12*sizeof(WCHAR));
    if(!*VAR_11)
        return VAR_1;

    FUNC_10(*VAR_11, VAR_15, VAR_12*sizeof(WCHAR));
    return VAR_2;
}
