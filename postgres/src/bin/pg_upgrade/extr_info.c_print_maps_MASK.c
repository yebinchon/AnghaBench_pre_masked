
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ verbose; } ;
struct TYPE_4__ {int new_relfilenode; int old_relfilenode; int relname; int nspname; } ;
typedef TYPE_1__ FileNameMap ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int ,char*,...) ;

void
FUNC_1(FileNameMap *VAR_2, int VAR_3, const char *VAR_4)
{
 if (VAR_1.verbose)
 {
  int VAR_5;

  FUNC_0(VAR_0, "mappings for database \"%s\":\n", VAR_4);

  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
   FUNC_0(VAR_0, "%s.%s: %u to %u\n",
       VAR_2[VAR_5].nspname, VAR_2[VAR_5].relname,
       VAR_2[VAR_5].old_relfilenode,
       VAR_2[VAR_5].new_relfilenode);

  FUNC_0(VAR_0, "\n\n");
 }
}
