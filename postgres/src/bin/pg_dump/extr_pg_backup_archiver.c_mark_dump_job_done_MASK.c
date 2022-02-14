
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tag; int desc; int dumpId; } ;
typedef TYPE_1__ TocEntry ;
typedef int ArchiveHandle ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(ArchiveHandle *VAR_0,
       TocEntry *VAR_1,
       int VAR_2,
       void *VAR_3)
{
 FUNC_1("finished item %d %s %s",
    VAR_1->dumpId, VAR_1->desc, VAR_1->tag);

 if (VAR_2 != 0)
  FUNC_0("worker process failed: exit code %d",
     VAR_2);
}
