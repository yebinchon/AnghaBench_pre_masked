
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int tag; int namespace; } ;
typedef TYPE_2__ TocEntry ;
struct TYPE_9__ {TYPE_3__* ropt; } ;
struct TYPE_12__ {TYPE_1__ public; } ;
struct TYPE_11__ {int superuser; int disable_triggers; int dataOnly; } ;
typedef TYPE_3__ RestoreOptions ;
typedef TYPE_4__ ArchiveHandle ;


 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,char*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void
FUNC_4(ArchiveHandle *VAR_0, TocEntry *VAR_1)
{
 RestoreOptions *VAR_2 = VAR_0->public.ropt;


 if (!VAR_2->dataOnly || !VAR_2->disable_triggers)
  return;

 FUNC_3("enabling triggers for %s", VAR_1->tag);







 FUNC_0(VAR_0, VAR_2->superuser);




 FUNC_1(VAR_0, "ALTER TABLE %s ENABLE TRIGGER ALL;\n\n",
    FUNC_2(VAR_1->namespace, VAR_1->tag));
}
