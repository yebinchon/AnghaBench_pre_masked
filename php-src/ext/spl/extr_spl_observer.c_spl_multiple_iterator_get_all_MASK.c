
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zval ;
struct TYPE_9__ {int inf; int obj; } ;
typedef TYPE_2__ spl_SplObjectStorageElement ;
struct TYPE_10__ {int flags; int pos; int storage; } ;
typedef TYPE_3__ spl_SplObjectStorage ;
struct TYPE_11__ {TYPE_1__* iterator_funcs_ptr; } ;
struct TYPE_8__ {int zf_key; int zf_current; int zf_valid; } ;


 int FUNC_0 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_5__* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (int ,TYPE_5__*,int *,char*,int *) ;
 TYPE_2__* FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,int ,int *) ;
 int FUNC_18 (int ,char*,int ) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static void FUNC_20(spl_SplObjectStorage *VAR_8, int VAR_9, zval *VAR_10)
{
 spl_SplObjectStorageElement *VAR_11;
 zval *VAR_12, VAR_13;
 int VAR_14 = 1, VAR_15;

 VAR_15 = FUNC_16(&VAR_8->storage);
 if (VAR_15 < 1) {
  VAR_3;
 }

 FUNC_11(VAR_10, VAR_15);

 FUNC_14(&VAR_8->storage, &VAR_8->pos);
 while ((VAR_11 = FUNC_13(&VAR_8->storage, &VAR_8->pos)) != ((void*)0) && !FUNC_0(VAR_5)) {
  VAR_12 = &VAR_11->obj;
  FUNC_12(FUNC_6(VAR_12), FUNC_5(VAR_12), &FUNC_5(VAR_12)->iterator_funcs_ptr->zf_valid, "valid", &VAR_13);

  if (!FUNC_3(VAR_13)) {
   VAR_14 = FUNC_8(VAR_13) == VAR_0;
   FUNC_19(&VAR_13);
  } else {
   VAR_14 = 0;
  }

  if (VAR_14) {
   if (VAR_4 == VAR_9) {
    FUNC_12(FUNC_6(VAR_12), FUNC_5(VAR_12), &FUNC_5(VAR_12)->iterator_funcs_ptr->zf_current, "current", &VAR_13);
   } else {
    FUNC_12(FUNC_6(VAR_12), FUNC_5(VAR_12), &FUNC_5(VAR_12)->iterator_funcs_ptr->zf_key, "key", &VAR_13);
   }
   if (FUNC_3(VAR_13)) {
    FUNC_18(VAR_7, "Failed to call sub iterator method", 0);
    return;
   }
  } else if (VAR_8->flags & VAR_2) {
   if (VAR_4 == VAR_9) {
    FUNC_18(VAR_7, "Called current() with non valid sub iterator", 0);
   } else {
    FUNC_18(VAR_7, "Called key() with non valid sub iterator", 0);
   }
   return;
  } else {
   FUNC_1(&VAR_13);
  }

  if (VAR_8->flags & VAR_1) {
   switch (FUNC_8(VAR_11->inf)) {
    case 129:
     FUNC_9(VAR_10, FUNC_4(VAR_11->inf), &VAR_13);
     break;
    case 128:
     FUNC_17(FUNC_2(VAR_10), FUNC_7(VAR_11->inf), &VAR_13);
     break;
    default:
     FUNC_19(&VAR_13);
     FUNC_18(VAR_6, "Sub-Iterator is associated with NULL", 0);
     return;
   }
  } else {
   FUNC_10(VAR_10, &VAR_13);
  }

  FUNC_15(&VAR_8->storage, &VAR_8->pos);
 }
}
