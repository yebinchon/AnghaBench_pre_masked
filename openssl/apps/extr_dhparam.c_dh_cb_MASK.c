
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbols ;
typedef int BN_GENCB ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(int VAR_0, int VAR_1, BN_GENCB *VAR_2)
{
    static const char VAR_3[] = ".+*\n";
    char VAR_4 = (VAR_0 >= 0 && (size_t)VAR_0 < sizeof(VAR_3) - 1) ? VAR_3[VAR_0] : '?';

    FUNC_1(FUNC_2(VAR_2), &VAR_4, 1);
    (void)FUNC_0(FUNC_2(VAR_2));
    return 1;
}
