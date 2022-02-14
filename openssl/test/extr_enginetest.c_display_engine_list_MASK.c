
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ENGINE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(void)
{
    ENGINE *VAR_0;
    int VAR_1;

    VAR_1 = 0;
    for (VAR_0 = FUNC_1(); VAR_0 != ((void*)0); VAR_0 = FUNC_4(VAR_0)) {
        FUNC_5("#%d: id = \"%s\", name = \"%s\"",
               VAR_1++, FUNC_2(VAR_0), FUNC_3(VAR_0));
    }





    FUNC_0(VAR_0);
}
