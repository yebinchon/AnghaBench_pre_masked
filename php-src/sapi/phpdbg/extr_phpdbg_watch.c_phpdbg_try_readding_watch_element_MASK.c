
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char zval ;
typedef int zend_bool ;
struct TYPE_7__ {char zv; int ht; } ;
struct TYPE_8__ {int flags; int * parent_container; TYPE_1__ backup; int str; struct TYPE_8__* child; int name_in_parent; } ;
typedef TYPE_2__ phpdbg_watch_element ;
typedef int HashTable ;
typedef int Bucket ;


 int * FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (char*,TYPE_2__*) ;
 scalar_t__ FUNC_7 (int ,char*,char*) ;
 int FUNC_8 (int ,int ,char*,char*) ;
 int FUNC_9 (TYPE_2__*) ;
 char* FUNC_10 (int *,int ) ;

zend_bool FUNC_11(zval *VAR_7, phpdbg_watch_element *VAR_8) {
 zval *VAR_9;
 HashTable *VAR_10 = FUNC_0(VAR_7);

 if (!VAR_10) {
  return 0;
 } else if (VAR_8->flags & (VAR_2 | VAR_4)) {
  char *VAR_11 = ((char *) VAR_10) + VAR_0;
  char *VAR_12 = ((char *) &VAR_8->backup.ht) + VAR_0;
  if (FUNC_7(VAR_5, VAR_12, VAR_11)) {
   FUNC_8(VAR_5, VAR_8->str, VAR_12, VAR_11);
  }

  FUNC_6(VAR_7, VAR_8);
 } else if ((VAR_9 = FUNC_10(VAR_10, VAR_8->name_in_parent))) {
  if (VAR_8->flags & VAR_3) {
   zval *VAR_13 = VAR_9;

   while (FUNC_4(VAR_13) == VAR_1) {
    VAR_13 = FUNC_1(VAR_13);
   }
   if (FUNC_2(VAR_13)) {
    VAR_13 = FUNC_3(VAR_13);
   }

   if (!FUNC_11(VAR_13, VAR_8->child)) {
    return 0;
   }
  } else if (FUNC_7(VAR_6, &VAR_8->backup.zv, VAR_9)) {
   FUNC_8(VAR_6, VAR_8->str, &VAR_8->backup.zv, VAR_9);
  }

  VAR_8->parent_container = VAR_10;
  FUNC_5((Bucket *) VAR_9, VAR_8);
  FUNC_9(VAR_8);
 } else {
  return 0;
 }

 return 1;
}
