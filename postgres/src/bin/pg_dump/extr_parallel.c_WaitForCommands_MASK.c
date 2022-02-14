
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int buf ;
typedef int TocEntry ;
typedef scalar_t__ T_Action ;
struct TYPE_8__ {int (* WorkerJobDumpPtr ) (TYPE_1__*,int *) ;int (* WorkerJobRestorePtr ) (TYPE_1__*,int *) ;} ;
typedef TYPE_1__ ArchiveHandle ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int *,scalar_t__,int,char*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int **,scalar_t__*,char*) ;
 int FUNC_6 (int*,char*) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_9(ArchiveHandle *VAR_2, int VAR_3[2])
{
 char *VAR_4;
 TocEntry *VAR_5;
 T_Action VAR_6;
 int VAR_7 = 0;
 char VAR_8[256];

 for (;;)
 {
  if (!(VAR_4 = FUNC_3(VAR_3)))
  {

   return;
  }


  FUNC_5(VAR_2, &VAR_5, &VAR_6, VAR_4);

  if (VAR_6 == VAR_0)
  {

   FUNC_4(VAR_2, VAR_5);


   VAR_7 = (VAR_2->WorkerJobDumpPtr) (VAR_2, VAR_5);
  }
  else if (VAR_6 == VAR_1)
  {

   VAR_7 = (VAR_2->WorkerJobRestorePtr) (VAR_2, VAR_5);
  }
  else
   FUNC_0(0);


  FUNC_1(VAR_2, VAR_5, VAR_6, VAR_7, VAR_8, sizeof(VAR_8));

  FUNC_6(VAR_3, VAR_8);


  FUNC_2(VAR_4);
 }
}
