
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tabcreate_style {scalar_t__ act_style; scalar_t__ style; } ;
typedef int HWND ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ,char*,scalar_t__,int,int,int,int,int ,int *,int *,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_1 ;
 struct tabcreate_style* VAR_2 ;
 int FUNC_3 (int,char*,scalar_t__,scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(void)
{
    const struct tabcreate_style *VAR_4 = VAR_2;
    DWORD VAR_5;
    HWND VAR_6;

    while (VAR_4->style)
    {
        VAR_6 = FUNC_0(VAR_1, "TestTab", VAR_4->style,
            10, 10, 300, 100, VAR_3, ((void*)0), ((void*)0), 0);
        VAR_5 = FUNC_2(VAR_6, VAR_0);
        FUNC_3(VAR_5 == VAR_4->act_style, "expected style 0x%08x, got style 0x%08x\n", VAR_4->act_style, VAR_5);

        FUNC_1(VAR_6);
        VAR_4++;
    }
}
