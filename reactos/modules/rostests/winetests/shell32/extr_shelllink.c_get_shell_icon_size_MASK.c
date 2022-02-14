
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (int ,char*,int *,int*,int *,int*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(void)
{
    char VAR_2[10];
    DWORD VAR_3 = 32, VAR_4 = sizeof(VAR_2), VAR_5;
    HKEY VAR_6;

    if (!FUNC_1( VAR_0, "Control Panel\\Desktop\\WindowMetrics", &VAR_6 ))
    {
        if (!FUNC_2( VAR_6, "Shell Icon Size", ((void*)0), &VAR_5, (BYTE *)VAR_2, &VAR_4 ) && VAR_5 == VAR_1)
            VAR_3 = FUNC_3( VAR_2 );
        FUNC_0( VAR_6 );
    }
    return VAR_3;
}
