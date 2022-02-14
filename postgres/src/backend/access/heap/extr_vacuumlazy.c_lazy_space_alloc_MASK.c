
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_dead_tuples; scalar_t__ dead_tuples; scalar_t__ num_dead_tuples; scalar_t__ useindex; } ;
typedef TYPE_1__ LVRelStats ;
typedef int ItemPointerData ;
typedef scalar_t__ ItemPointer ;
typedef long BlockNumber ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 long VAR_1 ;
 long FUNC_1 (long,long) ;
 int VAR_2 ;
 long VAR_3 ;
 long FUNC_2 (long,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (long) ;

__attribute__((used)) static void
FUNC_4(LVRelStats *VAR_6, BlockNumber VAR_7)
{
 long VAR_8;
 int VAR_9 = FUNC_0() &&
 VAR_4 != -1 ?
 VAR_4 : VAR_5;

 if (VAR_6->useindex)
 {
  VAR_8 = (VAR_9 * 1024L) / sizeof(ItemPointerData);
  VAR_8 = FUNC_2(VAR_8, VAR_0);
  VAR_8 = FUNC_2(VAR_8, VAR_2 / sizeof(ItemPointerData));


  if ((BlockNumber) (VAR_8 / VAR_1) > VAR_7)
   VAR_8 = VAR_7 * VAR_1;


  VAR_8 = FUNC_1(VAR_8, VAR_3);
 }
 else
 {
  VAR_8 = VAR_3;
 }

 VAR_6->num_dead_tuples = 0;
 VAR_6->max_dead_tuples = (int) VAR_8;
 VAR_6->dead_tuples = (ItemPointer)
  FUNC_3(VAR_8 * sizeof(ItemPointerData));
}
