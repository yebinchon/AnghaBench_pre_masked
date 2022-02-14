
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct HashTable {TYPE_1__** Table; } ;
struct TYPE_2__ {size_t Key; } ;
typedef size_t GLuint ;


 size_t VAR_0 ;
 int FUNC_0 (struct HashTable const*) ;

GLuint FUNC_1(const struct HashTable *VAR_1)
{
   GLuint VAR_2;
   FUNC_0(VAR_1);
   for (VAR_2=0; VAR_2 < VAR_0; VAR_2++) {
      if (VAR_1->Table[VAR_2])
         return VAR_1->Table[VAR_2]->Key;
   }
   return 0;
}
