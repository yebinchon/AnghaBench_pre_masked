
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt32Number ;
typedef int cmsTagTypeSignature ;
typedef int cmsMLU ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct _cms_typehandler_struct*,int *,int *,int ) ;
 scalar_t__ FUNC_1 (int ,struct _cms_typehandler_struct*,int *,int *,int ) ;
 scalar_t__ FUNC_2 (int ,struct _cms_typehandler_struct*,int *,int *,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;




__attribute__((used)) static
cmsBool FUNC_5(cmsContext VAR_1, struct _cms_typehandler_struct* VAR_2, cmsIOHANDLER* VAR_3, cmsMLU** VAR_4, cmsUInt32Number VAR_5)
{
    cmsTagTypeSignature VAR_6;
    cmsUInt32Number VAR_7;

    VAR_6 = FUNC_3(VAR_1, VAR_3);

    switch (VAR_6) {

       case 128:
           if (*VAR_4) FUNC_4(VAR_1, *VAR_4);
           *VAR_4 = (cmsMLU*)FUNC_2(VAR_1, VAR_2, VAR_3, &VAR_7, VAR_5);
           return (*VAR_4 != ((void*)0));

       case 129:
           if (*VAR_4) FUNC_4(VAR_1, *VAR_4);
           *VAR_4 = (cmsMLU*) FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_7, VAR_5);
           return (*VAR_4 != ((void*)0));





       case 130:
           if (*VAR_4) FUNC_4(VAR_1, *VAR_4);
           *VAR_4 = (cmsMLU*) FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_7, VAR_5);
           return (*VAR_4 != ((void*)0));

       default: return VAR_0;
    }
}
