
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section {scalar_t__ hash; int name; } ;


 int FUNC_0 (int ,int ) ;

int FUNC_1(void *VAR_0, void *VAR_1) {
    if(((struct section *)VAR_0)->hash < ((struct section *)VAR_1)->hash) return -1;
    else if(((struct section *)VAR_0)->hash > ((struct section *)VAR_1)->hash) return 1;
    else return FUNC_0(((struct section *)VAR_0)->name, ((struct section *)VAR_1)->name);
}
