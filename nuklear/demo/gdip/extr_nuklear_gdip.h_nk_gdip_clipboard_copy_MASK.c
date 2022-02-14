
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef int nk_handle ;
typedef scalar_t__ HGLOBAL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ,char const*,int,scalar_t__*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_8(nk_handle VAR_3, const char *VAR_4, int VAR_5)
{
    HGLOBAL VAR_6;
    wchar_t* VAR_7;
    int VAR_8;
    (void)VAR_3;

    if (!FUNC_6(((void*)0)))
        return;

    VAR_8 = FUNC_5(VAR_1, 0, VAR_4, VAR_5, ((void*)0), 0);
    if (!VAR_8) {
        FUNC_0();
        return;
    }

    VAR_6 = (HGLOBAL)FUNC_1(VAR_2, (VAR_8 + 1) * sizeof(wchar_t));
    if (!VAR_6) {
        FUNC_0();
        return;
    }

    VAR_7 = (wchar_t*)FUNC_3(VAR_6);
    if (!VAR_7) {
        FUNC_2(VAR_6);
        FUNC_0();
        return;
    }

    FUNC_5(VAR_1, 0, VAR_4, VAR_5, VAR_7, VAR_8);
    VAR_7[VAR_8] = 0;
    FUNC_4(VAR_6);
    if (!FUNC_7(VAR_0, VAR_6))
        FUNC_2(VAR_6);
    FUNC_0();
}
