
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 long FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,size_t const) ;
 int VAR_7 ;
 void* FUNC_4 (int *,size_t const,int,int ,int ,int ) ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (char const*,int,int ) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char const*) ;
 size_t VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (char const*) ;

bool FUNC_9(const size_t VAR_12, const char *VAR_13, void **VAR_14) {
    bool VAR_15 = 1;

    long VAR_16 = FUNC_0();
    VAR_7 = FUNC_8(VAR_13);
    VAR_9 = FUNC_5(VAR_13, VAR_3|VAR_2, VAR_6);
    if (FUNC_3(VAR_9, VAR_12) != 0) {
        FUNC_6("ftruncate failed");
        FUNC_1();
    }

    if (VAR_12 % VAR_16) {


        FUNC_2(VAR_11, "[restart] memory limit not divisible evenly by pagesize (please report bug)\n");
        FUNC_1();
    }
    VAR_8 = FUNC_4(((void*)0), VAR_12, VAR_4|VAR_5, VAR_1, VAR_9, 0);
    if (VAR_8 == VAR_0) {
        FUNC_6("failed to mmap, aborting");
        FUNC_1();
    }

    VAR_10 = VAR_12;
    if (FUNC_7(VAR_13) != 0) {
        VAR_15 = 0;
    }
    *VAR_14 = VAR_8;

    return VAR_15;
}
