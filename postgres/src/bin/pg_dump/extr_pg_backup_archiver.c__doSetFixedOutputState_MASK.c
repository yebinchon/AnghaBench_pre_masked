
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ std_strings; int searchpath; int encoding; TYPE_2__* ropt; } ;
struct TYPE_8__ {TYPE_1__ public; } ;
struct TYPE_7__ {scalar_t__ enable_row_security; scalar_t__ use_role; } ;
typedef TYPE_2__ RestoreOptions ;
typedef TYPE_3__ ArchiveHandle ;


 int FUNC_0 (TYPE_3__*,char*,...) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(ArchiveHandle *VAR_0)
{
 RestoreOptions *VAR_1 = VAR_0->public.ropt;




 FUNC_0(VAR_0, "SET statement_timeout = 0;\n");
 FUNC_0(VAR_0, "SET lock_timeout = 0;\n");
 FUNC_0(VAR_0, "SET idle_in_transaction_session_timeout = 0;\n");


 FUNC_0(VAR_0, "SET client_encoding = '%s';\n",
    FUNC_2(VAR_0->public.encoding));


 FUNC_0(VAR_0, "SET standard_conforming_strings = %s;\n",
    VAR_0->public.std_strings ? "on" : "off");


 if (VAR_1 && VAR_1->use_role)
  FUNC_0(VAR_0, "SET ROLE %s;\n", FUNC_1(VAR_1->use_role));


 if (VAR_0->public.searchpath)
  FUNC_0(VAR_0, "%s", VAR_0->public.searchpath);


 FUNC_0(VAR_0, "SET check_function_bodies = false;\n");


 FUNC_0(VAR_0, "SET xmloption = content;\n");


 FUNC_0(VAR_0, "SET client_min_messages = warning;\n");
 if (!VAR_0->public.std_strings)
  FUNC_0(VAR_0, "SET escape_string_warning = off;\n");


 if (VAR_1 && VAR_1->enable_row_security)
  FUNC_0(VAR_0, "SET row_security = on;\n");
 else
  FUNC_0(VAR_0, "SET row_security = off;\n");

 FUNC_0(VAR_0, "\n");
}
