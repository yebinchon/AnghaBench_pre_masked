
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef scalar_t__ Jbig2Severity ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(void *VAR_2, const char *VAR_3, Jbig2Severity VAR_4, int32_t VAR_5)
{

    if (VAR_4 == VAR_0) {
        FUNC_1(VAR_1, "jbig2 decoder FATAL ERROR: %s", VAR_3);
        if (VAR_5 != -1)
            FUNC_1(VAR_1, " (segment 0x%02x)", VAR_5);
        FUNC_1(VAR_1, "\n");
        FUNC_0(VAR_1);
    }
}
