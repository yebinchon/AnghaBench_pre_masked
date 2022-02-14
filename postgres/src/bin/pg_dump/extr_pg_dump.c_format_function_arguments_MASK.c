
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int name; } ;
struct TYPE_10__ {scalar_t__ nargs; TYPE_1__ dobj; } ;
struct TYPE_9__ {char* data; } ;
typedef TYPE_2__ PQExpBufferData ;
typedef TYPE_3__ FuncInfo ;


 int FUNC_0 (TYPE_2__*,char*,char*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static char *
FUNC_4(FuncInfo *VAR_0, char *VAR_1, bool VAR_2)
{
 PQExpBufferData VAR_3;

 FUNC_3(&VAR_3);
 FUNC_1(&VAR_3, FUNC_2(VAR_0->dobj.name));
 if (VAR_2 && VAR_0->nargs == 0)
  FUNC_1(&VAR_3, "(*)");
 else
  FUNC_0(&VAR_3, "(%s)", VAR_1);
 return VAR_3.data;
}
