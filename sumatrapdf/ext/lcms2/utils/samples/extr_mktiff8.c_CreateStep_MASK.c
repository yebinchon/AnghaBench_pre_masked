
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ cmsUInt16Number ;
typedef int cmsToneCurve ;


 double FUNC_0 (double) ;
 scalar_t__* FUNC_1 (int,int) ;
 int * FUNC_2 (int ,int,scalar_t__*) ;
 scalar_t__ FUNC_3 (double) ;
 int FUNC_4 (scalar_t__*) ;

__attribute__((used)) static
cmsToneCurve* FUNC_5(void)
{
 cmsToneCurve* VAR_0;
 cmsUInt16Number* VAR_1;
 int VAR_2;
 double VAR_3;

 VAR_1 = FUNC_1(4096, sizeof(cmsUInt16Number));
 if (VAR_1 == ((void*)0)) return ((void*)0);

 for (VAR_2=0; VAR_2 < 4096; VAR_2++) {

  VAR_3 = (double) VAR_2 * 255. / 4095.;

  VAR_3 = FUNC_0(VAR_3);

  VAR_1[VAR_2] = (cmsUInt16Number) FUNC_3(VAR_3 * 257. + 0.5);
 }

 VAR_0 = FUNC_2(0, 4096, VAR_1);
 FUNC_4(VAR_1);

 return VAR_0;
}
