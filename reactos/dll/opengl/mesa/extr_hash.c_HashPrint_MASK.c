
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HashTable {struct HashEntry** Table; } ;
struct HashEntry {int Key; struct HashEntry* Next; int Data; } ;
typedef size_t GLuint ;


 size_t VAR_0 ;
 int FUNC_0 (struct HashTable const*) ;
 int FUNC_1 (char*,int,int ) ;

void FUNC_2(const struct HashTable *VAR_1)
{
   GLuint VAR_2;
   FUNC_0(VAR_1);
   for (VAR_2=0;VAR_2<VAR_0;VAR_2++) {
      struct HashEntry *VAR_3 = VAR_1->Table[VAR_2];
      while (VAR_3) {
  FUNC_1("%u %p\n", VAR_3->Key, VAR_3->Data);
  VAR_3 = VAR_3->Next;
      }
   }
}
