
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* sdlExtraAttributePtr ;
typedef int sdlExtraAttribute ;
typedef TYPE_2__* sdlAttributePtr ;
typedef int encodePtr ;
struct TYPE_6__ {void* extraAttributes; int encode; int use; int form; void* fixed; void* def; void* ref; void* namens; void* name; } ;
struct TYPE_5__ {void* val; void* ns; } ;
typedef int HashTable ;


 int FUNC_0 (int ,int ,char**) ;
 int FUNC_1 (int,char**) ;
 int VAR_0 ;
 void* FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (void*,TYPE_1__*,char**) ;
 void* FUNC_4 (char**) ;
 int FUNC_5 (void*,int,int *,int ,int ) ;

__attribute__((used)) static void FUNC_6(sdlAttributePtr VAR_3, encodePtr *VAR_4, char **VAR_5)
{
 int VAR_6;

 VAR_3->name = FUNC_4(VAR_5);
 VAR_3->namens = FUNC_4(VAR_5);
 VAR_3->ref = FUNC_4(VAR_5);
 VAR_3->def = FUNC_4(VAR_5);
 VAR_3->fixed = FUNC_4(VAR_5);
 FUNC_0(VAR_3->form, VAR_1, VAR_5);
 FUNC_0(VAR_3->use, VAR_2, VAR_5);
 FUNC_1(VAR_6, VAR_5);
 VAR_3->encode = VAR_4[VAR_6];
 FUNC_1(VAR_6, VAR_5);
 if (VAR_6 > 0) {
  VAR_3->extraAttributes = FUNC_2(sizeof(HashTable));
  FUNC_5(VAR_3->extraAttributes, VAR_6, ((void*)0), VAR_0, 0);
  while (VAR_6 > 0) {
   sdlExtraAttributePtr VAR_7 = FUNC_2(sizeof(sdlExtraAttribute));
   FUNC_3(VAR_3->extraAttributes, VAR_7, VAR_5);
   VAR_7->ns = FUNC_4(VAR_5);
   VAR_7->val = FUNC_4(VAR_5);
   --VAR_6;
  }
 }
}
