
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char* name; } ;
struct TYPE_11__ {int nargs; int * argtypes; TYPE_1__ dobj; } ;
struct TYPE_13__ {TYPE_2__ aggfn; } ;
struct TYPE_12__ {char* data; } ;
typedef TYPE_3__ PQExpBufferData ;
typedef int Archive ;
typedef TYPE_4__ AggInfo ;


 int FUNC_0 (TYPE_3__*,char*,char*,char*) ;
 int FUNC_1 (TYPE_3__*,char) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_0 ;

__attribute__((used)) static char *
FUNC_7(AggInfo *VAR_1, Archive *VAR_2, bool VAR_3)
{
 PQExpBufferData VAR_4;
 int VAR_5;

 FUNC_6(&VAR_4);
 if (VAR_3)
  FUNC_2(&VAR_4, FUNC_3(VAR_1->aggfn.dobj.name));
 else
  FUNC_2(&VAR_4, VAR_1->aggfn.dobj.name);

 if (VAR_1->aggfn.nargs == 0)
  FUNC_2(&VAR_4, "(*)");
 else
 {
  FUNC_1(&VAR_4, '(');
  for (VAR_5 = 0; VAR_5 < VAR_1->aggfn.nargs; VAR_5++)
  {
   char *VAR_6;

   VAR_6 = FUNC_5(VAR_2, VAR_1->aggfn.argtypes[VAR_5],
             VAR_0);

   FUNC_0(&VAR_4, "%s%s",
         (VAR_5 > 0) ? ", " : "",
         VAR_6);
   FUNC_4(VAR_6);
  }
  FUNC_1(&VAR_4, ')');
 }
 return VAR_4.data;
}
