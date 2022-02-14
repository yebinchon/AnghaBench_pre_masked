
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef TYPE_2__* xmlNodePtr ;
typedef int xmlBufferPtr ;
typedef int encodeTypePtr ;
struct TYPE_6__ {TYPE_1__* children; } ;
struct TYPE_5__ {scalar_t__ type; scalar_t__ content; int * next; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int * FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int VAR_3 ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static zval *FUNC_12(zval *VAR_4, encodeTypePtr VAR_5, xmlNodePtr VAR_6)
{
 FUNC_3(VAR_4);
 FUNC_0(VAR_6, VAR_4);
 if (VAR_6 && VAR_6->children) {
  if (VAR_6->children->type == VAR_2 && VAR_6->children->next == ((void*)0)) {
   if (FUNC_1(VAR_3) != ((void*)0)) {
    xmlBufferPtr VAR_7 = FUNC_8(VAR_6->children->content, FUNC_11(VAR_6->children->content));
    xmlBufferPtr VAR_8 = FUNC_7();
    int VAR_9 = FUNC_10(FUNC_1(VAR_3), VAR_8, VAR_7);

    if (VAR_9 >= 0) {
     FUNC_4(VAR_4, (char*)FUNC_6(VAR_8));
    } else {
     FUNC_4(VAR_4, (char*)VAR_6->children->content);
    }
    FUNC_9(VAR_8);
    FUNC_9(VAR_7);
   } else {
    FUNC_4(VAR_4, (char*)VAR_6->children->content);
   }
  } else if (VAR_6->children->type == VAR_1 && VAR_6->children->next == ((void*)0)) {
   FUNC_4(VAR_4, (char*)VAR_6->children->content);
  } else {
   FUNC_5(VAR_0, "Encoding: Violation of encoding rules");
  }
 } else {
  FUNC_2(VAR_4);
 }
 return VAR_4;
}
