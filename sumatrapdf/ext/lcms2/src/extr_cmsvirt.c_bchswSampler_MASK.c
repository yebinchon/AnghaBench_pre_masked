
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int cmsUInt16Number ;
typedef int cmsContext ;
typedef int cmsCIEXYZ ;
typedef int cmsCIELab ;
struct TYPE_5__ {int L; scalar_t__ h; scalar_t__ C; } ;
typedef TYPE_1__ cmsCIELCh ;
struct TYPE_6__ {int Contrast; int Brightness; int WPdest; int WPsrc; scalar_t__ lAdjustWP; scalar_t__ Hue; scalar_t__ Saturation; } ;
typedef TYPE_2__* LPBCHSWADJUSTS ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*,int *) ;
 int FUNC_3 (int ,int *,int *,int *) ;
 int FUNC_4 (int ,int *,int const*) ;
 int FUNC_5 (int ,int *,int *,int *) ;

__attribute__((used)) static
int FUNC_6(cmsContext VAR_1, register const cmsUInt16Number VAR_2[], register cmsUInt16Number VAR_3[], register void* VAR_4)
{
    cmsCIELab VAR_5, VAR_6;
    cmsCIELCh VAR_7, VAR_8;
    cmsCIEXYZ VAR_9;
    LPBCHSWADJUSTS VAR_10 = (LPBCHSWADJUSTS) VAR_4;


    FUNC_4(VAR_1, &VAR_5, VAR_2);


    FUNC_2(VAR_1, &VAR_7, &VAR_5);



    VAR_8.L = VAR_7.L * VAR_10 ->Contrast + VAR_10 ->Brightness;
    VAR_8.C = VAR_7.C + VAR_10 -> Saturation;
    VAR_8.h = VAR_7.h + VAR_10 -> Hue;


    FUNC_1(VAR_1, &VAR_6, &VAR_8);


    if (VAR_10->lAdjustWP) {
           FUNC_3(VAR_1, &VAR_10->WPsrc, &VAR_9, &VAR_6);
           FUNC_5(VAR_1, &VAR_10->WPdest, &VAR_6, &VAR_9);
    }



    FUNC_0(VAR_1, VAR_3, &VAR_6);

    return VAR_0;
}
