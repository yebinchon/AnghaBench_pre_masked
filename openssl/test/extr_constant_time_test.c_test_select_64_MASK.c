
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 int FUNC_0 (int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(uint64_t VAR_3, uint64_t VAR_4)
{
    uint64_t VAR_5 = FUNC_2(VAR_1, VAR_3, VAR_4);

    if (VAR_5 != VAR_3) {
        FUNC_1("test_select_64 TRUE failed");
        FUNC_0(VAR_2, "a=%jx b=%jx got %jx wanted a\n", VAR_3, VAR_4, VAR_5);
        return 0;
    }
    VAR_5 = FUNC_2(VAR_0, VAR_3, VAR_4);
    if (VAR_5 != VAR_4) {
        FUNC_0(VAR_2, "a=%jx b=%jx got %jx wanted b\n", VAR_3, VAR_4, VAR_5);
        return 0;
    }
    return 1;
}
