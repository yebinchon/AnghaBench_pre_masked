
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * myXact; TYPE_1__* myTarget; } ;
struct TYPE_9__ {TYPE_2__ tag; } ;
struct TYPE_8__ {int nelements; int * xacts; int * locktags; } ;
struct TYPE_6__ {int tag; } ;
typedef int SERIALIZABLEXACT ;
typedef TYPE_3__ PredicateLockData ;
typedef int PREDICATELOCKTARGETTAG ;
typedef TYPE_4__ PREDICATELOCK ;
typedef int HASH_SEQ_STATUS ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

PredicateLockData *
FUNC_8(void)
{
 PredicateLockData *VAR_4;
 int VAR_5;
 int VAR_6,
    VAR_7;
 HASH_SEQ_STATUS VAR_8;
 PREDICATELOCK *VAR_9;

 VAR_4 = (PredicateLockData *) FUNC_7(sizeof(PredicateLockData));





 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  FUNC_1(FUNC_3(VAR_5), VAR_0);
 FUNC_1(VAR_3, VAR_0);


 VAR_6 = FUNC_4(VAR_2);
 VAR_4->nelements = VAR_6;
 VAR_4->locktags = (PREDICATELOCKTARGETTAG *)
  FUNC_7(sizeof(PREDICATELOCKTARGETTAG) * VAR_6);
 VAR_4->xacts = (SERIALIZABLEXACT *)
  FUNC_7(sizeof(SERIALIZABLEXACT) * VAR_6);



 FUNC_5(&VAR_8, VAR_2);

 VAR_7 = 0;

 while ((VAR_9 = (PREDICATELOCK *) FUNC_6(&VAR_8)))
 {
  VAR_4->locktags[VAR_7] = VAR_9->tag.myTarget->tag;
  VAR_4->xacts[VAR_7] = *VAR_9->tag.myXact;
  VAR_7++;
 }

 FUNC_0(VAR_7 == VAR_6);


 FUNC_2(VAR_3);
 for (VAR_5 = VAR_1 - 1; VAR_5 >= 0; VAR_5--)
  FUNC_2(FUNC_3(VAR_5));

 return VAR_4;
}
