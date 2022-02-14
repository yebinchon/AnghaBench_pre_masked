
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int fz_context ;
typedef scalar_t__ Jbig2Severity ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*,char const*,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_4, const char *VAR_5, Jbig2Severity VAR_6, int32_t VAR_7)
{
 fz_context *VAR_8 = VAR_4;
 if (VAR_6 == VAR_1)
  FUNC_0(VAR_8, "jbig2dec error: %s (segment %d)", VAR_5, VAR_7);
 else if (VAR_6 == VAR_3)
  FUNC_0(VAR_8, "jbig2dec warning: %s (segment %d)", VAR_5, VAR_7);

 else if (VAR_6 == VAR_2)
  FUNC_0(VAR_8, "jbig2dec info: %s (segment %d)", VAR_5, VAR_7);
 else if (VAR_6 == VAR_0)
  FUNC_0(VAR_8, "jbig2dec debug: %s (segment %d)", VAR_5, VAR_7);

}
