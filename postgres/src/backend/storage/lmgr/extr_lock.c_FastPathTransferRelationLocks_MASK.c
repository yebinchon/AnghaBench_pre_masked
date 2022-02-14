
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t uint32 ;
struct TYPE_18__ {size_t allProcCount; TYPE_3__* allProcs; } ;
struct TYPE_17__ {scalar_t__ locktag_field2; scalar_t__ locktag_field1; } ;
struct TYPE_16__ {scalar_t__ databaseId; scalar_t__* fpRelId; int backendLock; } ;
struct TYPE_14__ {int myLock; } ;
struct TYPE_15__ {TYPE_1__ tag; } ;
typedef TYPE_2__ PROCLOCK ;
typedef TYPE_3__ PGPROC ;
typedef scalar_t__ Oid ;
typedef int LockMethod ;
typedef int LWLock ;
typedef TYPE_4__ LOCKTAG ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_3__*,size_t,size_t) ;
 int FUNC_1 (TYPE_3__*,size_t,size_t) ;
 scalar_t__ FUNC_2 (TYPE_3__*,size_t) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_3 (int ,TYPE_2__*,size_t) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int * FUNC_6 (size_t) ;
 TYPE_8__* VAR_4 ;
 TYPE_2__* FUNC_7 (int ,TYPE_3__*,TYPE_4__ const*,size_t,size_t) ;

__attribute__((used)) static bool
FUNC_8(LockMethod VAR_5, const LOCKTAG *VAR_6,
         uint32 VAR_7)
{
 LWLock *VAR_8 = FUNC_6(VAR_7);
 Oid VAR_9 = VAR_6->locktag_field2;
 uint32 VAR_10;







 for (VAR_10 = 0; VAR_10 < VAR_4->allProcCount; VAR_10++)
 {
  PGPROC *VAR_11 = &VAR_4->allProcs[VAR_10];
  uint32 VAR_12;

  FUNC_4(&VAR_11->backendLock, VAR_3);
  if (VAR_11->databaseId != VAR_6->locktag_field1)
  {
   FUNC_5(&VAR_11->backendLock);
   continue;
  }

  for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
  {
   uint32 VAR_13;


   if (VAR_9 != VAR_11->fpRelId[VAR_12] || FUNC_2(VAR_11, VAR_12) == 0)
    continue;


   FUNC_4(VAR_8, VAR_3);
   for (VAR_13 = VAR_1;
     VAR_13 < VAR_1 + VAR_0;
     ++VAR_13)
   {
    PROCLOCK *VAR_14;

    if (!FUNC_0(VAR_11, VAR_12, VAR_13))
     continue;
    VAR_14 = FUNC_7(VAR_5, VAR_11, VAR_6,
           VAR_7, VAR_13);
    if (!VAR_14)
    {
     FUNC_5(VAR_8);
     FUNC_5(&VAR_11->backendLock);
     return 0;
    }
    FUNC_3(VAR_14->tag.myLock, VAR_14, VAR_13);
    FUNC_1(VAR_11, VAR_12, VAR_13);
   }
   FUNC_5(VAR_8);


   break;
  }
  FUNC_5(&VAR_11->backendLock);
 }
 return 1;
}
