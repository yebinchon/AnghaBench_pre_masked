
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ socket_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static socket_t
FUNC_3(uint16_t VAR_1, uint32_t VAR_2, uint32_t VAR_3) {
    do {
        FUNC_0("Remaining connection attempts: %d", (int) VAR_2);
        socket_t VAR_4 = FUNC_2(VAR_1);
        if (VAR_4 != VAR_0) {

            return VAR_4;
        }
        if (VAR_2) {
            FUNC_1(VAR_3);
        }
    } while (--VAR_2 > 0);
    return VAR_0;
}
