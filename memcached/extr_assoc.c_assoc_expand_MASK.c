
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int verbose; } ;
struct TYPE_3__ {int hash_bytes; int hash_is_expanding; scalar_t__ hash_power_level; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_5(void) {
    VAR_3 = VAR_4;

    VAR_4 = FUNC_2(FUNC_4(VAR_2 + 1), sizeof(void *));
    if (VAR_4) {
        if (VAR_5.verbose > 1)
            FUNC_3(VAR_7, "Hash table expansion starting\n");
        VAR_2++;
        VAR_1 = 1;
        VAR_0 = 0;
        FUNC_0();
        VAR_6.hash_power_level = VAR_2;
        VAR_6.hash_bytes += FUNC_4(VAR_2) * sizeof(void *);
        VAR_6.hash_is_expanding = 1;
        FUNC_1();
    } else {
        VAR_4 = VAR_3;

    }
}
