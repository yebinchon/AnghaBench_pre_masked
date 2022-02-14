
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ECPGtype_information_cache {int oid; int isarray; struct ECPGtype_information_cache* next; } ;
typedef enum ARRAY_TYPE { ____Placeholder_ARRAY_TYPE } ARRAY_TYPE ;


 scalar_t__ FUNC_0 (int,int) ;

__attribute__((used)) static bool
FUNC_1(struct ECPGtype_information_cache **VAR_0, int VAR_1, enum ARRAY_TYPE VAR_2, int VAR_3)
{
 struct ECPGtype_information_cache *VAR_4
 = (struct ECPGtype_information_cache *) FUNC_0(sizeof(struct ECPGtype_information_cache), VAR_3);

 if (VAR_4 == ((void*)0))
  return 0;

 VAR_4->oid = VAR_1;
 VAR_4->isarray = VAR_2;
 VAR_4->next = *VAR_0;
 *VAR_0 = VAR_4;
 return 1;
}
