
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* ncontext; } ;
typedef TYPE_1__ avc_cache ;
struct TYPE_6__ {scalar_t__ objectSubId; int objectId; int classId; } ;
typedef int Oid ;
typedef TYPE_2__ ObjectAddress ;


 char* FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (char*,char*,int ) ;
 char* FUNC_3 () ;
 char* FUNC_4 () ;

char *
FUNC_5(Oid VAR_3)
{
 char *VAR_4 = FUNC_4();
 char *VAR_5;
 ObjectAddress VAR_6;
 avc_cache *VAR_7;

 VAR_6.classId = VAR_0;
 VAR_6.objectId = VAR_3;
 VAR_6.objectSubId = 0;
 VAR_5 = FUNC_0(&VAR_6, VAR_1);

 FUNC_1();
 do
 {
  if (VAR_5)
   VAR_7 = FUNC_2(VAR_4, VAR_5,
            VAR_2);
  else
   VAR_7 = FUNC_2(VAR_4, FUNC_3(),
            VAR_2);
 } while (!FUNC_1());

 return VAR_7->ncontext;
}
