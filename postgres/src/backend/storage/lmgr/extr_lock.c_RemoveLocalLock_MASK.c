
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32 ;
struct TYPE_8__ {scalar_t__* count; int mutex; } ;
struct TYPE_7__ {int * owner; } ;
struct TYPE_6__ {int numLockOwners; int holdsStrongLockCount; int tag; int hashcode; TYPE_2__* lockOwners; } ;
typedef TYPE_1__ LOCALLOCK ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 TYPE_5__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,void*,int ,int *) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_8(LOCALLOCK *VAR_4)
{
 int VAR_5;

 for (VAR_5 = VAR_4->numLockOwners - 1; VAR_5 >= 0; VAR_5--)
 {
  if (VAR_4->lockOwners[VAR_5].owner != ((void*)0))
   FUNC_2(VAR_4->lockOwners[VAR_5].owner, VAR_4);
 }
 VAR_4->numLockOwners = 0;
 if (VAR_4->lockOwners != ((void*)0))
  FUNC_7(VAR_4->lockOwners);
 VAR_4->lockOwners = ((void*)0);

 if (VAR_4->holdsStrongLockCount)
 {
  uint32 VAR_6;

  VAR_6 = FUNC_1(VAR_4->hashcode);

  FUNC_3(&VAR_0->mutex);
  FUNC_0(VAR_0->count[VAR_6] > 0);
  VAR_0->count[VAR_6]--;
  VAR_4->holdsStrongLockCount = 0;
  FUNC_4(&VAR_0->mutex);
 }

 if (!FUNC_6(VAR_2,
      (void *) &(VAR_4->tag),
      VAR_1, ((void*)0)))
  FUNC_5(VAR_3, "locallock table corrupted");
}
