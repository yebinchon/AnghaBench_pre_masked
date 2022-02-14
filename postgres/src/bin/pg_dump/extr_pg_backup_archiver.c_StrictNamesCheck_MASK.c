
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * head; } ;
struct TYPE_4__ {TYPE_2__ triggerNames; TYPE_2__ functionNames; TYPE_2__ indexNames; TYPE_2__ tableNames; TYPE_2__ schemaNames; int strict_names; } ;
typedef TYPE_1__ RestoreOptions ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*) ;
 char* FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(RestoreOptions *VAR_0)
{
 const char *VAR_1;

 FUNC_0(VAR_0->strict_names);

 if (VAR_0->schemaNames.head != ((void*)0))
 {
  VAR_1 = FUNC_2(&VAR_0->schemaNames);
  if (VAR_1 != ((void*)0))
   FUNC_1("schema \"%s\" not found", VAR_1);
 }

 if (VAR_0->tableNames.head != ((void*)0))
 {
  VAR_1 = FUNC_2(&VAR_0->tableNames);
  if (VAR_1 != ((void*)0))
   FUNC_1("table \"%s\" not found", VAR_1);
 }

 if (VAR_0->indexNames.head != ((void*)0))
 {
  VAR_1 = FUNC_2(&VAR_0->indexNames);
  if (VAR_1 != ((void*)0))
   FUNC_1("index \"%s\" not found", VAR_1);
 }

 if (VAR_0->functionNames.head != ((void*)0))
 {
  VAR_1 = FUNC_2(&VAR_0->functionNames);
  if (VAR_1 != ((void*)0))
   FUNC_1("function \"%s\" not found", VAR_1);
 }

 if (VAR_0->triggerNames.head != ((void*)0))
 {
  VAR_1 = FUNC_2(&VAR_0->triggerNames);
  if (VAR_1 != ((void*)0))
   FUNC_1("trigger \"%s\" not found", VAR_1);
 }
}
