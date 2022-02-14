
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zval ;
struct TYPE_8__ {int ce; } ;
typedef TYPE_1__ zend_object ;
typedef int zend_long ;
struct TYPE_9__ {scalar_t__ nApplyCount; scalar_t__ fptr_offset_set; } ;
typedef TYPE_2__ spl_array_object ;
typedef int HashTable ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 TYPE_2__* FUNC_9 (TYPE_1__*) ;
 int * FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_1__*,int ,scalar_t__*,char*,int *,int *,int *) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int *,int,int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,int ,int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(int VAR_1, zend_object *VAR_2, zval *VAR_3, zval *VAR_4)
{
 spl_array_object *VAR_5 = FUNC_9(VAR_2);
 zend_long VAR_6;
 HashTable *VAR_7;

 if (VAR_1 && VAR_5->fptr_offset_set) {
  zval VAR_8;

  if (!VAR_3) {
   FUNC_2(&VAR_8);
   VAR_3 = &VAR_8;
  } else {
   FUNC_0(VAR_3);
  }
  FUNC_11(VAR_2, VAR_2->ce, &VAR_5->fptr_offset_set, "offsetSet", ((void*)0), VAR_3, VAR_4);
  FUNC_16(VAR_3);
  return;
 }

 if (VAR_5->nApplyCount > 0) {
  FUNC_12(VAR_0, "Modification of ArrayObject during sorting is prohibited");
  return;
 }

 FUNC_7(VAR_4);
 if (!VAR_3) {
  VAR_7 = FUNC_10(VAR_5);
  FUNC_14(VAR_7, VAR_4);
  return;
 }

try_again:
 switch (FUNC_8(VAR_3)) {
  case 129:
   VAR_7 = FUNC_10(VAR_5);
   FUNC_15(VAR_7, FUNC_6(VAR_3), VAR_4);
   return;
  case 135:
   VAR_6 = (zend_long)FUNC_3(VAR_3);
   goto num_index;
  case 130:
   VAR_6 = FUNC_5(VAR_3);
   goto num_index;
  case 134:
   VAR_6 = 0;
   goto num_index;
  case 128:
   VAR_6 = 1;
   goto num_index;
  case 133:
   VAR_6 = FUNC_4(VAR_3);
num_index:
   VAR_7 = FUNC_10(VAR_5);
   FUNC_13(VAR_7, VAR_6, VAR_4);
   return;
  case 132:
   VAR_7 = FUNC_10(VAR_5);
   FUNC_14(VAR_7, VAR_4);
   return;
  case 131:
   FUNC_1(VAR_3);
   goto try_again;
  default:
   FUNC_12(VAR_0, "Illegal offset type");
   FUNC_16(VAR_4);
   return;
 }
}
