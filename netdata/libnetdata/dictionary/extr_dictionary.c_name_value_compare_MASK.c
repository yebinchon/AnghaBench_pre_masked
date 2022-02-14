
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hash; int name; } ;
typedef TYPE_1__ NAME_VALUE ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(void* VAR_0, void* VAR_1) {
    if(((NAME_VALUE *)VAR_0)->hash < ((NAME_VALUE *)VAR_1)->hash) return -1;
    else if(((NAME_VALUE *)VAR_0)->hash > ((NAME_VALUE *)VAR_1)->hash) return 1;
    else return FUNC_0(((NAME_VALUE *)VAR_0)->name, ((NAME_VALUE *)VAR_1)->name);
}
