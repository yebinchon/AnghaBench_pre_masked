
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static DWORD FUNC_1(DWORD VAR_10)
{
    if (VAR_10 == VAR_3) return VAR_8;
    if (VAR_10 == VAR_0) return VAR_5;
    if (VAR_10 == VAR_1) return VAR_6;
    if (VAR_10 == VAR_2) return VAR_7;
    if (VAR_10 == VAR_4) return VAR_9;
    FUNC_0("Unexpected BWRITERSAMPLER_TEXTURE_TYPE type %#x.\n", VAR_10);

    return 0;
}
