
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _cms_typehandler_struct {int dummy; } ;
typedef size_t cmsUInt32Number ;
typedef int cmsToneCurve ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;


 int * FUNC_0 (int ,struct _cms_typehandler_struct*,int *) ;
 int FUNC_1 (size_t) ;

__attribute__((used)) static
cmsBool FUNC_2(cmsContext VAR_0, struct _cms_typehandler_struct* VAR_1,
                     cmsIOHANDLER* VAR_2,
                     void* VAR_3,
                     cmsUInt32Number VAR_4,
                     cmsUInt32Number VAR_5)
{
      cmsToneCurve** VAR_6 = ( cmsToneCurve**) VAR_3;

      VAR_6[VAR_4] = FUNC_0(VAR_0, VAR_1, VAR_2);
      return (VAR_6[VAR_4] != ((void*)0));

      FUNC_1(VAR_5);
}
