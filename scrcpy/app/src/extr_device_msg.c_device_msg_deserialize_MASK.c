
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_2__ {char* text; } ;
struct device_msg {unsigned char type; TYPE_1__ clipboard; } ;
typedef int ssize_t ;



 int FUNC_0 (char*,...) ;
 char* FUNC_1 (int ) ;
 size_t FUNC_2 (unsigned char const*) ;
 int FUNC_3 (char*,unsigned char const*,size_t) ;

ssize_t
FUNC_4(const unsigned char *VAR_0, size_t VAR_1,
                       struct device_msg *VAR_2) {
    if (VAR_1 < 3) {

        return 0;
    }

    VAR_2->type = VAR_0[0];
    switch (VAR_2->type) {
        case 128: {
            uint16_t VAR_3 = FUNC_2(&VAR_0[1]);
            if (VAR_3 > VAR_1 - 3) {
                return 0;
            }
            char *VAR_4 = FUNC_1(VAR_3 + 1);
            if (!VAR_4) {
                FUNC_0("Could not allocate text for clipboard");
                return -1;
            }
            if (VAR_3) {
                FUNC_3(VAR_4, &VAR_0[3], VAR_3);
            }
            VAR_4[VAR_3] = '\0';

            VAR_2->clipboard.text = VAR_4;
            return 3 + VAR_3;
        }
        default:
            FUNC_0("Unknown device message type: %d", (int) VAR_2->type);
            return -1;
    }
}
