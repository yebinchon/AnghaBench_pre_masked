
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,char*,int,char*,int,unsigned long long) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 char* FUNC_5 () ;

void FUNC_6(void) {
    FUNC_2("Redis server v=%s sha=%s:%d malloc=%s bits=%d build=%llx\n",
        VAR_0,
        FUNC_5(),
        FUNC_0(FUNC_4()) > 0,
        VAR_1,
        sizeof(long) == 4 ? 32 : 64,
        (unsigned long long) FUNC_3());
    FUNC_1(0);
}
