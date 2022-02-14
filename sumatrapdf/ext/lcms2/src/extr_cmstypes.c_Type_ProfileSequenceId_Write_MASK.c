
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef scalar_t__ cmsUInt32Number ;
struct TYPE_8__ {int n; } ;
typedef TYPE_1__ cmsSEQ ;
struct TYPE_9__ {scalar_t__ (* Tell ) (int ,TYPE_2__*) ;} ;
typedef TYPE_2__ cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;
typedef int _cmsTagBase ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct _cms_typehandler_struct*,TYPE_2__*,int ,int ,scalar_t__,TYPE_1__*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_2__*,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,TYPE_2__*) ;

__attribute__((used)) static
cmsBool FUNC_4(cmsContext VAR_3, struct _cms_typehandler_struct* VAR_4, cmsIOHANDLER* VAR_5, void* VAR_6, cmsUInt32Number VAR_7)
{
    cmsSEQ* VAR_8 = (cmsSEQ*) VAR_6;
    cmsUInt32Number VAR_9;


    VAR_9 = VAR_5 ->Tell(VAR_3, VAR_5) - sizeof(_cmsTagBase);


    if (!FUNC_1(VAR_3, VAR_5, VAR_8 ->n)) return VAR_0;


    if (!FUNC_0(VAR_3, VAR_4, VAR_5, 0, VAR_8 ->n, VAR_9, VAR_8, VAR_2)) return VAR_0;

    return VAR_1;

    FUNC_2(VAR_7);
}
