
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* ropt; } ;
struct TYPE_7__ {scalar_t__ blobCount; TYPE_4__ public; scalar_t__ connection; } ;
struct TYPE_6__ {int single_txn; } ;
typedef TYPE_1__ RestoreOptions ;
typedef TYPE_2__ ArchiveHandle ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_2__*,char*) ;

void
FUNC_2(ArchiveHandle *VAR_0)
{
 RestoreOptions *VAR_1 = VAR_0->public.ropt;

 if (!VAR_1->single_txn)
 {
  if (VAR_0->connection)
   FUNC_0(&VAR_0->public);
  else
   FUNC_1(VAR_0, "BEGIN;\n\n");
 }

 VAR_0->blobCount = 0;
}
