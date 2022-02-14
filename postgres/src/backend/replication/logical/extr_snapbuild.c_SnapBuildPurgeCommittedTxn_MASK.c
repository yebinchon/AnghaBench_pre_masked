
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
typedef int TransactionId ;
struct TYPE_4__ {int xcnt; int * xip; } ;
struct TYPE_5__ {TYPE_1__ committed; int xmax; int xmin; int context; } ;
typedef TYPE_2__ SnapBuild ;


 int VAR_0 ;
 int * FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(SnapBuild *VAR_1)
{
 int VAR_2;
 TransactionId *VAR_3;
 int VAR_4 = 0;


 if (!FUNC_2(VAR_1->xmin))
  return;


 VAR_3 =
  FUNC_0(VAR_1->context,
         VAR_1->committed.xcnt * sizeof(TransactionId));


 for (VAR_2 = 0; VAR_2 < VAR_1->committed.xcnt; VAR_2++)
 {
  if (FUNC_1(VAR_1->committed.xip[VAR_2],
          VAR_1->xmin))
   ;
  else
   VAR_3[VAR_4++] = VAR_1->committed.xip[VAR_2];
 }


 FUNC_4(VAR_1->committed.xip, VAR_3,
     VAR_4 * sizeof(TransactionId));

 FUNC_3(VAR_0, "purged committed transactions from %u to %u, xmin: %u, xmax: %u",
   (uint32) VAR_1->committed.xcnt, (uint32) VAR_4,
   VAR_1->xmin, VAR_1->xmax);
 VAR_1->committed.xcnt = VAR_4;

 FUNC_5(VAR_3);
}
