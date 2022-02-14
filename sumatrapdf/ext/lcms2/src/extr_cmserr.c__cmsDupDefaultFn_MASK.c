
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;
typedef int cmsContext ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (void*,void const*,int ) ;

__attribute__((used)) static
void* FUNC_2(cmsContext VAR_1, const void* VAR_2, cmsUInt32Number VAR_3)
{
    void* VAR_4;

    if (VAR_3 > VAR_0) return ((void*)0);

    VAR_4 = FUNC_0(VAR_1, VAR_3);

    if (VAR_4 != ((void*)0) && VAR_2 != ((void*)0))
        FUNC_1(VAR_4, VAR_2, VAR_3);

    return VAR_4;
}
