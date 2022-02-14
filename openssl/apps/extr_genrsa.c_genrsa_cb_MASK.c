
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_GENCB ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(int VAR_1, int VAR_2, BN_GENCB *VAR_3)
{
    char VAR_4 = '*';

    if (!VAR_0)
        return 1;

    if (VAR_1 == 0)
        VAR_4 = '.';
    if (VAR_1 == 1)
        VAR_4 = '+';
    if (VAR_1 == 2)
        VAR_4 = '*';
    if (VAR_1 == 3)
        VAR_4 = '\n';
    FUNC_1(FUNC_2(VAR_3), &VAR_4, 1);
    (void)FUNC_0(FUNC_2(VAR_3));
    return 1;
}
