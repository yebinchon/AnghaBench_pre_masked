
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char* VAR_5)
{
    FUNC_1(VAR_5);
    FUNC_0( "\n");
    FUNC_0( "****************************\n");
    FUNC_0( "***** Advanced comment *****\n");
    FUNC_0( "****************************\n");
    FUNC_0( "\n");
    FUNC_0( "Which values can [output] have ? \n");
    FUNC_0( "---------------------------------\n");
    FUNC_0( "[output] : a filename \n");
    FUNC_0( "          '%s', or '-' for standard output (pipe mode)\n", VAR_4);
    FUNC_0( "          '%s' to discard output (test mode) \n", VAR_2);
    FUNC_0( "[output] can be left empty. In this case, it receives the following value :\n");
    FUNC_0( "          - if stdout is not the console, then [output] = stdout \n");
    FUNC_0( "          - if stdout is console : \n");
    FUNC_0( "               + for compression, output to filename%s \n", VAR_1);
    FUNC_0( "               + for decompression, output to filename without '%s'\n", VAR_1);
    FUNC_0( "                    > if input filename has no '%s' extension : error \n", VAR_1);
    FUNC_0( "\n");
    FUNC_0( "Compression levels : \n");
    FUNC_0( "---------------------\n");
    FUNC_0( "-0 ... -2  => Fast compression, all identicals\n");
    FUNC_0( "-3 ... -%d => High compression; higher number == more compression but slower\n", VAR_0);
    FUNC_0( "\n");
    FUNC_0( "stdin, stdout and the console : \n");
    FUNC_0( "--------------------------------\n");
    FUNC_0( "To protect the console from binary flooding (bad argument mistake)\n");
    FUNC_0( "%s will refuse to read from console, or write to console \n", VAR_5);
    FUNC_0( "except if '-c' command is specified, to force output to console \n");
    FUNC_0( "\n");
    FUNC_0( "Simple example :\n");
    FUNC_0( "----------------\n");
    FUNC_0( "1 : compress 'filename' fast, using default output name 'filename.lz4'\n");
    FUNC_0( "          %s filename\n", VAR_5);
    FUNC_0( "\n");
    FUNC_0( "Short arguments can be aggregated. For example :\n");
    FUNC_0( "----------------------------------\n");
    FUNC_0( "2 : compress 'filename' in high compression mode, overwrite output if exists\n");
    FUNC_0( "          %s -9 -f filename \n", VAR_5);
    FUNC_0( "    is equivalent to :\n");
    FUNC_0( "          %s -9f filename \n", VAR_5);
    FUNC_0( "\n");
    FUNC_0( "%s can be used in 'pure pipe mode'. For example :\n", VAR_5);
    FUNC_0( "-------------------------------------\n");
    FUNC_0( "3 : compress data stream from 'generator', send result to 'consumer'\n");
    FUNC_0( "          generator | %s | consumer \n", VAR_5);
    if (VAR_3) {
        FUNC_0( "\n");
        FUNC_0( "***** Warning  ***** \n");
        FUNC_0( "Legacy arguments take precedence. Therefore : \n");
        FUNC_0( "--------------------------------- \n");
        FUNC_0( "          %s -hc filename \n", VAR_5);
        FUNC_0( "means 'compress filename in high compression mode' \n");
        FUNC_0( "It is not equivalent to : \n");
        FUNC_0( "          %s -h -c filename \n", VAR_5);
        FUNC_0( "which displays help text and exits \n");
    }
    return 0;
}
