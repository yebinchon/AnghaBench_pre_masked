
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int * currTablespace; int * currSchema; int * currUser; } ;
struct TYPE_11__ {char* data; } ;
typedef TYPE_1__ PQExpBufferData ;
typedef TYPE_2__ ArchiveHandle ;


 int FUNC_0 (TYPE_2__*,char const*,int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char*,char*) ;
 int FUNC_4 (TYPE_1__*,char const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_8(ArchiveHandle *VAR_0, const char *VAR_1)
{
 if (FUNC_1(VAR_0))
  FUNC_0(VAR_0, VAR_1, ((void*)0));
 else
 {
  if (VAR_1)
  {
   PQExpBufferData VAR_2;

   FUNC_6(&VAR_2);
   FUNC_4(&VAR_2, VAR_1);
   FUNC_3(VAR_0, "%s\n", VAR_2.data);
   FUNC_7(&VAR_2);
  }
  else
   FUNC_3(VAR_0, "%s\n", "\\connect -\n");
 }





 if (VAR_0->currUser)
  FUNC_5(VAR_0->currUser);
 VAR_0->currUser = ((void*)0);


 if (VAR_0->currSchema)
  FUNC_5(VAR_0->currSchema);
 VAR_0->currSchema = ((void*)0);
 if (VAR_0->currTablespace)
  FUNC_5(VAR_0->currTablespace);
 VAR_0->currTablespace = ((void*)0);


 FUNC_2(VAR_0);
}
