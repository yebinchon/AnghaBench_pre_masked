
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;

void FUNC_1(void)
{
    FUNC_0("SORT\n", VAR_1);
    FUNC_0("Sorts input and writes output to a file, console or a device.\n",
          VAR_1);

    if (VAR_0)
    {
        FUNC_0("Invalid parameter\n", VAR_1);
    }

    FUNC_0("    SORT [options] < [drive:1][path1]file1 > [drive2:][path2]file2\n",
          VAR_1);

    FUNC_0("    Command | SORT [options] > [drive:][path]file\n", VAR_1);
    FUNC_0("    Options:\n", VAR_1);
    FUNC_0("    /R   Reverse order\n", VAR_1);
    FUNC_0("    /+n  Start sorting with column n\n", VAR_1);
    FUNC_0("    /?   Help\n", VAR_1);
}
