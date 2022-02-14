
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(void)
{
    FUNC_0("jstest.html");
    FUNC_0("exectest.html");
    FUNC_0("vbtest.html");
    FUNC_0("events.html");
    if(VAR_0)
        FUNC_0("nav_test.html");
    else
        FUNC_1("Skipping nav_test.html on IE older than 9 (for broken ieframe onload).\n");
}
