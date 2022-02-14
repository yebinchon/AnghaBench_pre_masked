
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {char* data; } ;
struct TYPE_10__ {char* errormsg; int name; } ;
typedef TYPE_1__ Step ;
typedef TYPE_2__ PQExpBufferData ;


 int FUNC_0 (TYPE_2__*,char*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,char*,char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_7(Step *VAR_1, int VAR_2, Step **VAR_3)
{
 PQExpBufferData VAR_4;
 int VAR_5;

 if (VAR_2 == 0)
 {
  FUNC_5(VAR_1);
  return;
 }

 FUNC_4(&VAR_4);
 FUNC_1(&VAR_4, VAR_1->name);

 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5)
  FUNC_0(&VAR_4, " %s", VAR_3[VAR_5]->name);

 if (VAR_1->errormsg)
 {
  FUNC_2(VAR_0, "error in steps %s: %s\n", VAR_4.data,
    VAR_1->errormsg);
  FUNC_3(VAR_1->errormsg);
  VAR_1->errormsg = ((void*)0);
 }

 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5)
 {
  if (VAR_3[VAR_5]->errormsg == ((void*)0))
   continue;
  FUNC_2(VAR_0, "error in steps %s: %s\n",
    VAR_4.data, VAR_3[VAR_5]->errormsg);
  FUNC_3(VAR_3[VAR_5]->errormsg);
  VAR_3[VAR_5]->errormsg = ((void*)0);
 }

 FUNC_6(&VAR_4);
}
