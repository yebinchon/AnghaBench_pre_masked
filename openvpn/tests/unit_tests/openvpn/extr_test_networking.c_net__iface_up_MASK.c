
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static int
FUNC_2(bool VAR_1)
{
    FUNC_1("CMD: ip link set %s %s\n", VAR_0, VAR_1 ? "up" : "down");

    return FUNC_0(((void*)0), VAR_0, VAR_1);
}
