
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ URLTEMPLATE ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (char*,scalar_t__,int) ;
 scalar_t__* VAR_0 ;

__attribute__((used)) static DWORD FUNC_3(URLTEMPLATE VAR_1)
{

    DWORD VAR_2 = FUNC_0(VAR_0);

    while((VAR_2 > 0) && (VAR_0[VAR_2-1] != VAR_1))
        VAR_2--;

    VAR_2--;
    if (!VAR_2 && VAR_1)
        FUNC_1("URLTEMPLATE 0x%x not supported\n", VAR_1);

    FUNC_2("URLTEMPLATE 0x%08x=> Level %d\n", VAR_1, VAR_2);
    return VAR_2;
}
