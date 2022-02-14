
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dumpId; } ;
typedef TYPE_1__ TocEntry ;
typedef scalar_t__ T_Action ;
typedef int ArchiveHandle ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_2(ArchiveHandle *VAR_2, TocEntry *VAR_3, T_Action VAR_4,
       char *VAR_5, int VAR_6)
{
 if (VAR_4 == VAR_0)
  FUNC_1(VAR_5, VAR_6, "DUMP %d", VAR_3->dumpId);
 else if (VAR_4 == VAR_1)
  FUNC_1(VAR_5, VAR_6, "RESTORE %d", VAR_3->dumpId);
 else
  FUNC_0(0);
}
