
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 double VAR_0 ;
 double VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 double FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(js_State *VAR_2, int VAR_3)
{
    double VAR_4 = FUNC_1(VAR_2, VAR_3);
    if (!(VAR_4 >= VAR_1 && VAR_4 <= VAR_0))
        FUNC_0(VAR_2, "int out of range at index %d", VAR_3);
    return VAR_4;
}
