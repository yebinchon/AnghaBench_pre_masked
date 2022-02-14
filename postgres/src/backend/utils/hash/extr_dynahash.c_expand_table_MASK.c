
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_13__ {int max_bucket; long nsegs; long dsize; long low_mask; int high_mask; } ;
struct TYPE_12__ {struct TYPE_12__* link; int hashvalue; } ;
struct TYPE_11__ {long sshift; TYPE_2__*** dir; int ssize; TYPE_3__* hctl; } ;
typedef TYPE_1__ HTAB ;
typedef TYPE_2__** HASHSEGMENT ;
typedef TYPE_3__ HASHHDR ;
typedef TYPE_2__* HASHBUCKET ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 long FUNC_2 (long,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_2__** FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_6(HTAB *VAR_1)
{
 HASHHDR *VAR_2 = VAR_1->hctl;
 HASHSEGMENT VAR_3,
    VAR_4;
 long VAR_5,
    VAR_6;
 long VAR_7,
    VAR_8;
 long VAR_9,
    VAR_10;
 HASHBUCKET *VAR_11,
      *VAR_12;
 HASHBUCKET VAR_13,
    VAR_14;

 FUNC_0(!FUNC_1(VAR_2));





 VAR_6 = VAR_2->max_bucket + 1;
 VAR_7 = VAR_6 >> VAR_1->sshift;
 VAR_8 = FUNC_2(VAR_6, VAR_1->ssize);

 if (VAR_7 >= VAR_2->nsegs)
 {

  if (VAR_7 >= VAR_2->dsize)
   if (!FUNC_4(VAR_1))
    return 0;
  if (!(VAR_1->dir[VAR_7] = FUNC_5(VAR_1)))
   return 0;
  VAR_2->nsegs++;
 }


 VAR_2->max_bucket++;







 VAR_5 = (VAR_6 & VAR_2->low_mask);




 if ((uint32) VAR_6 > VAR_2->high_mask)
 {
  VAR_2->low_mask = VAR_2->high_mask;
  VAR_2->high_mask = (uint32) VAR_6 | VAR_2->low_mask;
 }







 VAR_9 = VAR_5 >> VAR_1->sshift;
 VAR_10 = FUNC_2(VAR_5, VAR_1->ssize);

 VAR_3 = VAR_1->dir[VAR_9];
 VAR_4 = VAR_1->dir[VAR_7];

 VAR_11 = &VAR_3[VAR_10];
 VAR_12 = &VAR_4[VAR_8];

 for (VAR_13 = *VAR_11;
   VAR_13 != ((void*)0);
   VAR_13 = VAR_14)
 {
  VAR_14 = VAR_13->link;
  if ((long) FUNC_3(VAR_2, VAR_13->hashvalue) == VAR_5)
  {
   *VAR_11 = VAR_13;
   VAR_11 = &VAR_13->link;
  }
  else
  {
   *VAR_12 = VAR_13;
   VAR_12 = &VAR_13->link;
  }
 }

 *VAR_11 = ((void*)0);
 *VAR_12 = ((void*)0);

 return 1;
}
