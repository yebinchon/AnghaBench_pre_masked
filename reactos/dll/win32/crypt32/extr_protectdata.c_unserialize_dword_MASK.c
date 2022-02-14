
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int const*,int) ;

__attribute__((used)) static
BOOL FUNC_1(const BYTE *VAR_2, DWORD *VAR_3, DWORD VAR_4, DWORD *VAR_5)
{


    if (!VAR_2 || !VAR_3 || !VAR_5) return VAR_0;

    if (*VAR_3+sizeof(DWORD)>VAR_4)
    {
        return VAR_0;
    }

    FUNC_0(VAR_5,&(VAR_2[*VAR_3]),sizeof(DWORD));
    *VAR_3+=sizeof(DWORD);

    return VAR_1;
}
