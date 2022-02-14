
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ VAR_3 ;

void
FUNC_1(FILE *VAR_4, char *VAR_5)
{
    FUNC_0(VAR_4, "; File generated automatically, do not edit! \n\n");

    if (VAR_3 == VAR_2)
    {
        FUNC_0(VAR_4, ".586\n.model flat\n.code\n");
    }
    else if (VAR_3 == VAR_0)
    {
        FUNC_0(VAR_4, ".code\n");
    }
    else if (VAR_3 == VAR_1)
    {
        FUNC_0(VAR_4, "    AREA |.text|,ALIGN=2,CODE,READONLY\n\n");
    }
}
