
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HashTable {struct HashTable* Next; struct HashTable** Table; } ;
struct HashEntry {struct HashEntry* Next; struct HashEntry** Table; } ;
typedef size_t GLuint ;


 size_t VAR_0 ;
 int FUNC_0 (struct HashTable*) ;
 int FUNC_1 (struct HashTable*) ;

void FUNC_2(struct HashTable *VAR_1)
{
   GLuint VAR_2;
   FUNC_0(VAR_1);
   for (VAR_2=0;VAR_2<VAR_0;VAR_2++) {
      struct HashEntry *VAR_3 = VAR_1->Table[VAR_2];
      while (VAR_3) {
  struct HashEntry *VAR_4 = VAR_3->Next;
  FUNC_1(VAR_3);
  VAR_3 = VAR_4;
      }
   }
   FUNC_1(VAR_1);
}
