
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct receiver {int dummy; } ;
struct TYPE_2__ {int text; } ;
struct device_msg {int type; TYPE_1__ clipboard; } ;



 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct receiver *VAR_0, struct device_msg *VAR_1) {
    switch (VAR_1->type) {
        case 128:
            FUNC_0("Device clipboard copied");
            FUNC_1(VAR_1->clipboard.text);
            break;
    }
}
