
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* sdlTypePtr ;
typedef TYPE_2__* sdlContentModelPtr ;
typedef int sdlContentModel ;
struct TYPE_5__ {void* group; int group_ref; void* content; void* element; } ;
struct TYPE_6__ {int kind; int min_occurs; int max_occurs; TYPE_1__ u; } ;
typedef int HashTable ;


 int FUNC_0 (int,int ,char**) ;
 int FUNC_1 (int,char**) ;






 int VAR_0 ;
 void* FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (char**) ;
 int FUNC_4 (void*,int,int *,int ,int ) ;
 int FUNC_5 (void*,TYPE_2__*) ;

__attribute__((used)) static sdlContentModelPtr FUNC_6(sdlTypePtr *VAR_2, sdlTypePtr *VAR_3, char **VAR_4)
{
 int VAR_5;
 sdlContentModelPtr VAR_6 = FUNC_2(sizeof(sdlContentModel));

 FUNC_0(VAR_6->kind, VAR_1, VAR_4);
 FUNC_1(VAR_6->min_occurs, VAR_4);
 FUNC_1(VAR_6->max_occurs, VAR_4);
 switch (VAR_6->kind) {
  case 131:
   FUNC_1(VAR_5, VAR_4);
   VAR_6->u.element = VAR_3[VAR_5];
   break;
  case 128:
  case 133:
  case 132:
   FUNC_1(VAR_5, VAR_4);
   VAR_6->u.content = FUNC_2(sizeof(HashTable));
   FUNC_4(VAR_6->u.content, VAR_5, ((void*)0), VAR_0, 0);
   while (VAR_5 > 0) {
    sdlContentModelPtr VAR_7 = FUNC_6(VAR_2, VAR_3, VAR_4);
    FUNC_5(VAR_6->u.content, VAR_7);
    VAR_5--;
   }
   break;
  case 129:
   VAR_6->u.group_ref = FUNC_3(VAR_4);
   break;
  case 130:
   FUNC_1(VAR_5, VAR_4);
   VAR_6->u.group = VAR_2[VAR_5];
   break;
  default:
   break;
 }
 return VAR_6;
}
