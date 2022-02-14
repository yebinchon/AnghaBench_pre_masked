
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t cmsUInt32Number ;
typedef double cmsUInt16Number ;
struct TYPE_3__ {int InputChannels; int OutputChannels; } ;
typedef TYPE_1__ cmsPipeline ;
typedef int cmsInt32Number ;
typedef double cmsFloat32Number ;
typedef int cmsContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 double FUNC_1 (double) ;
 int VAR_1 ;
 int FUNC_2 (int ,double*,double*,TYPE_1__*) ;

__attribute__((used)) static
cmsInt32Number FUNC_3(cmsContext VAR_2, register const cmsUInt16Number VAR_3[], register cmsUInt16Number VAR_4[], register void* VAR_5)
{
    cmsPipeline* VAR_6 = (cmsPipeline*) VAR_5;
    cmsFloat32Number VAR_7[VAR_1], VAR_8[VAR_1];
    cmsUInt32Number VAR_9;

    FUNC_0(VAR_6 -> InputChannels < VAR_1);
    FUNC_0(VAR_6 -> OutputChannels < VAR_1);


    for (VAR_9=0; VAR_9 < VAR_6 ->InputChannels; VAR_9++)
        VAR_7[VAR_9] = (cmsFloat32Number) (VAR_3[VAR_9] / 65535.0);


    FUNC_2(VAR_2, VAR_7, VAR_8, VAR_6);


    for (VAR_9=0; VAR_9 < VAR_6 ->OutputChannels; VAR_9++)
        VAR_4[VAR_9] = FUNC_1(VAR_8[VAR_9] * 65535.0);


    return VAR_0;
}
