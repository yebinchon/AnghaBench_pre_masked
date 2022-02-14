
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_1(int VAR_2)
{
    if (VAR_2 > 250)
     VAR_2 = 250;
    if (VAR_2 > 20) {
 VAR_1 = VAR_2;
 VAR_0 = VAR_2 / 3;
    } else {
 FUNC_0("\n*** Error: minimum screen width is 21\n");
    }
}
