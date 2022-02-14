
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
struct TYPE_2__ {int Desc; void* Ucr; void* Bg; } ;
typedef TYPE_1__ cmsUcrBg ;
typedef struct _cms_typehandler_struct* cmsUInt32Number ;
typedef int cmsContext ;


 scalar_t__ FUNC_0 (int ,int) ;
 void* FUNC_1 (int ,void*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct _cms_typehandler_struct*) ;

__attribute__((used)) static
void* FUNC_4(cmsContext VAR_0, struct _cms_typehandler_struct* VAR_1, const void *VAR_2, cmsUInt32Number VAR_3)
{
    cmsUcrBg* VAR_4 = (cmsUcrBg*) VAR_2;
    cmsUcrBg* VAR_5 = (cmsUcrBg*) FUNC_0(VAR_0, sizeof(cmsUcrBg));
    FUNC_3(VAR_1);

    if (VAR_5 == ((void*)0)) return ((void*)0);

    VAR_5 ->Bg = FUNC_1(VAR_0, VAR_4 ->Bg);
    VAR_5 ->Ucr = FUNC_1(VAR_0, VAR_4 ->Ucr);
    VAR_5 ->Desc = FUNC_2(VAR_0, VAR_4 ->Desc);

    return (void*) VAR_5;

    FUNC_3(VAR_3);
}
