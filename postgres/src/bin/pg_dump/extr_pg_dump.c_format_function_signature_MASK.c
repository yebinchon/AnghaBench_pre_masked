
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int name; } ;
struct TYPE_11__ {int nargs; int * argtypes; TYPE_1__ dobj; } ;
struct TYPE_10__ {char* data; } ;
typedef TYPE_2__ PQExpBufferData ;
typedef TYPE_3__ FuncInfo ;
typedef int Archive ;


 int FUNC_0 (TYPE_2__*,char*,int ) ;
 int FUNC_1 (TYPE_2__*,char) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_0 ;

__attribute__((used)) static char *
FUNC_7(Archive *VAR_1, FuncInfo *VAR_2, bool VAR_3)
{
 PQExpBufferData VAR_4;
 int VAR_5;

 FUNC_6(&VAR_4);
 if (VAR_3)
  FUNC_0(&VAR_4, "%s(", FUNC_3(VAR_2->dobj.name));
 else
  FUNC_0(&VAR_4, "%s(", VAR_2->dobj.name);
 for (VAR_5 = 0; VAR_5 < VAR_2->nargs; VAR_5++)
 {
  char *VAR_6;

  if (VAR_5 > 0)
   FUNC_2(&VAR_4, ", ");

  VAR_6 = FUNC_5(VAR_1, VAR_2->argtypes[VAR_5],
            VAR_0);
  FUNC_2(&VAR_4, VAR_6);
  FUNC_4(VAR_6);
 }
 FUNC_1(&VAR_4, ')');
 return VAR_4.data;
}
