
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ cmsFloat64Number ;
typedef int cmsContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,int ) ;
 int FUNC_1 (int ,int ,int ,char const*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static
void FUNC_3(cmsContext VAR_4, const char* VAR_5, cmsFloat64Number VAR_6)
{
    if (VAR_3)
        VAR_6 = FUNC_2(VAR_6 + 0.5);

    if (!FUNC_1(VAR_4, VAR_2, VAR_0, VAR_5, VAR_6)) {
        FUNC_0("couldn't set '%s' on output cgats '%s'", VAR_5, VAR_1);
    }
}
