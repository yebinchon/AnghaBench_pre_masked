
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;






 int FUNC_0 (int ,int *,char*,char const*) ;

__attribute__((used)) static
void FUNC_1(cmsContext VAR_0, cmsIOHANDLER* VAR_1, cmsUInt32Number VAR_2)
{
    const char *VAR_3;

    switch (VAR_2) {

        case 130: VAR_3 = "Perceptual"; break;
        case 129: VAR_3 = "RelativeColorimetric"; break;
        case 131: VAR_3 = "AbsoluteColorimetric"; break;
        case 128: VAR_3 = "Saturation"; break;

        default: VAR_3 = "Undefined"; break;
    }

    FUNC_0(VAR_0, VAR_1, "/RenderingIntent (%s)\n", VAR_3 );
}
