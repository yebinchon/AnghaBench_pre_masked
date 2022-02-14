
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,char const*,int,int *,int) ;

WCHAR* FUNC_4(const char* VAR_1)
{
    if(VAR_1)
    {
        WCHAR* VAR_2;
        int VAR_3 = FUNC_3(VAR_0, 0, VAR_1, -1, ((void*)0), 0);

        VAR_2 = FUNC_2(FUNC_1(), 0, VAR_3 * sizeof(WCHAR));
        FUNC_0(VAR_2);
        FUNC_3(VAR_0, 0, VAR_1, -1, VAR_2, VAR_3);
        return VAR_2;
    }
    return ((void*)0);
}
