
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sdlTypePtr ;
typedef TYPE_1__* sdlParamPtr ;
typedef int sdlParam ;
typedef int encodePtr ;
struct TYPE_3__ {int order; int element; int encode; int paramName; } ;
typedef int HashTable ;


 int FUNC_0 (int,char**) ;
 int VAR_0 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_1__*,char**) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (int *,int,int *,int ,int ) ;

__attribute__((used)) static HashTable* FUNC_5(encodePtr *VAR_1, sdlTypePtr *VAR_2, char **VAR_3)
{
 int VAR_4, VAR_5;
 HashTable *VAR_6;

 FUNC_0(VAR_4, VAR_3);
 if (VAR_4 == 0) {return ((void*)0);}
 VAR_6 = FUNC_1(sizeof(HashTable));
 FUNC_4(VAR_6, VAR_4, ((void*)0), VAR_0, 0);
 while (VAR_4 > 0) {
  sdlParamPtr VAR_7 = FUNC_1(sizeof(sdlParam));
  FUNC_2(VAR_6, VAR_7, VAR_3);
  VAR_7->paramName = FUNC_3(VAR_3);
  FUNC_0(VAR_7->order, VAR_3);
  FUNC_0(VAR_5, VAR_3);
  VAR_7->encode = VAR_1[VAR_5];
  FUNC_0(VAR_5, VAR_3);
  VAR_7->element = VAR_2[VAR_5];
  --VAR_4;
 }
 return VAR_6;
}
