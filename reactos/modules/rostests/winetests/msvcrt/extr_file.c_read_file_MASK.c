
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int HANDLE ;
typedef size_t DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,size_t*,int *) ;
 int FUNC_1 (int ,int ,int *,int ) ;

__attribute__((used)) static const char *FUNC_2( HANDLE VAR_1 )
{
    static char VAR_2[128];
    DWORD VAR_3;
    FUNC_1( VAR_1, 0, ((void*)0), VAR_0 );
    if (!FUNC_0( VAR_1, VAR_2, sizeof(VAR_2) - 1, &VAR_3, ((void*)0))) VAR_3 = 0;
    VAR_2[VAR_3] = 0;
    return VAR_2;
}
