
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_dead_tuples; int * dead_tuples; } ;
typedef int Size ;
typedef int Relation ;
typedef int Page ;
typedef int PGRUsage ;
typedef TYPE_1__ LVRelStats ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_3 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (char*,int ,int,int) ;
 int FUNC_13 (int ,int ,int ,int,TYPE_1__*,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int VAR_4 ;
 int FUNC_16 () ;

__attribute__((used)) static void
FUNC_17(Relation VAR_5, LVRelStats *VAR_6)
{
 int VAR_7;
 int VAR_8;
 PGRUsage VAR_9;
 Buffer VAR_10 = VAR_0;

 FUNC_14(&VAR_9);
 VAR_8 = 0;

 VAR_7 = 0;
 while (VAR_7 < VAR_6->num_dead_tuples)
 {
  BlockNumber VAR_11;
  Buffer VAR_12;
  Page VAR_13;
  Size VAR_14;

  FUNC_16();

  VAR_11 = FUNC_3(&VAR_6->dead_tuples[VAR_7]);
  VAR_12 = FUNC_5(VAR_5, VAR_1, VAR_11, VAR_2,
         VAR_4);
  if (!FUNC_2(VAR_12))
  {
   FUNC_8(VAR_12);
   ++VAR_7;
   continue;
  }
  VAR_7 = FUNC_13(VAR_5, VAR_11, VAR_12, VAR_7, VAR_6,
         &VAR_10);


  VAR_13 = FUNC_0(VAR_12);
  VAR_14 = FUNC_4(VAR_13);

  FUNC_9(VAR_12);
  FUNC_6(VAR_5, VAR_11, VAR_14);
  VAR_8++;
 }

 if (FUNC_1(VAR_10))
 {
  FUNC_8(VAR_10);
  VAR_10 = VAR_0;
 }

 FUNC_10(VAR_3,
   (FUNC_12("\"%s\": removed %d row versions in %d pages",
     FUNC_7(VAR_5),
     VAR_7, VAR_8),
    FUNC_11("%s", FUNC_15(&VAR_9))));
}
