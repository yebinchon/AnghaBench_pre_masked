
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_module {int dummy; } ;
struct TYPE_2__ {int (* callback ) () ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (void*) ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void FUNC_3(struct usb_module *VAR_5, void *VAR_6) {
    if (VAR_1 == VAR_3) {
        FUNC_2(VAR_6);
    } else if (VAR_0 == VAR_3) {
        FUNC_1();
    } else {
        if (((void*)0) != VAR_4.callback) {
            VAR_4.callback();
        }
        VAR_3 = VAR_2;
    }
}
