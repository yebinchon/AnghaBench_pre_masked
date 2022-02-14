
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int XLogRecPtr ;
struct TYPE_4__ {scalar_t__ tli; scalar_t__ begin; int end; } ;
typedef TYPE_1__ TimeLineHistoryEntry ;
struct TYPE_5__ {scalar_t__ tli; scalar_t__ begin; int end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ) ;
 void* FUNC_2 (int *,int*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(XLogRecPtr *VAR_4, int *VAR_5)
{
 TimeLineHistoryEntry *VAR_6;
 int VAR_7;
 int VAR_8,
    VAR_9;


 VAR_6 = FUNC_2(&VAR_0, &VAR_7);
 VAR_2 = FUNC_2(&VAR_1, &VAR_3);
 VAR_9 = FUNC_0(VAR_7, VAR_3);
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
 {
  if (VAR_6[VAR_8].tli != VAR_2[VAR_8].tli ||
   VAR_6[VAR_8].begin != VAR_2[VAR_8].begin)
   break;
 }

 if (VAR_8 > 0)
 {
  VAR_8--;
  *VAR_4 = FUNC_1(VAR_6[VAR_8].end, VAR_2[VAR_8].end);
  *VAR_5 = VAR_8;

  FUNC_4(VAR_6);
  return;
 }
 else
 {
  FUNC_3("could not find common ancestor of the source and target cluster's timelines");
 }
}
