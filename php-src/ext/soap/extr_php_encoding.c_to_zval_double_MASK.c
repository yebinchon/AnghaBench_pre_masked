
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef double zend_long ;
typedef TYPE_2__* xmlNodePtr ;
typedef int encodeTypePtr ;
struct TYPE_6__ {TYPE_1__* children; } ;
struct TYPE_5__ {scalar_t__ type; scalar_t__ content; int * next; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;


 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,double) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,double*,double*,int ) ;
 double FUNC_4 () ;
 double FUNC_5 () ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static zval *FUNC_10(zval *VAR_2, encodeTypePtr VAR_3, xmlNodePtr VAR_4)
{
 FUNC_2(VAR_2);
 FUNC_0(VAR_4, VAR_2);

 if (VAR_4 && VAR_4->children) {
  if (VAR_4->children->type == VAR_1 && VAR_4->children->next == ((void*)0)) {
   zend_long VAR_5;
   double VAR_6;

   FUNC_9(VAR_4->children->content);
   switch (FUNC_3((char*)VAR_4->children->content, FUNC_7((char*)VAR_4->children->content), &VAR_5, &VAR_6, 0)) {
    case 128:
     FUNC_1(VAR_2, VAR_5);
     break;
    case 129:
     FUNC_1(VAR_2, VAR_6);
     break;
    default:
     if (FUNC_8((char*)VAR_4->children->content, "NaN", sizeof("NaN")-1) == 0) {
      FUNC_1(VAR_2, FUNC_5());
     } else if (FUNC_8((char*)VAR_4->children->content, "INF", sizeof("INF")-1) == 0) {
      FUNC_1(VAR_2, FUNC_4());
     } else if (FUNC_8((char*)VAR_4->children->content, "-INF", sizeof("-INF")-1) == 0) {
      FUNC_1(VAR_2, -FUNC_4());
     } else {
      FUNC_6(VAR_0, "Encoding: Violation of encoding rules");
     }
   }
  } else {
   FUNC_6(VAR_0, "Encoding: Violation of encoding rules");
  }
 } else {
  FUNC_2(VAR_2);
 }
 return VAR_2;
}
