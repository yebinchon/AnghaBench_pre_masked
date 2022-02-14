
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef TYPE_1__* xmlNodePtr ;
struct TYPE_4__ {struct TYPE_4__* next; scalar_t__ name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int *) ;
 int FUNC_11 (int ) ;
 int * FUNC_12 (int *,char*,int *) ;
 int FUNC_13 (int *,int ,TYPE_1__*) ;
 int FUNC_14 (int *,char*,int *) ;
 int FUNC_15 (char*) ;
 int * FUNC_16 (int ,char*,int ) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static void FUNC_18(zval *VAR_3, xmlNodePtr VAR_4)
{
 zval VAR_5, VAR_6, VAR_7, VAR_8;
 zval* VAR_9 = ((void*)0);
 char* VAR_10 = ((void*)0);

 while (VAR_4 != ((void*)0)) {
  if (FUNC_12(VAR_3, (char*)VAR_4->name, &VAR_5) == ((void*)0)) {

   FUNC_1(&VAR_7);
   FUNC_13(&VAR_7, FUNC_11(VAR_2), VAR_4);

   if (VAR_9 && FUNC_6(VAR_9) != VAR_0) {

    FUNC_9(&VAR_6);
    if (VAR_10) {
     FUNC_7(&VAR_6, VAR_10, VAR_9);
    } else {
     FUNC_8(&VAR_6, VAR_9);
    }
    VAR_9 = &VAR_6;
   }

   if (FUNC_5(VAR_7) == VAR_1 && *FUNC_3(VAR_7) == '<') {
    VAR_10 = ((void*)0);
    while (VAR_4->next != ((void*)0)) {
     zval VAR_11;

     FUNC_1(&VAR_11);
     FUNC_13(&VAR_11, FUNC_11(VAR_2), VAR_4->next);
     if (FUNC_5(VAR_11) != VAR_1 || *FUNC_3(VAR_7) != '<') {
      FUNC_4(VAR_11);
      break;
     }
     FUNC_10(&VAR_7, &VAR_7, &VAR_11);
     FUNC_17(&VAR_11);
     VAR_4 = VAR_4->next;
    }
   } else {
    VAR_10 = (char*)VAR_4->name;
   }

   if (VAR_9 == ((void*)0)) {
    if (VAR_10) {

     FUNC_9(&VAR_6);
     FUNC_7(&VAR_6, VAR_10, &VAR_7);
     VAR_9 = &VAR_6;
     VAR_10 = ((void*)0);
    } else {
     FUNC_0(&VAR_8, &VAR_7);
     VAR_9 = &VAR_8;
    }
   } else {

    if (VAR_10) {
     zval *VAR_12;
     if ((VAR_12 = FUNC_16(FUNC_2(VAR_9), VAR_10, FUNC_15(VAR_10))) != ((void*)0)) {
      if (FUNC_6(VAR_12) != VAR_0) {

       FUNC_9(&VAR_6);
       FUNC_8(&VAR_6, VAR_12);
       VAR_12 = &VAR_6;
      }
      FUNC_8(VAR_12, &VAR_7);
     } else {
      FUNC_7(VAR_9, VAR_10, &VAR_7);
     }
    } else {
     FUNC_8(VAR_9, &VAR_7);
    }
    VAR_10 = ((void*)0);
   }
  }
  VAR_4 = VAR_4->next;
 }
 if (VAR_9) {
  FUNC_14(VAR_3, VAR_10 ? VAR_10 : "any", VAR_9);
 }
}
