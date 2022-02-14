
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

void FUNC_1(void)
{
    FUNC_0("syntax: spec2def [<options> ...] <spec file>\n"
           "Possible options:\n"
           "  -h --help               print this help screen\n"
           "  -l=<file>               generate an asm lib stub\n"
           "  -d=<file>               generate a def file\n"
           "  -s=<file>               generate a stub file\n"
           "  --ms                    MSVC compatibility\n"
           "  -n=<name>               name of the dll\n"
           "  --implib                generate a def file for an import library\n"
           "  --no-private-warnings   suppress warnings about symbols that should be -private\n"
           "  -a=<arch>               set architecture to <arch> (i386, x86_64, arm)\n"
           "  --with-tracing          generate wine-like \"+relay\" trace trampolines (needs -s)\n");
}
