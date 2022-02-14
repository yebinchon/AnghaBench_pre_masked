
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t cmsUInt32Number ;
typedef int cmsUInt16Number ;
struct TYPE_2__ {size_t nOutputChans; scalar_t__ MaxTAC; int * MaxInput; int hRoundTrip; } ;
typedef TYPE_1__ cmsTACestimator ;
typedef scalar_t__ cmsFloat32Number ;
typedef int cmsContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int const*,scalar_t__*,int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static
int FUNC_2(cmsContext VAR_2, register const cmsUInt16Number VAR_3[], register cmsUInt16Number VAR_4[], register void * VAR_5)
{
    cmsTACestimator* VAR_6 = (cmsTACestimator*) VAR_5;
    cmsFloat32Number VAR_7[VAR_1];
    cmsUInt32Number VAR_8;
    cmsFloat32Number VAR_9;



    FUNC_0(VAR_2, VAR_6->hRoundTrip, VAR_3, VAR_7, 1);


    for (VAR_9=0, VAR_8=0; VAR_8 < VAR_6 ->nOutputChans; VAR_8++)
            VAR_9 += VAR_7[VAR_8];


    if (VAR_9 > VAR_6 ->MaxTAC) {

            VAR_6 ->MaxTAC = VAR_9;

            for (VAR_8=0; VAR_8 < VAR_6 ->nOutputChans; VAR_8++) {
                VAR_6 ->MaxInput[VAR_8] = VAR_3[VAR_8];
            }
    }

    return VAR_0;

    FUNC_1(VAR_4);
}
