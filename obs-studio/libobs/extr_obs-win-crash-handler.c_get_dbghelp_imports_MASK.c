
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exception_handler_data {int dbghelp; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static inline bool FUNC_2(struct exception_handler_data *VAR_11)
{
 VAR_11->dbghelp = FUNC_1(L"DbgHelp");
 if (!VAR_11->dbghelp)
  return 0;

 FUNC_0(VAR_8, "SymInitialize");
 FUNC_0(VAR_3, "SymCleanup");
 FUNC_0(VAR_10, "SymSetOptions");
 FUNC_0(VAR_5,
      "SymFunctionTableAccess64");
 FUNC_0(VAR_6, "SymGetModuleBase64");
 FUNC_0(VAR_4, "SymFromAddrW");
 FUNC_0(VAR_7, "SymGetModuleInfo64");
 FUNC_0(VAR_9, "SymRefreshModuleList");
 FUNC_0(VAR_2, "StackWalk64");
 FUNC_0(VAR_0,
      "EnumerateLoadedModulesW64");
 FUNC_0(VAR_1, "MiniDumpWriteDump");

 return 1;
}
