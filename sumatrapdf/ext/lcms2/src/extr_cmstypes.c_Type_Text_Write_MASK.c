
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef scalar_t__ cmsUInt32Number ;
typedef int cmsMLU ;
struct TYPE_4__ {int (* Write ) (int ,TYPE_1__*,scalar_t__,char*) ;} ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int ,char*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,TYPE_1__*,scalar_t__,char*) ;

__attribute__((used)) static
cmsBool FUNC_5(cmsContext VAR_3, struct _cms_typehandler_struct* VAR_4, cmsIOHANDLER* VAR_5, void* VAR_6, cmsUInt32Number VAR_7)
{
    cmsMLU* VAR_8 = (cmsMLU*) VAR_6;
    cmsUInt32Number VAR_9;
    cmsBool VAR_10;
    char* VAR_11;
    FUNC_3(VAR_4);


    VAR_9 = FUNC_2(VAR_3, VAR_8, VAR_2, VAR_1, ((void*)0), 0);
    if (VAR_9 == 0) return VAR_0;


    VAR_11 = (char*) FUNC_1(VAR_3, VAR_9);
    if (VAR_11 == ((void*)0)) return VAR_0;

    FUNC_2(VAR_3, VAR_8, VAR_2, VAR_1, VAR_11, VAR_9);


    VAR_10 = VAR_5 ->Write(VAR_3, VAR_5, VAR_9, VAR_11);

    FUNC_0(VAR_3, VAR_11);
    return VAR_10;

    FUNC_3(VAR_7);
}
