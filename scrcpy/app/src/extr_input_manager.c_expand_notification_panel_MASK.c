
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct controller {int dummy; } ;
struct control_msg {int type; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct controller*,struct control_msg*) ;

__attribute__((used)) static void
FUNC_2(struct controller *VAR_1) {
    struct control_msg VAR_2;
    VAR_2.type = VAR_0;

    if (!FUNC_1(VAR_1, &VAR_2)) {
        FUNC_0("Could not request 'expand notification panel'");
    }
}
