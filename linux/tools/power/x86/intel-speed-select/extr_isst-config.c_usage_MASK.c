
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(void)
{
 FUNC_1("Intel(R) Speed Select Technology\n");
 FUNC_1("\nUsage:\n");
 FUNC_1("intel-speed-select [OPTIONS] FEATURE COMMAND COMMAND_ARGUMENTS\n");
 FUNC_1("\nUse this tool to enumerate and control the Intel Speed Select Technology features,\n");
 FUNC_1("\nFEATURE : [perf-profile|base-freq|turbo-freq|core-power]\n");
 FUNC_1("\nFor help on each feature, use -h|--help\n");
 FUNC_1("\tFor example:  intel-speed-select perf-profile -h\n");

 FUNC_1("\nFor additional help on each command for a feature, use --h|--help\n");
 FUNC_1("\tFor example:  intel-speed-select perf-profile get-lock-status -h\n");
 FUNC_1("\t\t This will print help for the command \"get-lock-status\" for the feature \"perf-profile\"\n");

 FUNC_1("\nOPTIONS\n");
 FUNC_1("\t[-c|--cpu] : logical cpu number\n");
 FUNC_1("\t\tDefault: Die scoped for all dies in the system with multiple dies/package\n");
 FUNC_1("\t\t\t Or Package scoped for all Packages when each package contains one die\n");
 FUNC_1("\t[-d|--debug] : Debug mode\n");
 FUNC_1("\t[-h|--help] : Print help\n");
 FUNC_1("\t[-i|--info] : Print platform information\n");
 FUNC_1("\t[-o|--out] : Output file\n");
 FUNC_1("\t\t\tDefault : stderr\n");
 FUNC_1("\t[-f|--format] : output format [json|text]. Default: text\n");
 FUNC_1("\t[-v|--version] : Print version\n");

 FUNC_1("\nResult format\n");
 FUNC_1("\tResult display uses a common format for each command:\n");
 FUNC_1("\tResults are formatted in text/JSON with\n");
 FUNC_1("\t\tPackage, Die, CPU, and command specific results.\n");
 FUNC_0(1);
}
