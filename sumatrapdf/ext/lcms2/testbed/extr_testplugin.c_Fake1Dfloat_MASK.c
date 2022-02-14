
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t* Domain; scalar_t__ Table; } ;
typedef TYPE_1__ cmsInterpParams ;
typedef double cmsFloat32Number ;
typedef int cmsContext ;


 scalar_t__ FUNC_0 (double) ;

__attribute__((used)) static
void FUNC_1(cmsContext VAR_0, const cmsFloat32Number VAR_1[],
                    cmsFloat32Number VAR_2[],
                    const cmsInterpParams* VAR_3)
{
       cmsFloat32Number VAR_4;
       int VAR_5;
       const cmsFloat32Number* VAR_6 = (const cmsFloat32Number*) VAR_3 ->Table;


       if (VAR_1[0] >= 1.0) {
           VAR_2[0] = VAR_6[VAR_3 -> Domain[0]];
           return;
       }

       VAR_4 = VAR_3 -> Domain[0] * VAR_1[0];
       VAR_5 = (int) FUNC_0(VAR_4);
       VAR_2[0] = VAR_6[VAR_5] ;
}
