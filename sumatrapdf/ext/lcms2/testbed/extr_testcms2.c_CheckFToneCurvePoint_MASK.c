
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt16Number ;
typedef int cmsToneCurve ;
typedef int cmsInt32Number ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static
cmsInt32Number FUNC_3(cmsToneCurve* VAR_0, cmsUInt16Number VAR_1, cmsInt32Number VAR_2)
{
    cmsInt32Number VAR_3;

    VAR_3 = FUNC_2(FUNC_0(), VAR_0, VAR_1);

    return (FUNC_1(VAR_2 - VAR_3) < 2);
}
