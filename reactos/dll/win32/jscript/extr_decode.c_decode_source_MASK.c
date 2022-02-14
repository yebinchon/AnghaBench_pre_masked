
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int HRESULT ;
typedef size_t DWORD ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char const) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const*,size_t*) ;
 char** VAR_3 ;
 size_t* VAR_4 ;
 scalar_t__ FUNC_5 (char const*,char const*,int ) ;

HRESULT FUNC_6(WCHAR *VAR_5)
{
    const WCHAR *VAR_6 = VAR_5;
    WCHAR *VAR_7 = VAR_5;

    static const WCHAR VAR_8[] = {'#','@','~','^'};
    static const WCHAR VAR_9[] = {'^','#','~','@'};

    while(*VAR_6) {
        if(!FUNC_5(VAR_6, VAR_8, FUNC_0(VAR_8))) {
            DWORD VAR_10, VAR_11, VAR_12=0, VAR_13, VAR_14=0;

            VAR_6 += FUNC_0(VAR_8);

            if(!FUNC_4(VAR_6, &VAR_10))
                return VAR_1;

            VAR_6 += 8;

            for(VAR_11=0; VAR_11<VAR_10; VAR_11++) {
                if (VAR_6[VAR_11] == '@') {
                    switch(VAR_6[++VAR_11]) {
                    case '#':
                        VAR_14 += VAR_7[VAR_12++] = '\r';
                        break;
                    case '&':
                        VAR_14 += VAR_7[VAR_12++] = '\n';
                        break;
                    case '!':
                        VAR_14 += VAR_7[VAR_12++] = '<';
                        break;
                    case '*':
                        VAR_14 += VAR_7[VAR_12++] = '>';
                        break;
                    case '$':
                        VAR_14 += VAR_7[VAR_12++] = '@';
                        break;
                    default:
                        FUNC_1("unescape %c\n", VAR_6[VAR_11]);
                        return VAR_0;
                    }
                }else if (VAR_6[VAR_11] < 128) {
                    VAR_14 += VAR_7[VAR_12] = VAR_3[VAR_6[VAR_11]][VAR_4[VAR_12%64]];
                    VAR_12++;
                }else {
                    FUNC_1("Unsupported char %c\n", VAR_6[VAR_11]);
                    return VAR_0;
                }
            }

            VAR_6 += VAR_10;
            VAR_7 += VAR_12;

            if(!FUNC_4(VAR_6, &VAR_13) || VAR_14 != VAR_13)
                return VAR_1;
            VAR_6 += 8;

            if(FUNC_5(VAR_6, VAR_9, FUNC_0(VAR_9)))
                return VAR_1;
            VAR_6 += FUNC_0(VAR_9);
        }else {
            *VAR_7++ = *VAR_6++;
        }
    }

    *VAR_7 = 0;

    FUNC_2("decoded %s\n", FUNC_3(VAR_5));
    return VAR_2;
}
