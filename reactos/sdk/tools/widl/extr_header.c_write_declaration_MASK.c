
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; int stgclass; int type; scalar_t__ eval; } ;
typedef TYPE_1__ var_t ;
typedef int FILE ;


 int VAR_0 ;




 int FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (int *,scalar_t__,int ,int,int *,int *,char*) ;
 int FUNC_3 (int *,int ,int ,char*) ;

__attribute__((used)) static void FUNC_4(FILE *VAR_1, const var_t *VAR_2)
{
  if (FUNC_1(VAR_2) && VAR_2->eval)
  {
    FUNC_0(VAR_1, "#define %s (", VAR_2->name);
    FUNC_2(VAR_1, VAR_2->eval, 0, 1, ((void*)0), ((void*)0), "");
    FUNC_0(VAR_1, ")\n\n");
  }
  else
  {
    switch (VAR_2->stgclass)
    {
      case 130:
      case 129:
        break;
      case 128:
        FUNC_0(VAR_1, "static ");
        break;
      case 131:
        FUNC_0(VAR_1, "extern ");
        break;
    }
    FUNC_3(VAR_1, VAR_2->type, VAR_0, VAR_2->name);
    FUNC_0(VAR_1, ";\n\n");
  }
}
