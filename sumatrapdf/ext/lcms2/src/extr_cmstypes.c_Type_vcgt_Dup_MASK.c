
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _cms_typehandler_struct {int dummy; } ;
typedef struct _cms_typehandler_struct* cmsUInt32Number ;
typedef int cmsToneCurve ;
typedef int cmsContext ;


 scalar_t__ FUNC_0 (int ,int,int) ;
 int * FUNC_1 (int ,int *) ;
 int FUNC_2 (struct _cms_typehandler_struct*) ;

__attribute__((used)) static
void* FUNC_3(cmsContext VAR_0, struct _cms_typehandler_struct* VAR_1, const void *VAR_2, cmsUInt32Number VAR_3)
{
    cmsToneCurve** VAR_4 = (cmsToneCurve**) VAR_2;
    cmsToneCurve** VAR_5;
    FUNC_2(VAR_1);

    VAR_5 = ( cmsToneCurve**) FUNC_0(VAR_0, 3, sizeof(cmsToneCurve*));
    if (VAR_5 == ((void*)0)) return ((void*)0);

    VAR_5[0] = FUNC_1(VAR_0, VAR_4[0]);
    VAR_5[1] = FUNC_1(VAR_0, VAR_4[1]);
    VAR_5[2] = FUNC_1(VAR_0, VAR_4[2]);

    return (void*) VAR_5;

    FUNC_2(VAR_3);
}
