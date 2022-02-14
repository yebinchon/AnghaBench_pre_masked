
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ssize_t ;
typedef size_t off_t ;
struct TYPE_3__ {int (* write ) (TYPE_1__*,char const*,size_t) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 () ;
 int VAR_3 ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*,char const*,size_t) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(const void* VAR_4, size_t VAR_5, bool VAR_6)
{
    off_t VAR_7 = 0;
    const char* VAR_8 = VAR_4;
    do {
        size_t VAR_9 = VAR_5 - VAR_7;
        if (VAR_6) {
            if (VAR_9 > 1024) {
                VAR_9 = (FUNC_3() % 1023) + 1;
            }
        }
        ssize_t VAR_10 = VAR_1->write(VAR_1, VAR_8 + VAR_7, VAR_9);
        if (VAR_10 == -1) {
            if (VAR_2 != VAR_0) {
                FUNC_2(VAR_3, "Failed to write: %s\n", FUNC_4(VAR_2));
                FUNC_0();
            }
        } else {
            if (VAR_6) {
                FUNC_6(100);
            }
            VAR_7 += VAR_10;
        }
    } while (VAR_7 < VAR_5);
}
