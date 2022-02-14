
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;

void
FUNC_2(void)
{


    FUNC_1();

    FUNC_0("\n");
    FUNC_0("Options:\n");
    FUNC_0("%-20s %s\n", "   -h <X>", "Number of geometry heads (default 64)");
    FUNC_0("%-20s %s\n", "   -s <X>", "Number of geometry sectors (default 32)");
    FUNC_0("%-20s %s\n", "   -e --entry", "Specify partition entry number (1-4)");
    FUNC_0("%-20s %s\n", "   -o --offset", "Specify partition offset (default 0)");
    FUNC_0("%-20s %s\n", "   -t --type", "Specify partition type (default 0x17)");
    FUNC_0("%-20s %s\n", "   -i --id", "Specify MBR ID (default random)");




    FUNC_0("%-20s %s\n", "   -b --mbr <PATH>", "Load MBR from PATH");

    FUNC_0("\n");
    FUNC_0("%-20s %s\n", "   --forcehd0", "Assume we are loaded as disk ID 0");
    FUNC_0("%-20s %s\n", "   --ctrlhd0", "Assume disk ID 0 if the Ctrl key is pressed");
    FUNC_0("%-20s %s\n", "   --partok", "Allow booting from within a partition");

    FUNC_0("\n");
    FUNC_0("%-20s %s\n", "   -? --help", "Display this help");
    FUNC_0("%-20s %s\n", "   -v --verbose", "Display verbose output");
    FUNC_0("%-20s %s\n", "   -V --version", "Display version information");

    FUNC_0("\n");
    FUNC_0("Report bugs to <pj.pandit@yahoo.co.in>\n");
}
