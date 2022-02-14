
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* pthread_rwlock_t ;
struct TYPE_4__ {scalar_t__ nMagic; scalar_t__ nExclusiveAccessCount; scalar_t__ nCompletedSharedAccessCount; int mtxExclusiveAccess; int mtxSharedAccessCompleted; int cndSharedAccessCompleted; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3 (pthread_rwlock_t * VAR_3)
{
  int VAR_4, VAR_5;
  pthread_rwlock_t VAR_6;

  if (VAR_3 == ((void*)0) || *VAR_3 == ((void*)0))
    {
      return (VAR_0);
    }

  if (*VAR_3 == VAR_1)
    {



      return 0;
    }

  VAR_6 = *VAR_3;

  if (VAR_6->nMagic != VAR_2)
    {
      return VAR_0;
    }

  if (VAR_6->nExclusiveAccessCount == 0)
    {
      if ((VAR_4 =
    FUNC_1 (&(VAR_6->mtxSharedAccessCompleted))) != 0)
 {
   return VAR_4;
 }

      if (++VAR_6->nCompletedSharedAccessCount == 0)
 {
   VAR_4 = FUNC_0 (&(VAR_6->cndSharedAccessCompleted));
 }

      VAR_5 = FUNC_2 (&(VAR_6->mtxSharedAccessCompleted));
    }
  else
    {
      VAR_6->nExclusiveAccessCount--;

      VAR_4 = FUNC_2 (&(VAR_6->mtxSharedAccessCompleted));
      VAR_5 = FUNC_2 (&(VAR_6->mtxExclusiveAccess));

    }

  return ((VAR_4 != 0) ? VAR_4 : VAR_5);
}
