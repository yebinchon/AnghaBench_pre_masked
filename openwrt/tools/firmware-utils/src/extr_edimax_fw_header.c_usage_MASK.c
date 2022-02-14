
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,...) ;
 char* VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_2(int VAR_4)
{
 FILE *VAR_5 = (VAR_4 != VAR_0) ? VAR_2 : VAR_3;

 FUNC_1(VAR_5, "Usage: %s [OPTIONS...]\n", VAR_1);
 FUNC_1(VAR_5,
"\n"
"Options:\n"
"  -e <addr>       set end addr to <addr>\n"
"  -f              set force flag\n"
"  -h              show this screen\n"
"  -i <file>       read input data from the file <file>\n"
"  -o <file>       write output to the file <file>\n"
"  -m <model>      set model to <model>\n"
"  -M <magic>      set image magic to <magic>\n"
"  -n <name>       set MTD device name to <name>\n"
"  -s <addr>       set start address to <addr>\n"
"  -t <type>       set image type to <type>\n"
"  -v <version>    set firmware version to <version>\n"
 );

 FUNC_0(VAR_4);
}
