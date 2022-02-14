
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt16Number ;
typedef scalar_t__ cmsS15Fixed16Number ;
typedef int cmsInt32Number ;
typedef scalar_t__ cmsFloat64Number ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static
cmsInt32Number FUNC_4(cmsFloat64Number VAR_1)
{
    cmsS15Fixed16Number VAR_2 = FUNC_2(FUNC_0(), VAR_1);
    cmsFloat64Number VAR_3 = FUNC_1(FUNC_0(), (cmsUInt16Number) VAR_2);
    cmsFloat64Number VAR_4 = FUNC_3(VAR_1 - VAR_3);

    return ( VAR_4 <= VAR_0);
}
