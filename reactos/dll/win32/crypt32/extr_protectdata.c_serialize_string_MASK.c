
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (int,int **) ;

__attribute__((used)) static
void FUNC_2(const BYTE *VAR_0, BYTE **VAR_1, DWORD VAR_2, DWORD VAR_3,
                      BOOL VAR_4)
{


    if (VAR_4)
    {
        FUNC_1(VAR_2,VAR_1);
    }
    FUNC_0(*VAR_1,VAR_0,VAR_2*VAR_3);
    *VAR_1+=VAR_2*VAR_3;
}
