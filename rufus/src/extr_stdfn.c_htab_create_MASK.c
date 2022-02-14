
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int size; int * table; scalar_t__ filled; } ;
typedef TYPE_1__ htab_table ;
typedef int htab_entry ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;

BOOL FUNC_3(uint32_t VAR_2, htab_table* VAR_3)
{
 if (VAR_3 == ((void*)0)) {
  return VAR_0;
 }
 if (VAR_3->table != ((void*)0)) {
  FUNC_2("warning: htab_create() was called with a non empty table");
  return VAR_0;
 }


 VAR_2 |= 1;
 while(!FUNC_1(VAR_2))
  VAR_2 += 2;

 VAR_3->size = VAR_2;
 VAR_3->filled = 0;


 VAR_3->table = (htab_entry*)FUNC_0(VAR_3->size + 1, sizeof(htab_entry));
 if (VAR_3->table == ((void*)0)) {
  FUNC_2("could not allocate space for hash table\n");
  return VAR_0;
 }

 return VAR_1;
}
