
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
struct TYPE_2__ {scalar_t__ Desc; scalar_t__ Bg; scalar_t__ Ucr; } ;
typedef TYPE_1__ cmsUcrBg ;
typedef int cmsContext ;


 int FUNC_0 (int ,void*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct _cms_typehandler_struct*) ;

__attribute__((used)) static
void FUNC_4(cmsContext VAR_0, struct _cms_typehandler_struct* VAR_1, void *VAR_2)
{
   cmsUcrBg* VAR_3 = (cmsUcrBg*) VAR_2;
   FUNC_3(VAR_1);

   if (VAR_3 ->Ucr) FUNC_1(VAR_0, VAR_3 ->Ucr);
   if (VAR_3 ->Bg) FUNC_1(VAR_0, VAR_3 ->Bg);
   if (VAR_3 ->Desc) FUNC_2(VAR_0, VAR_3 ->Desc);

   FUNC_0(VAR_0, VAR_2);
}
