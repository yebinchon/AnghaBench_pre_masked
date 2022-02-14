
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t cmsUInt32Number ;
typedef int cmsUInt16Number ;
struct TYPE_2__ {size_t InputChannels; } ;
typedef TYPE_1__ cmsPipeline ;
typedef int cmsContext ;


 int FUNC_0 (int ) ;

__attribute__((used)) static
void FUNC_1(cmsContext VAR_0, register const cmsUInt16Number VAR_1[],
                    register cmsUInt16Number VAR_2[],
                    register const void* VAR_3)
{
    cmsPipeline* VAR_4 = (cmsPipeline*) VAR_3;
    cmsUInt32Number VAR_5;
    FUNC_0(VAR_0);

    for (VAR_5=0; VAR_5 < VAR_4 ->InputChannels; VAR_5++) {
         VAR_2[VAR_5] = VAR_1[VAR_5];
    }
}
