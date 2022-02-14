
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double uint64_t ;
typedef int js_State ;


 double VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 double FUNC_1 (int *,int) ;

__attribute__((used)) static uint64_t FUNC_2(js_State *VAR_1, int VAR_2)
{
    double VAR_3 = FUNC_1(VAR_1, VAR_2);
    if (!(VAR_3 >= 0 && VAR_3 <= VAR_0))
        FUNC_0(VAR_1, "uint64 out of range at index %d", VAR_2);
    return VAR_3;
}
