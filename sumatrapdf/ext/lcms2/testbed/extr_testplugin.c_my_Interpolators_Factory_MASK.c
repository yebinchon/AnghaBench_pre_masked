
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int cmsUInt32Number ;
struct TYPE_4__ {int Lerp16; int LerpFloat; } ;
typedef TYPE_1__ cmsInterpFunction ;
typedef int cmsContext ;
typedef int cmsBool ;
typedef int Interpolation ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

cmsInterpFunction FUNC_1(cmsContext VAR_3, cmsUInt32Number VAR_4,
                                           cmsUInt32Number VAR_5,
                                           cmsUInt32Number VAR_6)
{
    cmsInterpFunction VAR_7;
    cmsBool VAR_8 = (VAR_6 & VAR_0);


    FUNC_0(&VAR_7, 0, sizeof(VAR_7));


    if (VAR_4 == 1 && VAR_5 == 1 && VAR_8) {

        VAR_7.LerpFloat = VAR_1;
    }
    else
    if (VAR_4 == 3 && VAR_5 == 3 && !VAR_8) {


        VAR_7.Lerp16 = VAR_2;
    }


    return VAR_7;
}
