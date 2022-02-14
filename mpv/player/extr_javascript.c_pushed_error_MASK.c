
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int ,int,int *) ;

__attribute__((used)) static bool FUNC_4(js_State *VAR_0, int VAR_1, int VAR_2)
{
    bool VAR_3 = VAR_1 < 0;
    FUNC_3(FUNC_0(VAR_0), VAR_3, VAR_3 ? FUNC_2(VAR_1) : ((void*)0));
    if (!VAR_3)
        return 0;

    FUNC_1(VAR_0, VAR_2);
    return 1;
}
