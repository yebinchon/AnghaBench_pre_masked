
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int size; int filled; TYPE_1__* table; } ;
typedef TYPE_2__ htab_table ;
struct TYPE_4__ {int used; char* str; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char*,scalar_t__) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;

uint32_t FUNC_6(char* VAR_0, htab_table* VAR_1)
{
 uint32_t VAR_2, VAR_3;
 uint32_t VAR_4;
 uint32_t VAR_5 = 0;
 int VAR_6;
 char* VAR_7 = VAR_0;

 if ((VAR_1 == ((void*)0)) || (VAR_1->table == ((void*)0)) || (VAR_0 == ((void*)0))) {
  return 0;
 }




 while ((VAR_6 = *VAR_7++) != 0)
  VAR_5 = VAR_6 + (VAR_5 << 6) + (VAR_5 << 16) - VAR_5;
 if (VAR_5 == 0)
  ++VAR_5;


 VAR_2 = VAR_5 % VAR_1->size;
 if (VAR_2 == 0)
  ++VAR_2;


 VAR_4 = VAR_2;

 if (VAR_1->table[VAR_4].used) {
  if ( (VAR_1->table[VAR_4].used == VAR_2)
    && (FUNC_3(VAR_0, VAR_1->table[VAR_4].str) == 0) ) {

   return VAR_4;
  }



  VAR_3 = 1 + VAR_2 % (VAR_1->size - 2);

  do {

   if (VAR_4 <= VAR_3) {
    VAR_4 = ((uint32_t)VAR_1->size) + VAR_4 - VAR_3;
   } else {
    VAR_4 -= VAR_3;
   }


   if (VAR_4 == VAR_2) {
    break;
   }


   if ( (VAR_1->table[VAR_4].used == VAR_2)
     && (FUNC_3(VAR_0, VAR_1->table[VAR_4].str) == 0) ) {
    return VAR_4;
   }
  }
  while (VAR_1->table[VAR_4].used);
 }




 if (VAR_1->filled >= VAR_1->size) {
  FUNC_5("hash table is full (%d entries)", VAR_1->size);
  return 0;
 }

 FUNC_2(VAR_1->table[VAR_4].str);
 VAR_1->table[VAR_4].used = VAR_2;
 VAR_1->table[VAR_4].str = (char*) FUNC_0(FUNC_4(VAR_0)+1);
 if (VAR_1->table[VAR_4].str == ((void*)0)) {
  FUNC_5("could not duplicate string for hash table\n");
  return 0;
 }
 FUNC_1(VAR_1->table[VAR_4].str, VAR_0, FUNC_4(VAR_0)+1);
 ++VAR_1->filled;

 return VAR_4;
}
