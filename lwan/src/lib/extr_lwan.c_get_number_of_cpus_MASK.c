
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 long FUNC_2 (int ) ;

__attribute__((used)) static unsigned short int FUNC_3(void)
{
    long VAR_1 = FUNC_2(VAR_0);
    if (FUNC_0(VAR_1 < 0)) {
        FUNC_1(
            "Could not get number of online CPUs, assuming 1 CPU");
        return 1;
    }
    return (unsigned short int)VAR_1;
}
