
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ URL_SCHEME ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char const**) ;
 int FUNC_2 (char*,int) ;
 char FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (char) ;
 scalar_t__ FUNC_7 (char const) ;
 scalar_t__ FUNC_8 (char const) ;
 int FUNC_9 (char const,char*) ;
 int FUNC_10 (char*,int) ;

__attribute__((used)) static DWORD FUNC_11(const WCHAR *VAR_9, DWORD VAR_10, URL_SCHEME VAR_11, BOOL VAR_12, DWORD VAR_13,
        BOOL VAR_14, WCHAR *VAR_15) {
    const BOOL VAR_16 = VAR_11 != VAR_4;
    const BOOL VAR_17 = VAR_11 == VAR_2;
    const BOOL VAR_18 = VAR_11 == VAR_3;
    const WCHAR *VAR_19;
    BOOL VAR_20 = VAR_0;
    DWORD VAR_21 = 0;

    if(!VAR_9)
        return 0;

    VAR_19 = VAR_9;

    if(VAR_17 && !VAR_12) {

        if(VAR_10 > 1 && FUNC_5(VAR_19) && !(VAR_13 & VAR_6)) {
            if(VAR_15)
                VAR_15[VAR_21] = '/';
            VAR_21++;
            VAR_20 = VAR_1;
        } else if(*VAR_19 == '/') {
            if(!(VAR_13 & VAR_6)) {

                if(VAR_15)
                    VAR_15[VAR_21] = '/';
                VAR_21++;
            }
            ++VAR_19;
        }

        if(FUNC_5(VAR_19)) {
            if(VAR_15) {
                VAR_15[VAR_21] = *VAR_19;

                VAR_15[VAR_21+1] = ':';
            }
            VAR_19 += 2;
            VAR_21 += 2;
        }
    }

    if(!VAR_17 && *VAR_9 && *VAR_9 != '/') {

        if(VAR_15)
            VAR_15[VAR_21] = '/';
        VAR_21++;
    }

    for(; VAR_19 < VAR_9+VAR_10; ++VAR_19) {
        BOOL VAR_22 = VAR_1;

        if(*VAR_19 == '%' && !VAR_18) {
            const WCHAR *VAR_23 = VAR_19;
            WCHAR VAR_24;


            BOOL VAR_25 = !FUNC_1(&VAR_23) && VAR_17 && !(VAR_13&VAR_6);
            VAR_24 = FUNC_3(VAR_19);

            if(VAR_25 || VAR_20) {

                if(VAR_15)
                    FUNC_9(*VAR_19, VAR_15+VAR_21);
                VAR_21 += 3;
                VAR_22 = VAR_0;
            } else if((FUNC_8(VAR_24) && VAR_16) ||
                      (VAR_17 && !VAR_14 && (FUNC_8(VAR_24) || FUNC_7(VAR_24) ||
                      (VAR_24 && VAR_13&VAR_6 && !FUNC_6(VAR_24))))) {
                if(VAR_15)
                    VAR_15[VAR_21] = VAR_24;
                VAR_21++;

                VAR_19 += 2;
                continue;
            }
        } else if(*VAR_19 == '/' && VAR_17 && (VAR_13 & VAR_6)) {

            if(VAR_15)
                VAR_15[VAR_21] = '\\';
            VAR_21++;
            VAR_22 = VAR_0;
        } else if(*VAR_19 == '\\' && VAR_16) {
            if(!(VAR_17 && (VAR_13 & VAR_6))) {

                if(VAR_15)
                    VAR_15[VAR_21] = '/';
                VAR_21++;
                VAR_22 = VAR_0;
            }
        } else if(VAR_16 && !VAR_18 && FUNC_4(*VAR_19) && !FUNC_8(*VAR_19) && !FUNC_7(*VAR_19) &&
                  (!(VAR_13 & VAR_8) || VAR_17)) {
            if(!VAR_17 || !(VAR_13 & VAR_6)) {

                if(VAR_15)
                    FUNC_9(*VAR_19, VAR_15+VAR_21);
                VAR_21 += 3;
                VAR_22 = VAR_0;
            }
        }

        if(VAR_22) {
            if(VAR_15)
                VAR_15[VAR_21] = *VAR_19;
            VAR_21++;
        }
    }





    if(!(VAR_17 && (VAR_13 & VAR_6)) &&
       VAR_11 != VAR_5) {
        if(!(VAR_13 & VAR_7) && VAR_15) {



            VAR_21 = FUNC_10(VAR_15, VAR_21);
        }
    }

    if(VAR_15)
        FUNC_0("Canonicalized path %s len=%d\n", FUNC_2(VAR_15, VAR_21), VAR_21);
    return VAR_21;
}
