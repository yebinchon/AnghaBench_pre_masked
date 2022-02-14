
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int dumpId; } ;
typedef TYPE_2__ TocEntry ;
typedef int T_Action ;
struct TYPE_6__ {int n_errors; } ;
struct TYPE_8__ {TYPE_1__ public; } ;
typedef TYPE_3__ ArchiveHandle ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,int,int,int) ;

__attribute__((used)) static void
FUNC_1(ArchiveHandle *VAR_1, TocEntry *VAR_2, T_Action VAR_3, int VAR_4,
     char *VAR_5, int VAR_6)
{
 FUNC_0(VAR_5, VAR_6, "OK %d %d %d",
    VAR_2->dumpId,
    VAR_4,
    VAR_4 == VAR_0 ? VAR_1->public.n_errors : 0);
}
