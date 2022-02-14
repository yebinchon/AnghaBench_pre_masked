
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pfile; } ;
typedef TYPE_1__ LogicalTapeSet ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,void*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,long) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,long) ;

__attribute__((used)) static void
FUNC_5(LogicalTapeSet *VAR_2, long VAR_3, void *VAR_4)
{
 if (FUNC_1(VAR_2->pfile, VAR_3) != 0 ||
  FUNC_0(VAR_2->pfile, VAR_4, VAR_0) != VAR_0)
  FUNC_2(VAR_1,
    (FUNC_3(),
     FUNC_4("could not read block %ld of temporary file: %m",
      VAR_3)));
}
