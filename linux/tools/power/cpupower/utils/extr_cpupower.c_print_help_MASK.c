
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* cmd; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(void)
{
 unsigned int VAR_1;




 FUNC_2(FUNC_1("Usage:\tcpupower [-c|--cpu cpulist ] <command> [<args>]\n"));

 FUNC_2(FUNC_1("Supported commands are:\n"));
 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++)
  FUNC_2("\t%s\n", VAR_0[VAR_1].cmd);
 FUNC_2(FUNC_1("\nNot all commands can make use of the -c cpulist option.\n"));
 FUNC_2(FUNC_1("\nUse 'cpupower help <command>' for getting help for above commands.\n"));
}
