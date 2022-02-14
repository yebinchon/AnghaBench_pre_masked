
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sy; } ;
typedef TYPE_1__ cmsIT8 ;
typedef int cmsContext ;
typedef int cmsBool ;


 int FUNC_0 (int ,TYPE_1__*,scalar_t__,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static
cmsBool FUNC_2(cmsContext VAR_3, cmsIT8* VAR_4)
{
        if (!FUNC_0(VAR_3, VAR_4, VAR_1, "Expected separator")) return VAR_0;
        while (VAR_4 -> sy == VAR_1)
                        FUNC_1(VAR_3, VAR_4);
        return VAR_2;

}
