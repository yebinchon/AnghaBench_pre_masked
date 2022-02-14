
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ cmsTechnologySignature ;
typedef void* cmsSignature ;
struct TYPE_7__ {TYPE_1__* seq; } ;
typedef TYPE_2__ cmsSEQ ;
typedef int cmsHPROFILE ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_6__ {int Model; int Manufacturer; scalar_t__ technology; scalar_t__* attributes; void* deviceModel; void* deviceMfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ,int ,char const*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static
cmsBool FUNC_4(cmsContext VAR_4, cmsHPROFILE VAR_5, const char* VAR_6)
{
    cmsBool VAR_7 = VAR_0;
    cmsSEQ* VAR_8 = FUNC_1(VAR_4, 1);

    if (VAR_8 == ((void*)0)) return VAR_0;

    VAR_8->seq[0].deviceMfg = (cmsSignature) 0;
    VAR_8->seq[0].deviceModel = (cmsSignature) 0;





    VAR_8->seq[0].attributes = 0;


    VAR_8->seq[0].technology = (cmsTechnologySignature) 0;

    FUNC_3(VAR_4, VAR_8->seq[0].Manufacturer, VAR_3, VAR_2, "Little CMS");
    FUNC_3(VAR_4, VAR_8->seq[0].Model, VAR_3, VAR_2, VAR_6);

    if (!FUNC_0(VAR_4, VAR_5, VAR_8)) goto Error;

    VAR_7 = VAR_1;

Error:
    if (VAR_8)
        FUNC_2(VAR_4, VAR_8);

    return VAR_7;
}
