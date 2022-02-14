
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jsval_t ;
typedef int jsstr_t ;
typedef char WCHAR ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int DOUBLE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int const,char*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (char*) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (char*,char const*,char*,char*,int,int,int,int,int,...) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static inline HRESULT FUNC_16(DOUBLE VAR_7, BOOL VAR_8, int VAR_9, jsval_t *VAR_10)
{
    static const WCHAR VAR_11[] = { '%','s',' ','%','s',' ','%','d',' ',
        '%','0','2','d',':','%','0','2','d',':','%','0','2','d',' ',
        'U','T','C','%','c','%','0','2','d','%','0','2','d',' ','%','d','%','s',0 };
    static const WCHAR VAR_12[] = { '%','s',' ','%','s',' ','%','d',' ',
        '%','0','2','d',':','%','0','2','d',':','%','0','2','d',' ',
        'U','T','C',' ','%','d','%','s',0 };
    static const WCHAR VAR_13[] = { '%','s',' ','%','s',' ',
        '%','d',' ','%','0','2','d',':','%','0','2','d',':',
        '%','0','2','d',' ','%','d','%','s',0 };
    static const WCHAR VAR_14[] = { 0 };
    static const WCHAR VAR_15[] = { ' ','B','.','C','.',0 };

    static const DWORD VAR_16[] = { 140, 146,
        145, 144, 143,
        142, 141 };
    static const DWORD VAR_17[] = { 139, 135,
        134, 133,
        132, 131,
        130, 129,
        128, 138,
        137, 136 };

    BOOL VAR_18 = VAR_6;
    WCHAR VAR_19[64], VAR_20[64];
    WCHAR VAR_21[192];
    jsstr_t *VAR_22;
    int VAR_23, VAR_24;
    DWORD VAR_25;
    WCHAR VAR_26 = '-';

    if(FUNC_6(VAR_7)) {
        if(VAR_10)
            *VAR_10 = FUNC_9(FUNC_8());
        return VAR_5;
    }

    if(VAR_10) {
        VAR_25 = FUNC_3(FUNC_2(VAR_2,VAR_4),VAR_3);

        VAR_19[0] = 0;
        FUNC_1(VAR_25, VAR_16[(int)FUNC_14(VAR_7)], VAR_19, FUNC_0(VAR_19));

        VAR_20[0] = 0;
        FUNC_1(VAR_25, VAR_17[(int)FUNC_11(VAR_7)], VAR_20, FUNC_0(VAR_20));

        VAR_23 = FUNC_15(VAR_7);
        if(VAR_23<0) {
            VAR_18 = VAR_1;
            VAR_23 = -VAR_23+1;
        }

        VAR_24 = FUNC_4(VAR_7);

        if(VAR_9 < 0) {
            VAR_26 = '+';
            VAR_9 = -VAR_9;
        }

        if(!VAR_8)
            FUNC_13(VAR_21, VAR_13, VAR_19, VAR_20, VAR_24,
                    (int)FUNC_5(VAR_7), (int)FUNC_10(VAR_7),
                    (int)FUNC_12(VAR_7), VAR_23, VAR_18?VAR_14:VAR_15);
        else if(VAR_9)
            FUNC_13(VAR_21, VAR_11, VAR_19, VAR_20, VAR_24,
                    (int)FUNC_5(VAR_7), (int)FUNC_10(VAR_7),
                    (int)FUNC_12(VAR_7), VAR_26, VAR_9/60, VAR_9%60,
                    VAR_23, VAR_18?VAR_14:VAR_15);
        else
            FUNC_13(VAR_21, VAR_12, VAR_19, VAR_20, VAR_24,
                    (int)FUNC_5(VAR_7), (int)FUNC_10(VAR_7),
                    (int)FUNC_12(VAR_7), VAR_23, VAR_18?VAR_14:VAR_15);

        VAR_22 = FUNC_7(VAR_21);
        if(!VAR_22)
            return VAR_0;

        *VAR_10 = FUNC_9(VAR_22);
    }
    return VAR_5;
}
