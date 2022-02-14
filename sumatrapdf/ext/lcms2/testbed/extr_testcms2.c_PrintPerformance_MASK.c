
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double cmsUInt32Number ;
typedef double cmsFloat64Number ;


 double VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,double) ;
 int VAR_1 ;

__attribute__((used)) static
void FUNC_2(cmsUInt32Number VAR_2, cmsUInt32Number VAR_3, cmsFloat64Number VAR_4)
{
    cmsFloat64Number VAR_5 = (cmsFloat64Number) VAR_4 / VAR_0;
    cmsFloat64Number VAR_6 = VAR_2 / (1024.0*1024.0*VAR_5*VAR_3);

    FUNC_1("%#4.3g MPixel/sec.\n", VAR_6);
    FUNC_0(VAR_1);
}
