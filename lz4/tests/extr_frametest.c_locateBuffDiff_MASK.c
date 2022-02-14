
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ o_scenario_e ;
typedef scalar_t__ BYTE ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1(const void* VAR_2, const void* VAR_3, size_t VAR_4, o_scenario_e VAR_5)
{
    if (VAR_0 >= 5) {
        size_t VAR_6=0;
        const BYTE* VAR_7=(const BYTE*)VAR_2;
        const BYTE* VAR_8=(const BYTE*)VAR_3;
        FUNC_0("locateBuffDiff: looking for error position \n");
        if (VAR_5 != VAR_1) {
            FUNC_0("mode %i: non-contiguous output (%u bytes), cannot search \n",
                    (int)VAR_5, (unsigned)VAR_4);
            return;
        }
        while (VAR_6 < VAR_4 && VAR_7[VAR_6]==VAR_8[VAR_6]) VAR_6++;
        if (VAR_6 != VAR_4) {
            FUNC_0("Error at pos %i/%i : %02X != %02X \n", (int)VAR_6, (int)VAR_4, VAR_7[VAR_6], VAR_8[VAR_6]);
        }
    }
}
