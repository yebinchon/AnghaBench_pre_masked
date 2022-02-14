
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
struct TYPE_11__ {int Desc; TYPE_2__* Bg; TYPE_1__* Ucr; } ;
typedef TYPE_3__ cmsUcrBg ;
typedef scalar_t__ cmsUInt32Number ;
struct TYPE_12__ {int (* Write ) (int ,TYPE_4__*,scalar_t__,char*) ;} ;
typedef TYPE_4__ cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_10__ {int Table16; int nEntries; } ;
struct TYPE_9__ {int Table16; int nEntries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,TYPE_4__*,int ,int ) ;
 int FUNC_3 (int ,TYPE_4__*,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,char*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,TYPE_4__*,scalar_t__,char*) ;

__attribute__((used)) static
cmsBool FUNC_7(cmsContext VAR_4, struct _cms_typehandler_struct* VAR_5, cmsIOHANDLER* VAR_6, void* VAR_7, cmsUInt32Number VAR_8)
{
    cmsUcrBg* VAR_9 = (cmsUcrBg*) VAR_7;
    cmsUInt32Number VAR_10;
    char* VAR_11;
    FUNC_5(VAR_5);


    if (!FUNC_3(VAR_4, VAR_6, VAR_9 ->Ucr ->nEntries)) return VAR_0;
    if (!FUNC_2(VAR_4, VAR_6, VAR_9 ->Ucr ->nEntries, VAR_9 ->Ucr ->Table16)) return VAR_0;


    if (!FUNC_3(VAR_4, VAR_6, VAR_9 ->Bg ->nEntries)) return VAR_0;
    if (!FUNC_2(VAR_4, VAR_6, VAR_9 ->Bg ->nEntries, VAR_9 ->Bg ->Table16)) return VAR_0;


    VAR_10 = FUNC_4(VAR_4, VAR_9 ->Desc, VAR_3, VAR_2, ((void*)0), 0);
    VAR_11 = (char*) FUNC_1(VAR_4, VAR_10);
    if (FUNC_4(VAR_4, VAR_9 ->Desc, VAR_3, VAR_2, VAR_11, VAR_10) != VAR_10) return VAR_0;

    if (!VAR_6 ->Write(VAR_4, VAR_6, VAR_10, VAR_11)) return VAR_0;
    FUNC_0(VAR_4, VAR_11);

    return VAR_1;

    FUNC_5(VAR_8);
}
