
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int cmsIOHANDLER ;
typedef int cmsContext ;
struct TYPE_4__ {int Z; int Y; int X; } ;
typedef TYPE_1__ cmsCIEXYZ ;
struct TYPE_5__ {int Z; int Y; int X; } ;


 int FUNC_0 (int ,int *,char*,int ,int ,int ) ;
 TYPE_2__* FUNC_1 (int ) ;

__attribute__((used)) static
void FUNC_2(cmsContext VAR_0, cmsIOHANDLER* VAR_1, cmsCIEXYZ* VAR_2)
{

    FUNC_0(VAR_0, VAR_1, "/BlackPoint [%f %f %f]\n", VAR_2 -> X,
                                          VAR_2 -> Y,
                                          VAR_2 -> Z);

    FUNC_0(VAR_0, VAR_1, "/WhitePoint [%f %f %f]\n", FUNC_1(VAR_0)->X,
                                          FUNC_1(VAR_0)->Y,
                                          FUNC_1(VAR_0)->Z);
}
