
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ssize_t ;
typedef int off_t ;
struct TYPE_3__ {int (* read ) (TYPE_1__*,char*,int) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_3 ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;

__attribute__((used)) static void FUNC_5(char *VAR_4, size_t VAR_5) {
    off_t VAR_6 = 0;
    bool VAR_7 = 1;
    do {
        ssize_t VAR_8 = VAR_1->read(VAR_1, VAR_4 + VAR_6, 1);
        if (VAR_8 == -1) {
            if (VAR_2 != VAR_0) {
                FUNC_2(VAR_3, "Failed to read: %s\n", FUNC_3(VAR_2));
                FUNC_0();
            }
        } else {
            FUNC_1(VAR_8 == 1);
            if (VAR_4[VAR_6] == '\n') {
                VAR_7 = 0;
                VAR_4[VAR_6 + 1] = '\0';
            }
            VAR_6 += VAR_8;
            FUNC_1(VAR_6 + 1 < VAR_5);
        }
    } while (VAR_7);
}
