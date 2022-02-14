
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* n; } ;
typedef TYPE_1__ cmsVEC3 ;
struct TYPE_6__ {int r; void* theta; void* alpha; } ;
typedef TYPE_2__ cmsSpherical ;
typedef int cmsFloat64Number ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static
void FUNC_2(cmsSpherical* VAR_3, const cmsVEC3* VAR_4)
{

    cmsFloat64Number VAR_5, VAR_6, VAR_7;

    VAR_5 = VAR_4 ->n[VAR_0];
    VAR_6 = VAR_4 ->n[VAR_1];
    VAR_7 = VAR_4 ->n[VAR_2];

    VAR_3 ->r = FUNC_1( VAR_5*VAR_5 + VAR_6*VAR_6 + VAR_7*VAR_7 );

   if (VAR_3 ->r == 0) {
        VAR_3 ->alpha = VAR_3 ->theta = 0;
        return;
    }

    VAR_3 ->alpha = FUNC_0(VAR_6, VAR_7);
    VAR_3 ->theta = FUNC_0(FUNC_1(VAR_6*VAR_6 + VAR_7*VAR_7), VAR_5);
}
