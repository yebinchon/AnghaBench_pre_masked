
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct stat {scalar_t__ st_size; } ;
typedef int int64 ;
struct TYPE_10__ {scalar_t__ costs; } ;
struct TYPE_8__ {int ss_currentRelation; } ;
struct TYPE_9__ {TYPE_1__ ss; } ;
typedef int List ;
typedef TYPE_2__ ForeignScanState ;
typedef TYPE_3__ ExplainState ;


 int FUNC_0 (char*,char*,int ,TYPE_3__*) ;
 int FUNC_1 (char*,char*,TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char**,int*,int **) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;

__attribute__((used)) static void
FUNC_5(ForeignScanState *VAR_0, ExplainState *VAR_1)
{
 char *VAR_2;
 bool VAR_3;
 List *VAR_4;


 FUNC_3(FUNC_2(VAR_0->ss.ss_currentRelation),
       &VAR_2, &VAR_3, &VAR_4);

 if (VAR_3)
  FUNC_1("Foreign Program", VAR_2, VAR_1);
 else
  FUNC_1("Foreign File", VAR_2, VAR_1);


 if (VAR_1->costs)
 {
  struct stat VAR_5;

  if (!VAR_3 &&
   FUNC_4(VAR_2, &VAR_5) == 0)
   FUNC_0("Foreign File Size", "b",
           (int64) VAR_5.st_size, VAR_1);
 }
}
