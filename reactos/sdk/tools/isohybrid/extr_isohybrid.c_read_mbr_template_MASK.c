
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int FILE ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 size_t FUNC_5 (int *,int,size_t,int *) ;

void
FUNC_6(char *VAR_1, uint8_t *VAR_2)
{
    FILE *VAR_3;
    size_t VAR_4;

    VAR_3 = FUNC_4(VAR_1, "rb");
    if (VAR_3 == ((void*)0))
        FUNC_1(1, "could not open MBR template file `%s'", VAR_1);
    FUNC_0(VAR_3);
    VAR_4 = FUNC_5(VAR_2, 1, VAR_0, VAR_3);
    if (FUNC_3(VAR_3) || VAR_4 != VAR_0)
        FUNC_1(1, "error while reading MBR template file `%s'", VAR_1);
    FUNC_2(VAR_3);
}
