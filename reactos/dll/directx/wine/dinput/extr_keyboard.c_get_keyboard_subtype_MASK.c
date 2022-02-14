
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static DWORD FUNC_2(void)
{
    DWORD VAR_2, VAR_3, VAR_4;
    VAR_2 = FUNC_1(0);
    VAR_3 = FUNC_1(1);

    if (VAR_2 == 4 || (VAR_2 == 7 && VAR_3 == 0))
        VAR_4 = VAR_1;
    else if (VAR_2 == 7 && VAR_3 == 2)
        VAR_4 = VAR_0;
    else {
        FUNC_0("Unknown keyboard type=%u, subtype=%u\n", VAR_2, VAR_3);
        VAR_4 = VAR_1;
    }
    return VAR_4;
}
