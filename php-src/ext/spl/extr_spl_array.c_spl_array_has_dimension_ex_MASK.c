
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zval ;
struct TYPE_9__ {int ce; } ;
typedef TYPE_1__ zend_object ;
typedef int zend_long ;
typedef int zend_bool ;
struct TYPE_10__ {scalar_t__ fptr_offset_get; scalar_t__ fptr_offset_has; } ;
typedef TYPE_2__ spl_array_object ;
typedef int HashTable ;


 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 TYPE_2__* FUNC_7 (TYPE_1__*) ;
 int * FUNC_8 (TYPE_2__*) ;
 int * FUNC_9 (int,TYPE_1__*,int *,int ,int *) ;
 int FUNC_10 (TYPE_1__*,int ,scalar_t__*,char*,int *,int *) ;
 int FUNC_11 (int ,char*) ;
 int * FUNC_12 (int *,int) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(int VAR_3, zend_object *VAR_4, zval *VAR_5, int VAR_6)
{
 spl_array_object *VAR_7 = FUNC_7(VAR_4);
 zend_long VAR_8;
 zval VAR_9, *VAR_10 = ((void*)0), *VAR_11;

 if (VAR_3 && VAR_7->fptr_offset_has) {
  FUNC_0(VAR_5);
  FUNC_10(VAR_4, VAR_4->ce, &VAR_7->fptr_offset_has, "offsetExists", &VAR_9, VAR_5);
  FUNC_15(VAR_5);

  if (FUNC_13(&VAR_9)) {
   FUNC_15(&VAR_9);
   if (VAR_6 != 1) {
    return 1;
   } else if (VAR_7->fptr_offset_get) {
    VAR_10 = FUNC_9(1, VAR_4, VAR_5, VAR_0, &VAR_9);
   }
  } else {
   FUNC_15(&VAR_9);
   return 0;
  }
 }

 if (!VAR_10) {
  HashTable *VAR_12 = FUNC_8(VAR_7);

try_again:
  switch (FUNC_6(VAR_5)) {
   case 129:
    if ((VAR_11 = FUNC_14(VAR_12, FUNC_5(VAR_5))) != ((void*)0)) {
     if (VAR_6 == 2) {
      return 1;
     }
    } else {
     return 0;
    }
    break;

   case 134:
    VAR_8 = (zend_long)FUNC_2(VAR_5);
    goto num_index;
   case 130:
    VAR_8 = FUNC_4(VAR_5);
    goto num_index;
   case 133:
    VAR_8 = 0;
    goto num_index;
   case 128:
    VAR_8 = 1;
    goto num_index;
   case 132:
    VAR_8 = FUNC_3(VAR_5);
num_index:
    if ((VAR_11 = FUNC_12(VAR_12, VAR_8)) != ((void*)0)) {
     if (VAR_6 == 2) {
      return 1;
     }
    } else {
     return 0;
    }
    break;
   case 131:
    FUNC_1(VAR_5);
    goto try_again;
   default:
    FUNC_11(VAR_1, "Illegal offset type");
    return 0;
  }

  if (VAR_6 && VAR_3 && VAR_7->fptr_offset_get) {
   VAR_10 = FUNC_9(1, VAR_4, VAR_5, VAR_0, &VAR_9);
  } else {
   VAR_10 = VAR_11;
  }
 }

 {
  zend_bool VAR_13 = VAR_6 ? FUNC_13(VAR_10) : FUNC_6(VAR_10) != VAR_2;
  if (VAR_10 == &VAR_9) {
   FUNC_15(&VAR_9);
  }
  return VAR_13;
 }
}
