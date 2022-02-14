
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uchar ;
struct TYPE_2__ {scalar_t__ len; int kind; } ;





 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 () ;
 int VAR_1 ;

uchar FUNC_4(uchar *VAR_2, uchar VAR_3) {
    if (VAR_0.len == 0) {
        return -1;
    }
    switch (VAR_0.kind) {
        case 128:
            FUNC_1("SET_LED: ");
            FUNC_2(VAR_2[0]);
            FUNC_1("\n");
            VAR_1 = VAR_2[0];
            VAR_0.len = 0;
            return 1;
            break;
        case 130:
            FUNC_3();
            FUNC_0();
            return 1;
            break;
        case 129:
        default:
            return -1;
            break;
    }
    return 1;
}
