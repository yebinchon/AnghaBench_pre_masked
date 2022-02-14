
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt16Number ;
typedef void* cmsContext ;
typedef int cmsCIELab ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,int *,int,int,int,int) ;
 int FUNC_3 (int *,int *,int const*) ;

__attribute__((used)) static
int FUNC_4(cmsContext VAR_1, register const cmsUInt16Number VAR_2[], register cmsUInt16Number VAR_3[], register void* VAR_4)
{
    cmsCIELab VAR_5;

    FUNC_3(((void*)0), &VAR_5, VAR_2);
    FUNC_2(((void*)0), &VAR_5, 85, -85, 125, -75);
    FUNC_0(&VAR_5, VAR_3);
    return VAR_0;

    FUNC_1(VAR_4);
    FUNC_1(VAR_1);
}
