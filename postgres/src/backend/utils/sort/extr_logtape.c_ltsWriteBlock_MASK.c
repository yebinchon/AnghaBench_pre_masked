
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zerobuf ;
struct TYPE_5__ {long nBlocksWritten; int pfile; } ;
struct TYPE_4__ {void* data; } ;
typedef TYPE_1__ PGAlignedBlock ;
typedef TYPE_2__ LogicalTapeSet ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,long) ;
 scalar_t__ FUNC_1 (int ,void*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,long) ;

__attribute__((used)) static void
FUNC_6(LogicalTapeSet *VAR_2, long VAR_3, void *VAR_4)
{
 while (VAR_3 > VAR_2->nBlocksWritten)
 {
  PGAlignedBlock VAR_5;

  FUNC_2(VAR_5.data, 0, sizeof(VAR_5));

  FUNC_6(VAR_2, VAR_2->nBlocksWritten, VAR_5.data);
 }


 if (FUNC_0(VAR_2->pfile, VAR_3) != 0 ||
  FUNC_1(VAR_2->pfile, VAR_4, VAR_0) != VAR_0)
  FUNC_3(VAR_1,
    (FUNC_4(),
     FUNC_5("could not write block %ld of temporary file: %m",
      VAR_3)));


 if (VAR_3 == VAR_2->nBlocksWritten)
  VAR_2->nBlocksWritten++;
}
