
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int statement_list_t ;
typedef int FILE ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (int const*,int *,int ) ;
 int FUNC_5 (int *,char*,...) ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int const*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int const*,int *,int ) ;
 int FUNC_11 (int *,int const*) ;
 int VAR_7 ;
 int FUNC_12 (int *) ;

void FUNC_13(const statement_list_t *VAR_8)
{
  FILE *VAR_9;

  if (!VAR_2) return;

  if(!(VAR_9 = FUNC_3(VAR_3, "w"))) {
    FUNC_1("Could not open %s for output\n", VAR_3);
    return;
  }
  FUNC_5(VAR_9, "/*** Autogenerated by WIDL %s from %s - Do not edit ***/\n\n", VAR_1, VAR_5);

  FUNC_5(VAR_9, "#ifdef _WIN32\n");
  FUNC_5(VAR_9, "#ifndef __REQUIRED_RPCNDR_H_VERSION__\n");
  FUNC_5(VAR_9, "#define __REQUIRED_RPCNDR_H_VERSION__ 475\n");
  FUNC_5(VAR_9, "#endif\n\n");

  FUNC_5(VAR_9, "#ifdef __REACTOS__\n");
  FUNC_5(VAR_9, "#define WIN32_LEAN_AND_MEAN\n");
  FUNC_5(VAR_9, "#endif\n\n");

  FUNC_5(VAR_9, "#include <rpc.h>\n" );
  FUNC_5(VAR_9, "#include <rpcndr.h>\n" );
  if (!FUNC_4(VAR_8, ((void*)0), VAR_6))
    FUNC_5(VAR_9, "#include <midles.h>\n" );
  FUNC_5(VAR_9, "#endif\n\n");

  FUNC_5(VAR_9, "#ifndef COM_NO_WINDOWS_H\n");
  FUNC_5(VAR_9, "#include <windows.h>\n");
  FUNC_5(VAR_9, "#include <ole2.h>\n");
  FUNC_5(VAR_9, "#endif\n\n");

  FUNC_5(VAR_9, "#ifndef __%s__\n", VAR_4);
  FUNC_5(VAR_9, "#define __%s__\n\n", VAR_4);

  FUNC_5(VAR_9, "/* Forward declarations */\n\n");
  FUNC_8(VAR_9, VAR_8);

  FUNC_5(VAR_9, "/* Headers for imported files */\n\n");
  FUNC_11(VAR_9, VAR_8);
  FUNC_5(VAR_9, "\n");
  FUNC_6(VAR_9);

  FUNC_10(VAR_9, VAR_8, ((void*)0), VAR_0);

  FUNC_5(VAR_9, "/* Begin additional prototypes for all interfaces */\n");
  FUNC_5(VAR_9, "\n");
  FUNC_4(VAR_8, VAR_9, VAR_7);
  FUNC_12(VAR_9);
  FUNC_9(VAR_9);
  FUNC_7(VAR_9);
  FUNC_5(VAR_9, "\n");
  FUNC_5(VAR_9, "/* End additional prototypes */\n");
  FUNC_5(VAR_9, "\n");

  FUNC_0(VAR_9);
  FUNC_5(VAR_9, "#endif /* __%s__ */\n", VAR_4);

  FUNC_2(VAR_9);
}
