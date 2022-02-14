
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(void)
{
    FUNC_0( "\nAdvanced options :\n");
    FUNC_0( " -c#    : test only compression function # [1-%i]\n", VAR_1);
    FUNC_0( " -d#    : test only decompression function # [1-%i]\n", VAR_2);
    FUNC_0( " -i#    : iteration loops [1-9](default : %i)\n", VAR_0);
    FUNC_0( " -B#    : Block size [4-7](default : 7)\n");
    return 0;
}
