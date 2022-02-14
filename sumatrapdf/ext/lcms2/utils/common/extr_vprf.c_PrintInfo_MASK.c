
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInfoType ;
typedef int cmsHPROFILE ;
typedef int cmsContext ;


 int FUNC_0 (int ,int ,int ,char*,char*,char*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static
void FUNC_5(cmsContext VAR_0, cmsHPROFILE VAR_1, cmsInfoType VAR_2)
{
    char* VAR_3;
    int VAR_4;

    VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, "en", "US", ((void*)0), 0);
    if (VAR_4 == 0) return;

    VAR_3 = (char*) FUNC_2(VAR_4 * sizeof(char));
    if (VAR_3 == ((void*)0)) return;

    FUNC_0(VAR_0, VAR_1, VAR_2, "en", "US", VAR_3, VAR_4);

    if (FUNC_4(VAR_3) > 0)
        FUNC_3("%s\n", VAR_3);

    FUNC_1(VAR_3);
}
