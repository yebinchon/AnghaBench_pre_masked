
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LZ4F_errorCode_t ;


 char const** VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

const char* FUNC_1(LZ4F_errorCode_t VAR_1)
{
    static const char* VAR_2 = "Unspecified error code";
    if (FUNC_0(VAR_1)) return VAR_0[-(int)(VAR_1)];
    return VAR_2;
}
