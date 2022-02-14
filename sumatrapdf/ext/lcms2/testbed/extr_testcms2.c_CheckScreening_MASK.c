
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int cmsTagSignature ;
struct TYPE_5__ {int nChannels; TYPE_1__* Channels; int Flag; } ;
typedef TYPE_2__ cmsScreening ;
typedef int cmsInt32Number ;
typedef int cmsHPROFILE ;
struct TYPE_4__ {double Frequency; double ScreenAngle; int SpotShape; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,double,double) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,int ,TYPE_2__*) ;

__attribute__((used)) static
cmsInt32Number FUNC_4(cmsInt32Number VAR_1, cmsHPROFILE VAR_2, cmsTagSignature VAR_3)
{
    cmsScreening *VAR_4, VAR_5;
    cmsInt32Number VAR_6;

    switch (VAR_1) {

        case 1:

            VAR_5.Flag = 0;
            VAR_5.nChannels = 1;
            VAR_5.Channels[0].Frequency = 2.0;
            VAR_5.Channels[0].ScreenAngle = 3.0;
            VAR_5.Channels[0].SpotShape = VAR_0;

            VAR_6 = FUNC_3(FUNC_0(), VAR_2, VAR_3, &VAR_5);
            return VAR_6;


        case 2:
            VAR_4 = (cmsScreening *) FUNC_2(FUNC_0(), VAR_2, VAR_3);
            if (VAR_4 == ((void*)0)) return 0;

            if (VAR_4 ->nChannels != 1) return 0;
            if (VAR_4 ->Flag != 0) return 0;
            if (!FUNC_1("Freq", VAR_4 ->Channels[0].Frequency, 2.0)) return 0;
            if (!FUNC_1("Angle", VAR_4 ->Channels[0].ScreenAngle, 3.0)) return 0;
            if (VAR_4 ->Channels[0].SpotShape != VAR_0) return 0;
            return 1;

        default:
            return 0;
    }
}
