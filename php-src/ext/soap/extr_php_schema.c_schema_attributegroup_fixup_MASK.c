
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int zend_ulong ;
typedef int zend_string ;
typedef TYPE_1__* sdlTypePtr ;
struct TYPE_13__ {int * attributeGroups; } ;
typedef TYPE_2__ sdlCtx ;
typedef TYPE_3__* sdlAttributePtr ;
typedef int sdlAttribute ;
struct TYPE_14__ {int * ref; int * extraAttributes; void* name; void* namens; void* fixed; void* def; } ;
struct TYPE_12__ {scalar_t__ attributes; } ;
typedef int HashTable ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,TYPE_3__*) ;
 int FUNC_7 (int *,int *,int ) ;
 TYPE_3__* FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,int **,int *) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (int *,int ,int *,int ,int ) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void FUNC_16(sdlCtx *VAR_3, sdlAttributePtr VAR_4, HashTable *VAR_5)
{
 sdlTypePtr VAR_6;
 sdlAttributePtr VAR_7;

 if (VAR_4->ref != ((void*)0)) {
  if (VAR_3->attributeGroups != ((void*)0)) {
   VAR_6 = (sdlTypePtr)FUNC_5(VAR_3->attributeGroups, VAR_4->ref);
   if (VAR_6) {
    if (VAR_6->attributes) {
     FUNC_13(VAR_6->attributes);
     while ((VAR_7 = FUNC_8(VAR_6->attributes)) != ((void*)0)) {
      if (FUNC_10(VAR_6->attributes) == VAR_0) {
       zend_string* VAR_8;
       sdlAttributePtr VAR_9;

       FUNC_4(VAR_3, VAR_7);

       VAR_9 = FUNC_1(sizeof(sdlAttribute));
       FUNC_3(VAR_9, VAR_7, sizeof(sdlAttribute));
       if (VAR_9->def) {VAR_9->def = FUNC_2(VAR_9->def);}
       if (VAR_9->fixed) {VAR_9->fixed = FUNC_2(VAR_9->fixed);}
       if (VAR_9->namens) {VAR_9->namens = FUNC_2(VAR_9->namens);}
       if (VAR_9->name) {VAR_9->name = FUNC_2(VAR_9->name);}
       if (VAR_9->extraAttributes) {
        HashTable *VAR_10 = FUNC_1(sizeof(HashTable));
        FUNC_12(VAR_10, FUNC_15(VAR_9->extraAttributes), ((void*)0), VAR_2, 0);
        FUNC_7(VAR_10, VAR_9->extraAttributes, VAR_1);
        VAR_9->extraAttributes = VAR_10;
       }

       FUNC_9(VAR_6->attributes, &VAR_8, ((void*)0));
       FUNC_6(VAR_5, VAR_8, VAR_9);

       FUNC_14(VAR_6->attributes);
      } else {
       zend_ulong VAR_11;

       FUNC_16(VAR_3, VAR_7, VAR_5);
       FUNC_9(VAR_6->attributes, ((void*)0), &VAR_11);
       FUNC_11(VAR_6->attributes, VAR_11);
      }
     }
    }
   }
  }
  FUNC_0(VAR_4->ref);
  VAR_4->ref = ((void*)0);
 }
}
