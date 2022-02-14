
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt16Number ;
typedef int cmsInt32Number ;
typedef int cmsHTRANSFORM ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ,int ,int *,int *,int) ;

__attribute__((used)) static
cmsInt32Number FUNC_3(cmsHTRANSFORM VAR_0, cmsUInt16Number VAR_1, cmsUInt16Number VAR_2, cmsUInt16Number VAR_3, cmsUInt16Number VAR_4, cmsUInt16Number VAR_5, cmsUInt16Number VAR_6)
{
    cmsUInt16Number VAR_7[3];
    cmsUInt16Number VAR_8[3];

    VAR_7[0] = VAR_1;
    VAR_7[1] = VAR_2;
    VAR_7[2] = VAR_3;

    FUNC_2(FUNC_0(), VAR_0, VAR_7, VAR_8, 1);

    return FUNC_1("R", VAR_4 , VAR_8[0]) &&
           FUNC_1("G", VAR_5 , VAR_8[1]) &&
           FUNC_1("B", VAR_6 , VAR_8[2]);
}
