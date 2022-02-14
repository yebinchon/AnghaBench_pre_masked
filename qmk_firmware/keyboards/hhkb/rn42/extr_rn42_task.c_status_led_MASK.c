
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(bool VAR_2)
{
    if (VAR_2) {
        VAR_0 |= (1<<6);
        VAR_1 &= ~(1<<6);
    } else {
        VAR_0 |= (1<<6);
        VAR_1 |= (1<<6);
    }
}
