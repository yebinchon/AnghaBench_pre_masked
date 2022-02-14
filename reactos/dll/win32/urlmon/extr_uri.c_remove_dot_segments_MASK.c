
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int DWORD ;


 int FUNC_0 (char*,char*,int,int ,int) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (char const) ;

__attribute__((used)) static DWORD FUNC_3(WCHAR *VAR_0, DWORD VAR_1) {
    WCHAR *VAR_2 = VAR_0;
    const WCHAR *VAR_3 = VAR_2;
    const WCHAR *VAR_4 = VAR_2 + VAR_1;
    DWORD VAR_5;

    while(VAR_3 < VAR_4) {




        while(VAR_3 < VAR_4 && !FUNC_2(*VAR_3))
            *VAR_2++ = *VAR_3++;
        if(VAR_3 == VAR_4)
            break;
        *VAR_2++ = *VAR_3++;

        while(VAR_3 < VAR_4) {
            if(*VAR_3 != '.')
                break;


            if(VAR_3 + 1 == VAR_4) {
                ++VAR_3;
                break;
            }


            if(FUNC_2(VAR_3[1])) {
                VAR_3 += 2;
                continue;
            }


            if(VAR_3[1] != '.' || (VAR_3 + 2 != VAR_4 && !FUNC_2(VAR_3[2])))
                break;


            if(VAR_2 > VAR_0+1 && FUNC_2(*--VAR_2))
                --VAR_2;
            while(VAR_2 > VAR_0 && !FUNC_2(*(--VAR_2)));
            if(FUNC_2(*VAR_2))
                ++VAR_2;
            VAR_3 += 2;
            if(VAR_3 != VAR_4)
                ++VAR_3;
        }
    }

    VAR_5 = VAR_2 - VAR_0;
    FUNC_0("(%p %d): Path after dot segments removed %s len=%d\n", VAR_0, VAR_1,
        FUNC_1(VAR_0, VAR_5), VAR_5);
    return VAR_5;
}
