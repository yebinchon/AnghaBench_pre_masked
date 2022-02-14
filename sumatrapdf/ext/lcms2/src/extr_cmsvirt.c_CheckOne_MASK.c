
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* Next; } ;
typedef TYPE_1__ cmsStage ;
struct TYPE_8__ {TYPE_1__* Elements; } ;
typedef TYPE_2__ cmsPipeline ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_9__ {int nTypes; scalar_t__* MpeTypes; } ;
typedef TYPE_3__ cmsAllowedLUT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;

__attribute__((used)) static
cmsBool FUNC_1(cmsContext VAR_1, const cmsAllowedLUT* VAR_2, const cmsPipeline* VAR_3)
{
    cmsStage* VAR_4;
    int VAR_5;

    for (VAR_5=0, VAR_4 = VAR_3 ->Elements; VAR_4 != ((void*)0); VAR_4 = VAR_4 ->Next, VAR_5++) {

        if (VAR_5 > VAR_2 ->nTypes) return VAR_0;
        if (FUNC_0(VAR_1, VAR_4) != VAR_2 ->MpeTypes[VAR_5]) return VAR_0;
    }

    return (VAR_5 == VAR_2 ->nTypes);
}
