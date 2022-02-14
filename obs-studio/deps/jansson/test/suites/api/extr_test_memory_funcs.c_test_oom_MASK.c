
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3()
{
    VAR_0 = 0;
    FUNC_2(VAR_2, VAR_1);
    FUNC_0();

    if (VAR_0 == 0)
        FUNC_1("Allocation with OOM failed");
}
