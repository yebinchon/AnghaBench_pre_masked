
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char const*,unsigned long const,char const*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

void FUNC_3(const char *VAR_2, const char *VAR_3, const unsigned long VAR_4) {
    FUNC_0(VAR_0, "Checking read lock on all RRDs");

    int VAR_5 = FUNC_2(&VAR_1);
    if(VAR_5 == 0)
        FUNC_1("RRDs should be read-locked, but it are not, at function %s() at line %lu of file '%s'", VAR_3, VAR_4, VAR_2);
}
