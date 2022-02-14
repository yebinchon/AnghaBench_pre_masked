
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int already_expired; int expires; int keys; } ;


 int FUNC_0 (char*,int ) ;
 TYPE_1__ VAR_0 ;

void FUNC_1(void) {
    FUNC_0("[info] %lu keys read\n", VAR_0.keys);
    FUNC_0("[info] %lu expires\n", VAR_0.expires);
    FUNC_0("[info] %lu already expired\n", VAR_0.already_expired);
}
