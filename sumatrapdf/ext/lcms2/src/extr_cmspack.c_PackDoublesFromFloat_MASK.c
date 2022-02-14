
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cmsUInt8Number ;
typedef int cmsUInt32Number ;
typedef double cmsFloat64Number ;
typedef double cmsFloat32Number ;
typedef int cmsContext ;
struct TYPE_3__ {int OutputFormat; } ;
typedef TYPE_1__ _cmsTRANSFORM ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (double*,double*,int) ;

__attribute__((used)) static
cmsUInt8Number* FUNC_9(cmsContext VAR_0, _cmsTRANSFORM* VAR_1,
                                    cmsFloat32Number VAR_2[],
                                    cmsUInt8Number* VAR_3,
                                    cmsUInt32Number VAR_4)
{
       cmsUInt32Number VAR_5 = FUNC_2(VAR_1->OutputFormat);
       cmsUInt32Number VAR_6 = FUNC_3(VAR_1->OutputFormat);
       cmsUInt32Number VAR_7 = FUNC_5(VAR_1->OutputFormat);
       cmsUInt32Number VAR_8 = FUNC_4(VAR_1->OutputFormat);
       cmsUInt32Number VAR_9 = FUNC_7(VAR_1->OutputFormat);
       cmsUInt32Number VAR_10 = FUNC_6(VAR_1->OutputFormat);
       cmsUInt32Number VAR_11 = VAR_6 ^ VAR_9;
       cmsFloat64Number VAR_12 = FUNC_0(VAR_1->OutputFormat) ? 100.0 : 1.0;
       cmsFloat64Number VAR_13 = 0;
       cmsFloat64Number* VAR_14 = (cmsFloat64Number*)VAR_3;
       cmsUInt32Number VAR_15, VAR_16 = 0;

       VAR_4 /= FUNC_1(VAR_1->OutputFormat);

       if (VAR_11)
              VAR_16 = VAR_8;

       for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++) {

              cmsUInt32Number VAR_17 = VAR_6 ? (VAR_5 - VAR_15 - 1) : VAR_15;

              VAR_13 = VAR_2[VAR_17] * VAR_12;

              if (VAR_7)
                     VAR_13 = VAR_12 - VAR_13;

              if (VAR_10)
                     ((cmsFloat64Number*)VAR_3)[(VAR_15 + VAR_16) * VAR_4] = VAR_13;
              else
                     ((cmsFloat64Number*)VAR_3)[VAR_15 + VAR_16] = VAR_13;
       }

       if (VAR_8 == 0 && VAR_9) {

              FUNC_8(VAR_14 + 1, VAR_14, (VAR_5 - 1)* sizeof(cmsFloat64Number));
              *VAR_14 = VAR_13;
       }


       if (FUNC_6(VAR_1->OutputFormat))
              return VAR_3 + sizeof(cmsFloat64Number);
       else
              return VAR_3 + (VAR_5 + VAR_8) * sizeof(cmsFloat64Number);

}
