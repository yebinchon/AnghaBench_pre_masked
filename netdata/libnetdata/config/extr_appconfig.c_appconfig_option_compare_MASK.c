
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_option {scalar_t__ hash; int name; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, void *VAR_1) {
    if(((struct config_option *)VAR_0)->hash < ((struct config_option *)VAR_1)->hash) return -1;
    else if(((struct config_option *)VAR_0)->hash > ((struct config_option *)VAR_1)->hash) return 1;
    else return FUNC_0(((struct config_option *)VAR_0)->name, ((struct config_option *)VAR_1)->name);
}
