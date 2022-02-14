
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef struct _cms_typehandler_struct* cmsUInt32Number ;
struct TYPE_6__ {int (* Write ) (int ,TYPE_1__*,int ,int ) ;} ;
typedef TYPE_1__ cmsIOHANDLER ;
struct TYPE_7__ {int data; int len; int flag; } ;
typedef TYPE_2__ cmsICCData ;
typedef int cmsContext ;
typedef int cmsBool ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int FUNC_1 (struct _cms_typehandler_struct*) ;
 int FUNC_2 (int ,TYPE_1__*,int ,int ) ;

__attribute__((used)) static
cmsBool FUNC_3(cmsContext VAR_1, struct _cms_typehandler_struct* VAR_2, cmsIOHANDLER* VAR_3, void* VAR_4, cmsUInt32Number VAR_5)
{
   cmsICCData* VAR_6 = (cmsICCData*) VAR_4;

   if (!FUNC_0(VAR_1, VAR_3, VAR_6 ->flag)) return VAR_0;

   return VAR_3 ->Write(VAR_1, VAR_3, VAR_6 ->len, VAR_6 ->data);

   FUNC_1(VAR_5);
   FUNC_1(VAR_2);
}
