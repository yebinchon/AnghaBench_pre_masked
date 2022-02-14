
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ procs; scalar_t__ nProcs; TYPE_2__* lock; } ;
struct TYPE_10__ {TYPE_2__* lock; } ;
struct TYPE_8__ {scalar_t__ size; } ;
struct TYPE_9__ {TYPE_1__ waitProcs; } ;
typedef TYPE_2__ LOCK ;
typedef TYPE_3__ EDGE ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,int,scalar_t__) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__* VAR_3 ;

__attribute__((used)) static bool
FUNC_2(EDGE *VAR_4,
      int VAR_5)
{
 int VAR_6 = 0;
 int VAR_7,
    VAR_8;

 VAR_1 = 0;






 for (VAR_7 = VAR_5; --VAR_7 >= 0;)
 {
  LOCK *VAR_9 = VAR_4[VAR_7].lock;


  for (VAR_8 = VAR_1; --VAR_8 >= 0;)
  {
   if (VAR_3[VAR_8].lock == VAR_9)
    break;
  }
  if (VAR_8 >= 0)
   continue;

  VAR_3[VAR_1].lock = VAR_9;
  VAR_3[VAR_1].procs = VAR_2 + VAR_6;
  VAR_3[VAR_1].nProcs = VAR_9->waitProcs.size;
  VAR_6 += VAR_9->waitProcs.size;
  FUNC_0(VAR_6 <= VAR_0);





  if (!FUNC_1(VAR_9, VAR_4, VAR_7 + 1,
       VAR_3[VAR_1].procs))
   return 0;
  VAR_1++;
 }
 return 1;
}
