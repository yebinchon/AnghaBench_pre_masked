
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 char* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int const*,int,char*,int,int *,int *) ;

char* FUNC_4(const WCHAR* VAR_1)
{
    if(VAR_1)
    {
        char* VAR_2;
        int VAR_3 = FUNC_3(VAR_0, 0, VAR_1, -1, ((void*)0), 0, ((void*)0), ((void*)0));

        VAR_2 = FUNC_2(FUNC_1(), 0, VAR_3);
        FUNC_0(VAR_2);
        FUNC_3(VAR_0, 0, VAR_1, -1, VAR_2, VAR_3, ((void*)0), ((void*)0));
        return VAR_2;
    }
    return ((void*)0);
}
