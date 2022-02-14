
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* sdlTypePtr ;
typedef TYPE_1__* sdlSoapBindingFunctionHeaderPtr ;
typedef int sdlSoapBindingFunctionHeader ;
typedef TYPE_2__* sdlSoapBindingFunctionBodyPtr ;
typedef void* encodePtr ;
struct TYPE_7__ {scalar_t__ use; scalar_t__ encodingStyle; void* headers; void* ns; } ;
struct TYPE_6__ {scalar_t__ use; scalar_t__ encodingStyle; void* element; void* encode; void* ns; void* name; void* headerfaults; } ;
typedef int HashTable ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (scalar_t__,int ,char**) ;
 int FUNC_1 (int,char**) ;
 int VAR_2 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (void*,TYPE_1__*,char**) ;
 void* FUNC_5 (char**) ;
 int FUNC_6 (void*,int,int *,int ,int ) ;

__attribute__((used)) static void FUNC_7(sdlSoapBindingFunctionBodyPtr VAR_5, encodePtr *VAR_6, sdlTypePtr *VAR_7, char **VAR_8)
{
 int VAR_9, VAR_10, VAR_11;

 FUNC_0(VAR_5->use, VAR_3, VAR_8);
 if (VAR_5->use == VAR_0) {
  FUNC_0(VAR_5->encodingStyle, VAR_4, VAR_8);
 } else {
  VAR_5->encodingStyle = VAR_1;
 }
 VAR_5->ns = FUNC_5(VAR_8);
 FUNC_1(VAR_9, VAR_8);
 if (VAR_9 > 0) {
  VAR_5->headers = FUNC_2(sizeof(HashTable));
  FUNC_6(VAR_5->headers, VAR_9, ((void*)0), VAR_2, 0);
  while (VAR_9 > 0) {
   sdlSoapBindingFunctionHeaderPtr VAR_12 = FUNC_2(sizeof(sdlSoapBindingFunctionHeader));
   FUNC_3(VAR_12, 0, sizeof(sdlSoapBindingFunctionHeader));
   FUNC_4(VAR_5->headers, VAR_12, VAR_8);
   FUNC_0(VAR_12->use, VAR_3, VAR_8);
   if (VAR_12->use == VAR_0) {
    FUNC_0(VAR_12->encodingStyle, VAR_4, VAR_8);
   } else {
    VAR_12->encodingStyle = VAR_1;
   }
   VAR_12->name = FUNC_5(VAR_8);
   VAR_12->ns = FUNC_5(VAR_8);
   FUNC_1(VAR_11, VAR_8);
   VAR_12->encode = VAR_6[VAR_11];
   FUNC_1(VAR_11, VAR_8);
   VAR_12->element = VAR_7[VAR_11];
   --VAR_9;
   FUNC_1(VAR_10, VAR_8);
   if (VAR_10 > 0) {
    VAR_12->headerfaults = FUNC_2(sizeof(HashTable));
    FUNC_6(VAR_12->headerfaults, VAR_9, ((void*)0), VAR_2, 0);
    while (VAR_10 > 0) {
     sdlSoapBindingFunctionHeaderPtr VAR_13 = FUNC_2(sizeof(sdlSoapBindingFunctionHeader));
     FUNC_3(VAR_13, 0, sizeof(sdlSoapBindingFunctionHeader));
     FUNC_4(VAR_12->headerfaults, VAR_13, VAR_8);
     FUNC_0(VAR_13->use, VAR_3, VAR_8);
     if (VAR_13->use == VAR_0) {
      FUNC_0(VAR_13->encodingStyle, VAR_4, VAR_8);
     } else {
      VAR_13->encodingStyle = VAR_1;
     }
     VAR_13->name = FUNC_5(VAR_8);
     VAR_13->ns = FUNC_5(VAR_8);
     FUNC_1(VAR_11, VAR_8);
     VAR_13->encode = VAR_6[VAR_11];
     FUNC_1(VAR_11, VAR_8);
     VAR_13->element = VAR_7[VAR_11];
     --VAR_10;
    }
   }
  }
 }
}
