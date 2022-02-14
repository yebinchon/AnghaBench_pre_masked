
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;
typedef int cmsContext ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int) ;

__attribute__((used)) static
void* FUNC_1(cmsContext VAR_2, cmsUInt32Number VAR_3, cmsUInt32Number VAR_4)
{
    cmsUInt32Number VAR_5 = VAR_3 * VAR_4;


    if (VAR_5 == 0) return ((void*)0);


    if (VAR_3 >= VAR_1 / VAR_4) return ((void*)0);


    if (VAR_5 < VAR_3 || VAR_5 < VAR_4) {
        return ((void*)0);
    }

    if (VAR_5 > VAR_0) return ((void*)0);

    return FUNC_0(VAR_2, VAR_5);
}
