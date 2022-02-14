
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_ulong ;
typedef int zend_string ;
struct TYPE_4__ {int * name_to_dispid; int * dispid_to_name; int object; } ;
typedef TYPE_1__ php_dispatchex ;
typedef int namebuf ;
struct TYPE_5__ {int function_table; } ;
typedef int HashPosition ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_1 (int *,int) ;
 int VAR_3 ;
 int FUNC_2 (int *,int *) ;
 TYPE_3__* FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (char*) ;
 int * FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int **,int*,int *) ;
 int FUNC_9 (int *,int,int *) ;
 int FUNC_10 (int *,int ,int *,int ,int ) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int *,int *) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (char*,int ,int ) ;
 int FUNC_17 (int *,int ) ;

__attribute__((used)) static void FUNC_18(php_dispatchex *VAR_4)
{
 HashPosition VAR_5;
 zend_string *VAR_6 = ((void*)0);
 zval *VAR_7, VAR_8;
 int VAR_9;
 zend_ulong VAR_10;

 if (VAR_4->dispid_to_name == ((void*)0)) {
  FUNC_0(VAR_4->dispid_to_name);
  FUNC_0(VAR_4->name_to_dispid);
  FUNC_10(VAR_4->name_to_dispid, 0, ((void*)0), VAR_3, 0);
  FUNC_10(VAR_4->dispid_to_name, 0, ((void*)0), VAR_3, 0);
 }


 if (FUNC_4(VAR_4->object)) {
  FUNC_11(FUNC_4(VAR_4->object), &VAR_5);
  while (VAR_1 != (VAR_9 =
    FUNC_8(FUNC_4(VAR_4->object), &VAR_6,
    &VAR_10, &VAR_5))) {
   char VAR_11[32];
   if (VAR_9 == VAR_0) {
    FUNC_5(VAR_11, sizeof(VAR_11), VAR_2, VAR_10);
    VAR_6 = FUNC_16(VAR_11, FUNC_6(VAR_11), 0);
   } else {
    FUNC_15(VAR_6);
   }

   FUNC_12(FUNC_4(VAR_4->object), &VAR_5);


   if ((VAR_7 = FUNC_7(VAR_4->name_to_dispid, VAR_6)) != ((void*)0)) {
    FUNC_17(VAR_6, 0);
    continue;
   }


   FUNC_2(&VAR_8, VAR_6);
   VAR_10 = FUNC_13(VAR_4->dispid_to_name);
   FUNC_9(VAR_4->dispid_to_name, VAR_10, &VAR_8);

   FUNC_1(&VAR_8, VAR_10);
   FUNC_14(VAR_4->name_to_dispid, VAR_6, &VAR_8);

   FUNC_17(VAR_6, 0);
  }
 }


 if (FUNC_3(VAR_4->object)) {
  FUNC_11(&FUNC_3(VAR_4->object)->function_table, &VAR_5);
  while (VAR_1 != (VAR_9 =
    FUNC_8(&FUNC_3(VAR_4->object)->function_table,
     &VAR_6, &VAR_10, &VAR_5))) {

   char VAR_12[32];
   if (VAR_9 == VAR_0) {
    FUNC_5(VAR_12, sizeof(VAR_12), "%d", VAR_10);
    VAR_6 = FUNC_16(VAR_12, FUNC_6(VAR_12), 0);
   } else {
    FUNC_15(VAR_6);
   }

   FUNC_12(&FUNC_3(VAR_4->object)->function_table, &VAR_5);


   if ((VAR_7 = FUNC_7(VAR_4->name_to_dispid, VAR_6)) != ((void*)0)) {
    FUNC_17(VAR_6, 0);
    continue;
   }


   FUNC_2(&VAR_8, VAR_6);
   VAR_10 = FUNC_13(VAR_4->dispid_to_name);
   FUNC_9(VAR_4->dispid_to_name, VAR_10, &VAR_8);

   FUNC_1(&VAR_8, VAR_10);
   FUNC_14(VAR_4->name_to_dispid, VAR_6, &VAR_8);

   FUNC_17(VAR_6, 0);
  }
 }
}
