
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HashTable ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;
 void* FUNC_2 (int *,char*,int ) ;

__attribute__((used)) static void* FUNC_3(HashTable *VAR_0, char *VAR_1)
{
 void *VAR_2;

 if ((VAR_2 = FUNC_2(VAR_0, VAR_1, FUNC_0(VAR_1))) != ((void*)0)) {
  return VAR_2;
 } else {
  VAR_1 = FUNC_1(VAR_1, ':');
  if (VAR_1) {
   if ((VAR_2 = FUNC_2(VAR_0, VAR_1, FUNC_0(VAR_1))) != ((void*)0)) {
    return VAR_2;
   }
  }
 }
 return ((void*)0);
}
