
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{

 FUNC_1("acpidump [options]");

 FUNC_0("-b", "Dump tables to binary files");
 FUNC_0("-h -?", "This help message");
 FUNC_0("-o <File>", "Redirect output to file");
 FUNC_0("-r <Address>", "Dump tables from specified RSDP");
 FUNC_0("-s", "Print table summaries only");
 FUNC_0("-v", "Display version information");
 FUNC_0("-vd", "Display build date and time");
 FUNC_0("-z", "Verbose mode");

 FUNC_2("\nTable Options:\n");

 FUNC_0("-a <Address>", "Get table via a physical address");
 FUNC_0("-c <on|off>", "Turning on/off customized table dumping");
 FUNC_0("-f <BinaryFile>", "Get table via a binary file");
 FUNC_0("-n <Signature>", "Get table via a name/signature");
 FUNC_0("-x", "Do not use but dump XSDT");
 FUNC_0("-x -x", "Do not use or dump XSDT");

 FUNC_2("\n"
   "Invocation without parameters dumps all available tables\n"
   "Multiple mixed instances of -a, -f, and -n are supported\n\n");
}
