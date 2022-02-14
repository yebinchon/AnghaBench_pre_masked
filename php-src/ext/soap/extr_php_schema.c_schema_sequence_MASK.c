
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef TYPE_2__* xmlNodePtr ;
typedef int xmlAttrPtr ;
typedef TYPE_3__* sdlTypePtr ;
typedef int sdlPtr ;
typedef TYPE_4__* sdlContentModelPtr ;
typedef int sdlContentModel ;
struct TYPE_24__ {void* content; } ;
struct TYPE_27__ {TYPE_1__ u; int kind; } ;
struct TYPE_26__ {TYPE_4__* model; } ;
struct TYPE_25__ {struct TYPE_25__* next; int name; struct TYPE_25__* children; } ;
typedef int HashTable ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (int ,int ,TYPE_2__*,TYPE_3__*,TYPE_4__*) ;
 int FUNC_3 (int ,int ,TYPE_2__*,TYPE_3__*,TYPE_4__*) ;
 int FUNC_4 (int ,int ,TYPE_2__*,TYPE_3__*,TYPE_4__*) ;
 int FUNC_5 (int ,int ,TYPE_2__*,TYPE_3__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (void*,int ,int *,int ,int ) ;
 int FUNC_9 (void*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_10(sdlPtr VAR_4, xmlAttrPtr VAR_5, xmlNodePtr VAR_6, sdlTypePtr VAR_7, sdlContentModelPtr VAR_8)
{
 xmlNodePtr VAR_9;
 sdlContentModelPtr VAR_10;

 VAR_10 = FUNC_0(sizeof(sdlContentModel));
 VAR_10->kind = VAR_2;
 VAR_10->u.content = FUNC_0(sizeof(HashTable));
 FUNC_8(VAR_10->u.content, 0, ((void*)0), VAR_3, 0);
 if (VAR_8 == ((void*)0)) {
  VAR_7->model = VAR_10;
 } else {
  FUNC_9(VAR_8->u.content, VAR_10);
 }

 FUNC_6(VAR_6, VAR_10);

 VAR_9 = VAR_6->children;
 if (VAR_9 != ((void*)0) && FUNC_1(VAR_9,"annotation")) {

  VAR_9 = VAR_9->next;
 }
 while (VAR_9 != ((void*)0)) {
  if (FUNC_1(VAR_9,"element")) {
   FUNC_4(VAR_4, VAR_5, VAR_9, VAR_7, VAR_10);
  } else if (FUNC_1(VAR_9,"group")) {
   FUNC_5(VAR_4, VAR_5, VAR_9, VAR_7, VAR_10);
  } else if (FUNC_1(VAR_9,"choice")) {
   FUNC_3(VAR_4, VAR_5, VAR_9, VAR_7, VAR_10);
  } else if (FUNC_1(VAR_9,"sequence")) {
   FUNC_10(VAR_4, VAR_5, VAR_9, VAR_7, VAR_10);
  } else if (FUNC_1(VAR_9,"any")) {
   FUNC_2(VAR_4, VAR_5, VAR_9, VAR_7, VAR_10);
  } else {
   FUNC_7(VAR_0, "Parsing Schema: unexpected <%s> in sequence", VAR_9->name);
  }
  VAR_9 = VAR_9->next;
 }
 return VAR_1;
}
