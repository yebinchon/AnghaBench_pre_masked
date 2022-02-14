
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt8Number ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *,char*,...) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static
void FUNC_1(cmsContext VAR_2, cmsIOHANDLER* VAR_3, cmsUInt8Number VAR_4)
{
    FUNC_0(VAR_2, VAR_3, "%02x", VAR_4);
    VAR_1 += 2;

    if (VAR_1 > VAR_0) {

        FUNC_0(VAR_2, VAR_3, "\n");
        VAR_1 = 0;
    }
}
