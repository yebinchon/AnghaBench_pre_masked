
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int SHORT ;
typedef int LPTSTR ;
typedef scalar_t__ INT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,scalar_t__) ;

__attribute__((used)) static VOID
FUNC_5(LPTSTR VAR_0, INT VAR_1, SHORT VAR_2, SHORT VAR_3)
{
    INT VAR_4;

    FUNC_1 (VAR_2, VAR_3);
    for (VAR_4 = 0; VAR_4 < (INT)FUNC_3 (VAR_0); VAR_4++)
        FUNC_0 (FUNC_2(' '));
    FUNC_4 (VAR_0, FUNC_2('\0'), VAR_1);
    FUNC_1 (VAR_2, VAR_3);
}
