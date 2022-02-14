
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const) ;

__attribute__((used)) static BOOL FUNC_1(const BYTE *VAR_2, DWORD VAR_3)
{
    const BYTE *VAR_4;

    for(VAR_4 = VAR_2; VAR_4 < VAR_2+VAR_3-1; VAR_4++) {
        if(!FUNC_0(*VAR_4))
            return VAR_0;
    }

    return VAR_1;
}
