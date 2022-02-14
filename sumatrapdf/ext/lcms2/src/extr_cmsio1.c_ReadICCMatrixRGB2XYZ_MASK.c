
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * v; } ;
typedef TYPE_1__ cmsMAT3 ;
typedef int cmsHPROFILE ;
typedef int cmsContext ;
struct TYPE_5__ {int Z; int Y; int X; } ;
typedef TYPE_2__ cmsCIEXYZ ;
typedef int cmsBool ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static
cmsBool FUNC_3(cmsContext VAR_5, cmsMAT3* VAR_6, cmsHPROFILE VAR_7)
{
    cmsCIEXYZ *VAR_8, *VAR_9, *VAR_10;

    FUNC_0(VAR_6 != ((void*)0));

    VAR_8 = (cmsCIEXYZ *) FUNC_2(VAR_5, VAR_7, VAR_4);
    VAR_9 = (cmsCIEXYZ *) FUNC_2(VAR_5, VAR_7, VAR_3);
    VAR_10 = (cmsCIEXYZ *) FUNC_2(VAR_5, VAR_7, VAR_2);

    if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0) || VAR_10 == ((void*)0))
        return VAR_0;

    FUNC_1(VAR_5, &VAR_6 -> v[0], VAR_8 -> X, VAR_9 -> X, VAR_10 -> X);
    FUNC_1(VAR_5, &VAR_6 -> v[1], VAR_8 -> Y, VAR_9 -> Y, VAR_10 -> Y);
    FUNC_1(VAR_5, &VAR_6 -> v[2], VAR_8 -> Z, VAR_9 -> Z, VAR_10 -> Z);

    return VAR_1;
}
