
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * attributes; } ;
typedef TYPE_1__ sdlCtx ;
typedef TYPE_2__* sdlAttributePtr ;
struct TYPE_6__ {char* ref; char* name; char* namens; char* def; char* fixed; int encode; int * extraAttributes; int use; int form; } ;
typedef int HashTable ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int) ;
 void* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int ,int *,int ,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(sdlCtx *VAR_4, sdlAttributePtr VAR_5)
{
 sdlAttributePtr VAR_6;

 if (VAR_5->ref != ((void*)0)) {
  if (VAR_4->attributes != ((void*)0)) {
   VAR_6 = (sdlAttributePtr)FUNC_3(VAR_4->attributes, VAR_5->ref);
   if (VAR_6) {
    FUNC_8(VAR_4, VAR_6);
    if (VAR_6->name != ((void*)0) && VAR_5->name == ((void*)0)) {
     VAR_5->name = FUNC_2(VAR_6->name);
    }
    if (VAR_6->namens != ((void*)0) && VAR_5->namens == ((void*)0)) {
     VAR_5->namens = FUNC_2(VAR_6->namens);
    }
    if (VAR_6->def != ((void*)0) && VAR_5->def == ((void*)0)) {
     VAR_5->def = FUNC_2(VAR_6->def);
    }
    if (VAR_6->fixed != ((void*)0) && VAR_5->fixed == ((void*)0)) {
     VAR_5->fixed = FUNC_2(VAR_6->fixed);
    }
    if (VAR_5->form == VAR_0) {
     VAR_5->form = VAR_6->form;
    }
    if (VAR_5->use == VAR_1) {
     VAR_5->use = VAR_6->use;
    }
    if (VAR_6->extraAttributes != ((void*)0)) {
     VAR_5->extraAttributes = FUNC_1(sizeof(HashTable));
     FUNC_6(VAR_5->extraAttributes, FUNC_7(VAR_6->extraAttributes), ((void*)0), VAR_3, 0);
     FUNC_5(VAR_5->extraAttributes, VAR_6->extraAttributes, VAR_2);
    }
    VAR_5->encode = VAR_6->encode;
   }
  }
  if (VAR_5->name == ((void*)0) && VAR_5->ref != ((void*)0)) {
   char *VAR_7 = FUNC_4(VAR_5->ref, ':');
   if (VAR_7) {
    VAR_5->name = FUNC_2(VAR_7+1);
   } else{
    VAR_5->name = FUNC_2(VAR_5->ref);
   }
  }
  FUNC_0(VAR_5->ref);
  VAR_5->ref = ((void*)0);
 }
}
