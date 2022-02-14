
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ int32_t ;
typedef int int16_t ;
typedef scalar_t__ _i16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,void const*,int ,int ) ;

__attribute__((used)) static bool FUNC_3 (int16_t VAR_6, const void *VAR_7, int16_t VAR_8) {
    int32_t VAR_9 = 0;
    uint32_t VAR_10 = VAR_5;

    if ((VAR_0 & VAR_1) == 0 && FUNC_1() == VAR_2) {
        do {
            _i16 VAR_11 = FUNC_2(VAR_6, VAR_7, VAR_8, 0);
            if (VAR_11 > 0) {
                return 1;
            }
            else if (VAR_3 != VAR_11) {
                return 0;
            }

            FUNC_0(VAR_10++);
        } while (++VAR_9 <= VAR_4);
    }
    return 0;
}
