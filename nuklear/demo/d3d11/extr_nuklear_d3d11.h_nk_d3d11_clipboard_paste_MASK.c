
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct nk_text_edit {int dummy; } ;
typedef int nk_handle ;
typedef int SIZE_T ;
typedef scalar_t__ LPCWSTR ;
typedef scalar_t__ HGLOBAL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,scalar_t__,int,char*,int,int *,int *) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct nk_text_edit*,char*,int) ;

__attribute__((used)) static void
FUNC_11(nk_handle VAR_2, struct nk_text_edit *VAR_3)
{
    (void)VAR_2;
    if (FUNC_5(VAR_0) && FUNC_6(((void*)0)))
    {
        HGLOBAL VAR_4 = FUNC_1(VAR_0);
        if (VAR_4)
        {
            SIZE_T VAR_5 = FUNC_3(VAR_4) - 1;
            if (VAR_5)
            {
                LPCWSTR VAR_6 = (LPCWSTR)FUNC_2(VAR_4);
                if (VAR_6)
                {
                    int VAR_7 = FUNC_7(VAR_1, 0, VAR_6, VAR_5 / sizeof(wchar_t), ((void*)0), 0, ((void*)0), ((void*)0));
                    if (VAR_7)
                    {
                        char* VAR_8 = (char*)FUNC_9(VAR_7);
                        if (VAR_8)
                        {
                            FUNC_7(VAR_1, 0, VAR_6, VAR_5 / sizeof(wchar_t), VAR_8, VAR_7, ((void*)0), ((void*)0));
                            FUNC_10(VAR_3, VAR_8, VAR_7);
                            FUNC_8(VAR_8);
                        }
                    }
                    FUNC_4(VAR_4);
                }
            }
        }
        FUNC_0();
    }
}
