
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
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,char const*,int,scalar_t__*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(nk_handle VAR_3, const char *VAR_4, int VAR_5)
{
    (void)VAR_3;
    if (!FUNC_5(((void*)0))) {
        return;
    }

    int VAR_6 = FUNC_4(VAR_1, 0, VAR_4, VAR_5, ((void*)0), 0);
    if (VAR_6) {
        HGLOBAL VAR_7 = FUNC_1(VAR_2, (VAR_6 + 1) * sizeof(wchar_t));
        if (VAR_7) {
            wchar_t *VAR_8 = (wchar_t*)FUNC_2(VAR_7);
            if (VAR_8) {
                FUNC_4(VAR_1, 0, VAR_4, VAR_5, VAR_8, VAR_6);
                VAR_8[VAR_6] = 0;
                FUNC_3(VAR_7);
                FUNC_6(VAR_0, VAR_7);
            }
        }
    }

    FUNC_0();
}
