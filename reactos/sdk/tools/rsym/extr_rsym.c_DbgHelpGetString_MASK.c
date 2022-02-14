
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct DbgHelpStringTab {char const*** Table; } ;



const char*
FUNC_0(struct DbgHelpStringTab *VAR_0, int VAR_1)
{
    int VAR_2 = VAR_1 >> 10;
    int VAR_3 = VAR_1 & 0x3ff;
    return VAR_0->Table[VAR_3][VAR_2];
}
