
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ status; scalar_t__ portalContext; scalar_t__ holdContext; int * holdStore; int * resowner; int * holdSnapshot; int (* cleanup ) (TYPE_1__*) ;int name; scalar_t__ portalPinned; } ;
typedef TYPE_1__* Portal ;
typedef scalar_t__ MemoryContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int (*) (TYPE_1__*)) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int,int) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (int *) ;

void
FUNC_16(Portal VAR_7, bool VAR_8)
{
 FUNC_0(FUNC_5(VAR_7));





 if (VAR_7->portalPinned)
  FUNC_10(VAR_1,
    (FUNC_11(VAR_0),
     FUNC_12("cannot drop pinned portal \"%s\"", VAR_7->name)));




 if (VAR_7->status == VAR_2)
  FUNC_10(VAR_1,
    (FUNC_11(VAR_0),
     FUNC_12("cannot drop active portal \"%s\"", VAR_7->name)));
 if (FUNC_3(VAR_7->cleanup))
 {
  VAR_7->cleanup(VAR_7);
  VAR_7->cleanup = ((void*)0);
 }







 FUNC_4(VAR_7);


 FUNC_6(VAR_7);







 if (VAR_7->holdSnapshot)
 {
  if (VAR_7->resowner)
   FUNC_9(VAR_7->holdSnapshot,
          VAR_7->resowner);
  VAR_7->holdSnapshot = ((void*)0);
 }
 if (VAR_7->resowner &&
  (!VAR_8 || VAR_7->status == VAR_3))
 {
  bool VAR_9 = (VAR_7->status != VAR_3);

  FUNC_8(VAR_7->resowner,
        VAR_5,
        VAR_9, 0);
  FUNC_8(VAR_7->resowner,
        VAR_6,
        VAR_9, 0);
  FUNC_8(VAR_7->resowner,
        VAR_4,
        VAR_9, 0);
  FUNC_7(VAR_7->resowner);
 }
 VAR_7->resowner = ((void*)0);






 if (VAR_7->holdStore)
 {
  MemoryContext VAR_10;

  VAR_10 = FUNC_2(VAR_7->holdContext);
  FUNC_15(VAR_7->holdStore);
  FUNC_2(VAR_10);
  VAR_7->holdStore = ((void*)0);
 }


 if (VAR_7->holdContext)
  FUNC_1(VAR_7->holdContext);


 FUNC_1(VAR_7->portalContext);


 FUNC_13(VAR_7);
}
