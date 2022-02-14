
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hash_power_level; int hash_bytes; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_1 ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;

void FUNC_6(const int VAR_5) {
    if (VAR_5) {
        VAR_1 = VAR_5;
    }
    VAR_2 = FUNC_2(FUNC_5(VAR_1), sizeof(void *));
    if (! VAR_2) {
        FUNC_4(VAR_4, "Failed to init hashtable.\n");
        FUNC_3(VAR_0);
    }
    FUNC_0();
    VAR_3.hash_power_level = VAR_1;
    VAR_3.hash_bytes = FUNC_5(VAR_1) * sizeof(void *);
    FUNC_1();
}
