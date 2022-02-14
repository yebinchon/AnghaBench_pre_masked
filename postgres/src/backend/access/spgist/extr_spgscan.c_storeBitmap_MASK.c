
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ntids; int tbm; } ;
typedef TYPE_1__* SpGistScanOpaque ;
typedef int ItemPointer ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_2(SpGistScanOpaque VAR_0, ItemPointer VAR_1,
   Datum VAR_2, bool VAR_3, bool VAR_4, bool VAR_5,
   double *VAR_6)
{
 FUNC_0(!VAR_5 && !VAR_6);
 FUNC_1(VAR_0->tbm, VAR_1, 1, VAR_4);
 VAR_0->ntids++;
}
