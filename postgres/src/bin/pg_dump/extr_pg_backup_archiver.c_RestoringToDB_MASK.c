
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* ropt; } ;
struct TYPE_7__ {scalar_t__ connection; TYPE_1__ public; } ;
struct TYPE_6__ {scalar_t__ useDB; } ;
typedef TYPE_2__ RestoreOptions ;
typedef TYPE_3__ ArchiveHandle ;



__attribute__((used)) static int
FUNC_0(ArchiveHandle *VAR_0)
{
 RestoreOptions *VAR_1 = VAR_0->public.ropt;

 return (VAR_1 && VAR_1->useDB && VAR_0->connection);
}
