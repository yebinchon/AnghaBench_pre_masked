
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zval ;
struct TYPE_11__ {int flags; int zstr; int zchildren; int zcache; } ;
struct TYPE_12__ {TYPE_3__ caching; } ;
struct TYPE_10__ {int data; int key; } ;
struct TYPE_9__ {int zobject; int ce; } ;
struct TYPE_13__ {scalar_t__ dit_type; TYPE_4__ u; TYPE_2__ current; TYPE_1__ inner; } ;
typedef TYPE_5__ spl_dual_it_object ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_9 (TYPE_5__*,int) ;
 int FUNC_10 (TYPE_5__*,int ) ;
 int FUNC_11 (int ,int *,int *,int *) ;
 int FUNC_12 (int ,int ,int *,char*,int *) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static inline void FUNC_17(spl_dual_it_object *VAR_10)
{
 if (FUNC_9(VAR_10, 1) == VAR_7) {
  VAR_10->u.caching.flags |= VAR_5;

  if (VAR_10->u.caching.flags & VAR_2) {
   zval *VAR_11 = &VAR_10->current.key;
   zval *VAR_12 = &VAR_10->current.data;

   FUNC_2(VAR_12);
   FUNC_7(VAR_12);
   FUNC_8(FUNC_4(VAR_10->u.caching.zcache), VAR_11, VAR_12);
   FUNC_16(VAR_12);
  }

  if (VAR_10->dit_type == VAR_6) {
   zval VAR_13, VAR_14, VAR_15;
   FUNC_12(FUNC_5(VAR_10->inner.zobject), VAR_10->inner.ce, ((void*)0), "haschildren", &VAR_13);
   if (FUNC_0(VAR_8)) {
    FUNC_16(&VAR_13);
    if (VAR_10->u.caching.flags & VAR_1) {
     FUNC_13();
    } else {
     return;
    }
   } else {
    if (FUNC_14(&VAR_13)) {
     FUNC_12(FUNC_5(VAR_10->inner.zobject), VAR_10->inner.ce, ((void*)0), "getchildren", &VAR_14);
     if (FUNC_0(VAR_8)) {
      FUNC_16(&VAR_14);
      if (VAR_10->u.caching.flags & VAR_1) {
       FUNC_13();
      } else {
       FUNC_16(&VAR_13);
       return;
      }
     } else {
      FUNC_3(&VAR_15, VAR_10->u.caching.flags & VAR_3);
      FUNC_11(VAR_9, &VAR_10->u.caching.zchildren, &VAR_14, &VAR_15);
      FUNC_16(&VAR_14);
     }
    }
    FUNC_16(&VAR_13);
    if (FUNC_0(VAR_8)) {
     if (VAR_10->u.caching.flags & VAR_1) {
      FUNC_13();
     } else {
      return;
     }
    }
   }
  }
  if (VAR_10->u.caching.flags & (VAR_4|VAR_0)) {
   int VAR_16;
   zval VAR_17;
   if (VAR_10->u.caching.flags & VAR_4) {
    FUNC_1(&VAR_10->u.caching.zstr, &VAR_10->inner.zobject);
   } else {
    FUNC_1(&VAR_10->u.caching.zstr, &VAR_10->current.data);
   }
   VAR_16 = FUNC_15(&VAR_10->u.caching.zstr, &VAR_17);
   if (VAR_16) {
    FUNC_1(&VAR_10->u.caching.zstr, &VAR_17);
   } else {
    FUNC_6(VAR_10->u.caching.zstr);
   }
  }
  FUNC_10(VAR_10, 0);
 } else {
  VAR_10->u.caching.flags &= ~VAR_5;
 }
}
