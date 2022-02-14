
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * sdlTypePtr ;
typedef int HashTable ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,char*,int) ;

__attribute__((used)) static void FUNC_2(sdlTypePtr *VAR_0, HashTable *VAR_1, HashTable *VAR_2)
{
 sdlTypePtr VAR_3;

 if ((VAR_3 = FUNC_1(VAR_1, (char *)VAR_0, sizeof(sdlTypePtr))) != ((void*)0)) {
  *VAR_0 = VAR_3;
 } else {
  FUNC_0(VAR_2, *VAR_0);
 }
}
