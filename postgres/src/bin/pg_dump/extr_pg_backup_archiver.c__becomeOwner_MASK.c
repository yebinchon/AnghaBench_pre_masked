
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int owner; } ;
typedef TYPE_2__ TocEntry ;
struct TYPE_8__ {TYPE_3__* ropt; } ;
struct TYPE_11__ {TYPE_1__ public; } ;
struct TYPE_10__ {int use_setsessauth; scalar_t__ noOwner; } ;
typedef TYPE_3__ RestoreOptions ;
typedef TYPE_4__ ArchiveHandle ;


 int FUNC_0 (TYPE_4__*,int ) ;

__attribute__((used)) static void
FUNC_1(ArchiveHandle *VAR_0, TocEntry *VAR_1)
{
 RestoreOptions *VAR_2 = VAR_0->public.ropt;

 if (VAR_2 && (VAR_2->noOwner || !VAR_2->use_setsessauth))
  return;

 FUNC_0(VAR_0, VAR_1->owner);
}
