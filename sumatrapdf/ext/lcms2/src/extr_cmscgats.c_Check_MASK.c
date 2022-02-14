
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sy; } ;
typedef TYPE_1__ cmsIT8 ;
typedef int cmsContext ;
typedef int cmsBool ;
typedef scalar_t__ SYMBOL ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int VAR_0 ;

__attribute__((used)) static
cmsBool FUNC_2(cmsContext VAR_1, cmsIT8* VAR_2, SYMBOL VAR_3, const char* VAR_4)
{
        if (VAR_2 -> sy != VAR_3)
                return FUNC_1(VAR_1, VAR_2, FUNC_0(VAR_4));
        return VAR_0;
}
