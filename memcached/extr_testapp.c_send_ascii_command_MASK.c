
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ssize_t ;
typedef size_t off_t ;
struct TYPE_2__ {int (* write ) (void*,char const*,size_t) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_3 ;
 char* FUNC_2 (scalar_t__) ;
 size_t FUNC_3 (char const*) ;
 int FUNC_4 (void*,char const*,size_t) ;

__attribute__((used)) static void FUNC_5(const char *VAR_4) {
    off_t VAR_5 = 0;
    const char* VAR_6 = VAR_4;
    size_t VAR_7 = FUNC_3(VAR_4);

    do {
        ssize_t VAR_8 = VAR_1->write((void*)VAR_1, VAR_6 + VAR_5, VAR_7 - VAR_5);
        if (VAR_8 == -1) {
            if (VAR_2 != VAR_0) {
                FUNC_1(VAR_3, "Failed to write: %s\n", FUNC_2(VAR_2));
                FUNC_0();
            }
        } else {
            VAR_5 += VAR_8;
        }
    } while (VAR_5 < VAR_7);
}
