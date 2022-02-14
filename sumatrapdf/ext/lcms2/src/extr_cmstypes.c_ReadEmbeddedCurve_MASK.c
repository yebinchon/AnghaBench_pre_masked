
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt32Number ;
typedef int cmsToneCurve ;
typedef int cmsTagTypeSignature ;
typedef int cmsTagSignature ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;


 scalar_t__ FUNC_0 (int ,struct _cms_typehandler_struct*,int *,int *,int ) ;
 scalar_t__ FUNC_1 (int ,struct _cms_typehandler_struct*,int *,int *,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char*,int ) ;
 int VAR_0 ;


 int FUNC_4 (int ,int ,char*,char*) ;

__attribute__((used)) static
cmsToneCurve* FUNC_5(cmsContext VAR_1, struct _cms_typehandler_struct* VAR_2, cmsIOHANDLER* VAR_3)
{
    cmsTagTypeSignature VAR_4;
    cmsUInt32Number VAR_5;

    VAR_4 = FUNC_2(VAR_1, VAR_3);
    switch (VAR_4) {

            case 129:
                return (cmsToneCurve*) FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_5, 0);

            case 128:
                return (cmsToneCurve*) FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_5, 0);

            default:
                {
                    char VAR_6[5];

                    FUNC_3(VAR_6, (cmsTagSignature) VAR_4);
                    FUNC_4(VAR_1, VAR_0, "Unknown curve type '%s'", VAR_6);
                }
                return ((void*)0);
    }
}
