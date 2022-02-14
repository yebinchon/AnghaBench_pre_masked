
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef char WCHAR ;
struct TYPE_3__ {int time; } ;
typedef int HRESULT ;
typedef TYPE_1__ DateInstance ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int const,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int * FUNC_8 (char*) ;
 int * FUNC_9 () ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (char*,char const*,char*,int,char*,int,int,int,int) ;
 int FUNC_15 (int *,int ,int *) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static inline HRESULT FUNC_18(script_ctx_t *VAR_8, vdisp_t *VAR_9, jsval_t *VAR_10)
{
    static const WCHAR VAR_11[] = { '%','s',',',' ','%','d',' ','%','s',' ','%','d',' ',
        '%','0','2','d',':','%','0','2','d',':','%','0','2','d',' ','U','T','C',0 };
    static const WCHAR VAR_12[] = { '%','s',',',' ','%','d',' ','%','s',' ','%','d',' ','B','.','C','.',' ',
        '%','0','2','d',':','%','0','2','d',':','%','0','2','d',' ','U','T','C',0 };

    static const DWORD VAR_13[] = { 140, 146,
        145, 144, 143,
        142, 141 };
    static const DWORD VAR_14[] = { 139, 135,
        134, 133,
        132, 131,
        130, 129,
        128, 138,
        137, 136 };

    BOOL VAR_15 = VAR_7;
    WCHAR VAR_16[64], VAR_17[64];
    WCHAR VAR_18[192];
    DateInstance *VAR_19;
    jsstr_t *VAR_20;
    int VAR_21, VAR_22;
    DWORD VAR_23;

    if(!(VAR_19 = FUNC_5(VAR_9)))
        return FUNC_15(VAR_8, VAR_2, ((void*)0));

    if(FUNC_7(VAR_19->time)) {
        if(VAR_10)
            *VAR_10 = FUNC_10(FUNC_9());
        return VAR_6;
    }

    if(VAR_10) {
        VAR_23 = FUNC_3(FUNC_2(VAR_3,VAR_5),VAR_4);

        VAR_16[0] = 0;
        FUNC_1(VAR_23, VAR_13[(int)FUNC_16(VAR_19->time)], VAR_16, FUNC_0(VAR_16));

        VAR_17[0] = 0;
        FUNC_1(VAR_23, VAR_14[(int)FUNC_12(VAR_19->time)], VAR_17, FUNC_0(VAR_17));

        VAR_21 = FUNC_17(VAR_19->time);
        if(VAR_21<0) {
            VAR_15 = VAR_1;
            VAR_21 = -VAR_21+1;
        }

        VAR_22 = FUNC_4(VAR_19->time);

        FUNC_14(VAR_18, VAR_15 ? VAR_11 : VAR_12, VAR_16, VAR_22, VAR_17, VAR_21,
                (int)FUNC_6(VAR_19->time), (int)FUNC_11(VAR_19->time),
                (int)FUNC_13(VAR_19->time));

        VAR_20 = FUNC_8(VAR_18);
        if(!VAR_20)
            return VAR_0;

        *VAR_10 = FUNC_10(VAR_20);
    }
    return VAR_6;
}
