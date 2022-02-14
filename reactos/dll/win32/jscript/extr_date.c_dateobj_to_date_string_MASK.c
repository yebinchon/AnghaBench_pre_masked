
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int jsval_t ;
typedef int jsstr_t ;
typedef char WCHAR ;
struct TYPE_4__ {int time; } ;
typedef int HRESULT ;
typedef TYPE_1__ DateInstance ;
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
 int * FUNC_6 (char*) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (char*,char const*,char*,char*,int,int) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static HRESULT FUNC_14(DateInstance *VAR_7, jsval_t *VAR_8)
{
    static const WCHAR VAR_9[] = { '%','s',' ','%','s',' ','%','d',' ','%','d',0 };
    static const WCHAR VAR_10[] = { '%','s',' ','%','s',' ','%','d',' ','%','d',' ','B','.','C','.',0 };

    static const DWORD VAR_11[] = { 140, 146,
        145, 144, 143,
        142, 141 };
    static const DWORD VAR_12[] = { 139, 135,
        134, 133,
        132, 131,
        130, 129,
        128, 138,
        137, 136 };

    BOOL VAR_13 = VAR_6;
    WCHAR VAR_14[64], VAR_15[64];
    WCHAR VAR_16[192];
    jsstr_t *VAR_17;
    DOUBLE VAR_18;
    int VAR_19, VAR_20;
    DWORD VAR_21;

    if(FUNC_5(VAR_7->time)) {
        if(VAR_8)
            *VAR_8 = FUNC_8(FUNC_7());
        return VAR_5;
    }

    VAR_18 = FUNC_9(VAR_7->time, VAR_7);

    if(VAR_8) {
        VAR_21 = FUNC_3(FUNC_2(VAR_2,VAR_4),VAR_3);

        VAR_14[0] = 0;
        FUNC_1(VAR_21, VAR_11[(int)FUNC_12(VAR_18)], VAR_14, FUNC_0(VAR_14));

        VAR_15[0] = 0;
        FUNC_1(VAR_21, VAR_12[(int)FUNC_10(VAR_18)], VAR_15, FUNC_0(VAR_15));

        VAR_19 = FUNC_13(VAR_18);
        if(VAR_19<0) {
            VAR_13 = VAR_1;
            VAR_19 = -VAR_19+1;
        }

        VAR_20 = FUNC_4(VAR_18);

        FUNC_11(VAR_16, VAR_13 ? VAR_9 : VAR_10, VAR_14, VAR_15, VAR_20, VAR_19);

        VAR_17 = FUNC_6(VAR_16);
        if(!VAR_17)
            return VAR_0;

        *VAR_8 = FUNC_8(VAR_17);
    }
    return VAR_5;
}
