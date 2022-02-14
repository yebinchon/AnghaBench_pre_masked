
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINE_MCIMIDI ;
typedef int DWORD ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static DWORD FUNC_4(DWORD VAR_0)
{
    WINE_MCIMIDI* VAR_1 = (WINE_MCIMIDI*)FUNC_2(VAR_0);

    if (VAR_1) {
 FUNC_1(FUNC_0(), 0, VAR_1);
 FUNC_3(VAR_0, 0);
 return 1;
    }
    return (VAR_0 == 0xFFFFFFFF) ? 1 : 0;
}
