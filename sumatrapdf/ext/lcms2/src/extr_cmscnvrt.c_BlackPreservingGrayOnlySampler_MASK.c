
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int cmsUInt16Number ;
typedef int cmsContext ;
struct TYPE_4__ {TYPE_1__* cmyk2cmyk; int KTone; } ;
struct TYPE_3__ {int Data; int (* Eval16Fn ) (int ,int const*,int *,int ) ;} ;
typedef TYPE_2__ GrayOnlyParams ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int const) ;
 int FUNC_1 (int ,int const*,int *,int ) ;

__attribute__((used)) static
int FUNC_2(cmsContext VAR_1, register const cmsUInt16Number VAR_2[], register cmsUInt16Number VAR_3[], register void* VAR_4)
{
    GrayOnlyParams* VAR_5 = (GrayOnlyParams*) VAR_4;


    if (VAR_2[0] == 0 && VAR_2[1] == 0 && VAR_2[2] == 0) {


        VAR_3[0] = VAR_3[1] = VAR_3[2] = 0;
        VAR_3[3] = FUNC_0(VAR_1, VAR_5->KTone, VAR_2[3]);
        return VAR_0;
    }


    VAR_5 ->cmyk2cmyk ->Eval16Fn(VAR_1, VAR_2, VAR_3, VAR_5 ->cmyk2cmyk->Data);
    return VAR_0;
}
