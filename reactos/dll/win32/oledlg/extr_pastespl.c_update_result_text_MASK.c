
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ ps_struct_t ;
typedef char WCHAR ;
typedef int UINT ;
struct TYPE_5__ {char* lpstrResultText; } ;
typedef TYPE_2__ OLEUIPASTEENTRYW ;
typedef int LONG ;
typedef int HWND ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 char* FUNC_3 (int ,int ,size_t) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,int ,char*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int ,int ,int,int ) ;
 int FUNC_7 (int ,int ,char*) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*,char const*) ;

__attribute__((used)) static void FUNC_11(HWND VAR_11, const ps_struct_t *VAR_12)
{
    WCHAR VAR_13[200];
    UINT VAR_14;
    OLEUIPASTEENTRYW *VAR_15;
    LONG VAR_16;
    static const WCHAR VAR_17[] = {'%','s',0};
    WCHAR *VAR_18, *VAR_19;

    VAR_16 = FUNC_6(FUNC_1(VAR_11, VAR_0), VAR_6, 0, 0);
    if(VAR_16 == -1) return;
    VAR_15 = (OLEUIPASTEENTRYW*)FUNC_6(FUNC_1(VAR_11, VAR_0), VAR_7, VAR_16, 0);

    if(VAR_12->flags & VAR_10)
    {
        if(VAR_12->flags & VAR_9)
            VAR_14 = VAR_5;
        else
            VAR_14 = VAR_2;
    }
    else
    {
        if(VAR_12->flags & VAR_9)
            VAR_14 = VAR_4;
        else
            VAR_14 = VAR_3;
    }

    FUNC_5(VAR_8, VAR_14, VAR_13, FUNC_0(VAR_13));
    if((VAR_19 = FUNC_10(VAR_13, VAR_17)))
    {

        size_t VAR_20 = FUNC_9(VAR_15->lpstrResultText);
        ptrdiff_t VAR_21 = (char*)VAR_19 - (char*)VAR_13;
        VAR_18 = FUNC_3(FUNC_2(), 0, (FUNC_9(VAR_13) + VAR_20 - 1) * sizeof(WCHAR));
        FUNC_8(VAR_18, VAR_13, VAR_21);
        FUNC_8((char*)VAR_18 + VAR_21, VAR_15->lpstrResultText, VAR_20 * sizeof(WCHAR));
        FUNC_8((char*)VAR_18 + VAR_21 + VAR_20 * sizeof(WCHAR), VAR_19 + 2, (FUNC_9(VAR_19 + 2) + 1) * sizeof(WCHAR));
    }
    else
        VAR_18 = VAR_13;

    FUNC_7(VAR_11, VAR_1, VAR_18);

    if(VAR_18 != VAR_13)
        FUNC_4(FUNC_2(), 0, VAR_18);

}
