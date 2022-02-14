
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* sdlSoapBindingPtr ;
typedef int sdlSoapBinding ;
typedef TYPE_1__* sdlBindingPtr ;
typedef int sdlBinding ;
struct TYPE_7__ {scalar_t__ bindingType; struct TYPE_7__* bindingAttributes; void* location; void* name; } ;
typedef int HashTable ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 void* FUNC_2 (void*) ;

__attribute__((used)) static sdlBindingPtr FUNC_3(sdlBindingPtr VAR_1, HashTable *VAR_2)
{
 sdlBindingPtr VAR_3 = ((void*)0);

 VAR_3 = FUNC_0(sizeof(sdlBinding));
 FUNC_1(VAR_3, 0, sizeof(sdlBinding));

 *VAR_3 = *VAR_1;

 if (VAR_3->name) {
  VAR_3->name = FUNC_2(VAR_3->name);
 }
 if (VAR_3->location) {
  VAR_3->location = FUNC_2(VAR_3->location);
 }

 if (VAR_3->bindingType == VAR_0 && VAR_3->bindingAttributes) {
  sdlSoapBindingPtr VAR_4;

  VAR_4 = FUNC_0(sizeof(sdlSoapBinding));
  FUNC_1(VAR_4, 0, sizeof(sdlSoapBinding));
  *VAR_4 = *(sdlSoapBindingPtr)VAR_3->bindingAttributes;
  VAR_3->bindingAttributes = VAR_4;
 }

 return VAR_3;
}
