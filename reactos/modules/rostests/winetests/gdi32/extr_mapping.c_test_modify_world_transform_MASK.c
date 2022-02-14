
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HDC ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,char*,int) ;

__attribute__((used)) static void FUNC_5(void)
{
    HDC VAR_4 = FUNC_0(0);
    int VAR_5;

    VAR_5 = FUNC_3(VAR_4, VAR_0);
    FUNC_4(VAR_5, "ret = %d\n", VAR_5);

    VAR_5 = FUNC_1(VAR_4, ((void*)0), VAR_1);
    FUNC_4(VAR_5, "ret = %d\n", VAR_5);

    VAR_5 = FUNC_1(VAR_4, ((void*)0), VAR_2);
    FUNC_4(!VAR_5, "ret = %d\n", VAR_5);

    VAR_5 = FUNC_1(VAR_4, ((void*)0), VAR_3);
    FUNC_4(!VAR_5, "ret = %d\n", VAR_5);

    FUNC_2(0, VAR_4);
}
