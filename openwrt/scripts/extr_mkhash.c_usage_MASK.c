
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_2(const char *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_0, "Usage: %s <hash type> [<file>...]\n"
  "Supported hash types:", VAR_2);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++)
  FUNC_1(VAR_0, "%s %s", VAR_3 ? "," : "", VAR_1[VAR_3].name);

 FUNC_1(VAR_0, "\n");
 return 1;
}
