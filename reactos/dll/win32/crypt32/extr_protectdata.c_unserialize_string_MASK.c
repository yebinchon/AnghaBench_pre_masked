
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int * FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int const*,scalar_t__) ;
 int FUNC_2 (int const*,scalar_t__*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static
BOOL FUNC_3(const BYTE *VAR_2, DWORD *VAR_3, DWORD VAR_4,
                        DWORD VAR_5, DWORD VAR_6, BOOL VAR_7,
                        BYTE ** VAR_8, DWORD * VAR_9)
{


    if (!VAR_2 || !VAR_8) return VAR_0;

    if (VAR_7) {
        if (!FUNC_2(VAR_2,VAR_3,VAR_4,&VAR_5))
            return VAR_0;
    }

    if (*VAR_3+VAR_5*VAR_6>VAR_4)
    {
        return VAR_0;
    }

    if (!(*VAR_8 = FUNC_0( VAR_5*VAR_6)))
    {
        return VAR_0;
    }

    FUNC_1(*VAR_8,&(VAR_2[*VAR_3]),VAR_5*VAR_6);
    if (VAR_9)
    {
        *VAR_9 = VAR_5;
    }
    *VAR_3+=VAR_5*VAR_6;

    return VAR_1;
}
