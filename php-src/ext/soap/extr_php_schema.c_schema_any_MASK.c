
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xmlNodePtr ;
typedef int xmlAttrPtr ;
typedef int sdlTypePtr ;
typedef int sdlPtr ;
typedef TYPE_2__* sdlContentModelPtr ;
typedef int sdlContentModel ;
struct TYPE_7__ {int content; } ;
struct TYPE_8__ {TYPE_1__ u; int kind; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(sdlPtr VAR_2, xmlAttrPtr VAR_3, xmlNodePtr VAR_4, sdlTypePtr VAR_5, sdlContentModelPtr VAR_6)
{
 if (VAR_6 != ((void*)0)) {
  sdlContentModelPtr VAR_7;

  VAR_7 = FUNC_0(sizeof(sdlContentModel));
  VAR_7->kind = VAR_1;

  FUNC_1(VAR_4, VAR_7);

  FUNC_2(VAR_6->u.content, VAR_7);
 }
 return VAR_0;
}
