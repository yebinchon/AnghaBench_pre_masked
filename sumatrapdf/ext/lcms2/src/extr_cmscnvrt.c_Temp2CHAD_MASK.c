
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsMAT3 ;
typedef int cmsFloat64Number ;
typedef int cmsContext ;
typedef int cmsCIExyY ;
typedef int cmsCIEXYZ ;


 int FUNC_0 (int ,int *,int *,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int *,int *) ;

__attribute__((used)) static
    void FUNC_4(cmsContext VAR_0, cmsMAT3* VAR_1, cmsFloat64Number VAR_2)
{
    cmsCIEXYZ VAR_3;
    cmsCIExyY VAR_4;

    FUNC_2(VAR_0, &VAR_4, VAR_2);
    FUNC_3(VAR_0,&VAR_3, &VAR_4);
    FUNC_0(VAR_0, VAR_1, ((void*)0), &VAR_3, FUNC_1(VAR_0));
}
