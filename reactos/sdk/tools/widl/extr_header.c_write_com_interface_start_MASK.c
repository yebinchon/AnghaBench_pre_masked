
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; char* c_name; int attrs; } ;
typedef TYPE_1__ type_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(FILE *VAR_1, const type_t *VAR_2)
{
  int VAR_3 = FUNC_1(VAR_2->attrs, VAR_0);
  FUNC_0(VAR_1, "/*****************************************************************************\n");
  FUNC_0(VAR_1, " * %s %sinterface\n", VAR_2->name, VAR_3 ? "disp" : "");
  FUNC_0(VAR_1, " */\n");
  FUNC_0(VAR_1,"#ifndef __%s_%sINTERFACE_DEFINED__\n", VAR_2->c_name, VAR_3 ? "DISP" : "");
  FUNC_0(VAR_1,"#define __%s_%sINTERFACE_DEFINED__\n\n", VAR_2->c_name, VAR_3 ? "DISP" : "");
}
