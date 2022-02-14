
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_7(void) {
    FUNC_3(VAR_2, VAR_4, VAR_0);

    if (FUNC_6(VAR_1) != 0) {
        FUNC_1(VAR_5, "[restart] failed to save metadata");
    }

    if (FUNC_4(VAR_2, VAR_4) != 0) {
        FUNC_5("[restart] failed to munmap shared memory");
    } else if (FUNC_0(VAR_3) != 0) {
        FUNC_5("[restart] failed to close shared memory fd");
    }

    FUNC_2(VAR_1);
}
