
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int MSIPACKAGE ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int) ;






 int FUNC_2 (int ,int*) ;

__attribute__((used)) static UINT FUNC_3( MSIPACKAGE *VAR_0, HANDLE VAR_1 )
{
    DWORD VAR_2 = 0;

    FUNC_2( VAR_1, &VAR_2 );

    switch (VAR_2)
    {
    case 133:
    case 128:
    case 130:
    case 132:
        return VAR_2;
    case 129:
        return 128;
    case 131:
        FUNC_0( VAR_0 );
        return 128;
    default:
        FUNC_1("Invalid Return Code %d\n",VAR_2);
        return 132;
    }
}
