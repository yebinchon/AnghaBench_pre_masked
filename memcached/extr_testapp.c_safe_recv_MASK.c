
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ssize_t ;
typedef size_t off_t ;
struct TYPE_3__ {int (* read ) (TYPE_1__*,char*,size_t) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_4 ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*,char*,size_t) ;

__attribute__((used)) static bool FUNC_5(void *VAR_5, size_t VAR_6) {
    if (VAR_6 == 0) {
        return 1;
    }
    off_t VAR_7 = 0;
    do {
        ssize_t VAR_8 = VAR_2->read(VAR_2, ((char*)VAR_5) + VAR_7, VAR_6 - VAR_7);
        if (VAR_8 == -1) {
            if (VAR_3 != VAR_0) {
                FUNC_2(VAR_4, "Failed to read: %s\n", FUNC_3(VAR_3));
                FUNC_0();
            }
        } else {
            if (VAR_8 == 0 && VAR_1) {
                return 0;
            }
            FUNC_1(VAR_8 != 0);
            VAR_7 += VAR_8;
        }
    } while (VAR_7 < VAR_6);

    return 1;
}
