
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32 ;
typedef int ltree_level ;
struct TYPE_11__ {scalar_t__ numvar; int flag; int low; int high; } ;
typedef TYPE_1__ lquery_level ;
struct TYPE_13__ {int muse; int high_pos; } ;
struct TYPE_12__ {int nt; int nq; int posq; int post; int * t; TYPE_1__* q; } ;
typedef TYPE_2__ FieldNot ;


 int * FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_8__ VAR_1 ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,int) ;

__attribute__((used)) static bool
FUNC_4(lquery_level *VAR_2, int VAR_3, ltree_level *VAR_4, int VAR_5, FieldNot *VAR_6)
{
 uint32 VAR_7 = 0,
    VAR_8 = 0,
    VAR_9 = 0;
 int VAR_10 = VAR_5,
    VAR_11 = VAR_3;
 int VAR_12;
 lquery_level *VAR_13 = ((void*)0);
 ltree_level *VAR_14 = ((void*)0);

 if (VAR_1.muse)
 {
  VAR_8 = VAR_1.high_pos;
  VAR_11--;
  VAR_13 = VAR_2;
  VAR_2 = FUNC_1(VAR_2);
  VAR_1.muse = 0;
 }

 while (VAR_10 > 0 && VAR_11 > 0)
 {
  if (VAR_2->numvar)
  {
   VAR_14 = VAR_4;
   while (VAR_9 < VAR_7)
   {
    VAR_4 = FUNC_0(VAR_4);
    VAR_10--;
    VAR_9++;
    if (VAR_10 == 0)
     return 0;
    if (VAR_6 && VAR_6->q)
     VAR_6->nt++;
   }

   if (VAR_6 && VAR_2->flag & VAR_0)
   {
    if (!(VAR_13 && VAR_13->numvar == 0))
     VAR_13 = VAR_2;
    if (VAR_6->q == ((void*)0))
    {
     VAR_6->t = VAR_14;
     VAR_6->q = VAR_13;
     VAR_6->nt = 1;
     VAR_6->nq = 1 + ((VAR_13 == VAR_2) ? 0 : 1);
     VAR_6->posq = VAR_3 - VAR_11 - ((VAR_13 == VAR_2) ? 0 : 1);
     VAR_6->post = VAR_9;
    }
    else
    {
     VAR_6->nt++;
     VAR_6->nq++;
    }

    if (VAR_11 == 1 && VAR_6->q->numvar == 0)
     VAR_6->nt = VAR_5 - VAR_6->post;
    VAR_4 = FUNC_0(VAR_4);
    VAR_10--;
    VAR_9++;
    if (VAR_8 < VAR_9)
     VAR_8++;
   }
   else
   {
    VAR_12 = 0;
    while (VAR_9 <= VAR_8 && VAR_10 > 0 && !VAR_12)
    {
     VAR_12 = FUNC_2(VAR_2, VAR_4);
     VAR_4 = FUNC_0(VAR_4);
     VAR_10--;
     VAR_9++;
     if (VAR_12 && VAR_13 && VAR_13->numvar == 0 && VAR_10 > 0 && VAR_9 <= VAR_8)
     {
      FieldNot VAR_15;

      if (VAR_6)
       FUNC_3(&VAR_15, VAR_6, sizeof(FieldNot));
      VAR_1.high_pos = VAR_8 - VAR_9;
      VAR_1.muse = 1;
      if (FUNC_4(VAR_13, VAR_11 + 1, VAR_4, VAR_10, (VAR_6) ? &VAR_15 : ((void*)0)))
       return 1;
     }
     if (!VAR_12 && VAR_6)
      VAR_6->nt++;
    }
    if (!VAR_12)
     return 0;

    if (VAR_6 && VAR_6->q)
    {
     if (FUNC_4(VAR_6->q, VAR_6->nq, VAR_6->t, VAR_6->nt, ((void*)0)))
      return 0;
     VAR_6->q = ((void*)0);
    }
    VAR_7 = VAR_9;
    VAR_8 = VAR_9;
   }
  }
  else
  {
   VAR_7 = VAR_9 + VAR_2->low;
   VAR_8 = VAR_9 + VAR_2->high;
   if (VAR_6 && VAR_6->q)
   {
    VAR_6->nq++;
    if (VAR_11 == 1)
     VAR_6->nt = VAR_5 - VAR_6->post;
   }
  }

  VAR_13 = VAR_2;
  VAR_2 = FUNC_1(VAR_2);
  VAR_11--;
 }

 if (VAR_7 > VAR_5 || VAR_5 > VAR_8)
  return 0;

 while (VAR_11 > 0)
 {
  if (VAR_2->numvar)
  {
   if (!(VAR_2->flag & VAR_0))
    return 0;
  }
  else
  {
   VAR_7 = VAR_9 + VAR_2->low;
   VAR_8 = VAR_9 + VAR_2->high;
  }

  VAR_2 = FUNC_1(VAR_2);
  VAR_11--;
 }

 if (VAR_7 > VAR_5 || VAR_5 > VAR_8)
  return 0;

 if (VAR_6 && VAR_6->q && FUNC_4(VAR_6->q, VAR_6->nq, VAR_6->t, VAR_6->nt, ((void*)0)))
  return 0;

 return 1;
}
