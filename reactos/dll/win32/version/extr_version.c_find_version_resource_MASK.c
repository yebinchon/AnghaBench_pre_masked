
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HFILE ;
typedef int DWORD ;




 int FUNC_0 (int ,int*,int*) ;
 int FUNC_1 (int ,int*,int*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static DWORD FUNC_3( HFILE VAR_0, DWORD *VAR_1, DWORD *VAR_2, DWORD VAR_3 )
{
    DWORD VAR_4 = FUNC_2( VAR_0 );

    switch (VAR_4)
    {
    case 128:
        if (!FUNC_0( VAR_0, VAR_1, VAR_2 )) VAR_4 = 0;
        break;
    case 129:
        if (!FUNC_1( VAR_0, VAR_1, VAR_2, VAR_3 )) VAR_4 = 0;
        break;
    }
    return VAR_4;
}
