
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ encodePtr ;
typedef int HashTable ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__*) ;
 scalar_t__ FUNC_1 (int *,char*,int) ;

__attribute__((used)) static void FUNC_2(encodePtr *VAR_2, HashTable *VAR_3, HashTable *VAR_4)
{
 encodePtr VAR_5;


 if ((*VAR_2) >= VAR_0 && (*VAR_2) < VAR_0 + VAR_1) {
  return;
 }

 if ((VAR_5 = FUNC_1(VAR_3, (char *)VAR_2, sizeof(encodePtr))) != ((void*)0)) {
  *VAR_2 = VAR_5;
 } else {
  FUNC_0(VAR_4, VAR_2);
 }
}
