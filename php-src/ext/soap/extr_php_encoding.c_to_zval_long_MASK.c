
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef int zend_long ;
typedef TYPE_2__* xmlNodePtr ;
typedef int encodeTypePtr ;
struct TYPE_6__ {TYPE_1__* children; } ;
struct TYPE_5__ {scalar_t__ type; scalar_t__ content; int * next; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;


 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,double) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char*,int ,int *,double*,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static zval *FUNC_8(zval *VAR_3, encodeTypePtr VAR_4, xmlNodePtr VAR_5)
{
 FUNC_3(VAR_3);
 FUNC_0(VAR_5, VAR_3);

 if (VAR_5 && VAR_5->children) {
  if (VAR_5->children->type == VAR_1 && VAR_5->children->next == ((void*)0)) {
   zend_long VAR_6;
   double VAR_7;

   FUNC_7(VAR_5->children->content);
   VAR_2 = 0;

   switch (FUNC_4((char*)VAR_5->children->content, FUNC_6((char*)VAR_5->children->content), &VAR_6, &VAR_7, 0)) {
    case 128:
     FUNC_2(VAR_3, VAR_6);
     break;
    case 129:
     FUNC_1(VAR_3, VAR_7);
     break;
    default:
     FUNC_5(VAR_0, "Encoding: Violation of encoding rules");
   }
  } else {
   FUNC_5(VAR_0, "Encoding: Violation of encoding rules");
  }
 } else {
  FUNC_3(VAR_3);
 }
 return VAR_3;
}
