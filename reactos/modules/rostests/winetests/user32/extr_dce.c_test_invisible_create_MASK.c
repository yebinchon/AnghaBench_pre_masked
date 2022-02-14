
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HWND ;
typedef scalar_t__ HDC ;


 int FUNC_0 (char*,int *,int ,int ,int,int,int,int ,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_5 (int,char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    HWND VAR_1 = FUNC_0("owndc_class", ((void*)0), VAR_0,
                                    0, 200, 100, 100,
                                    0, 0, FUNC_3(0), ((void*)0) );
    HDC VAR_2, VAR_3;

    VAR_2 = FUNC_2(VAR_1);
    VAR_3 = FUNC_2(VAR_1);

    FUNC_5(VAR_2 == VAR_3, "expected owndc dcs to match\n");

    FUNC_4(VAR_1, VAR_3);
    FUNC_4(VAR_1, VAR_2);
    FUNC_1(VAR_1);
}
