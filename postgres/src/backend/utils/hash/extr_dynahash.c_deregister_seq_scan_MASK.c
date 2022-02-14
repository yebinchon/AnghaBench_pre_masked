
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tabname; } ;
typedef TYPE_1__ HTAB ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 TYPE_1__** VAR_3 ;

__attribute__((used)) static void
FUNC_1(HTAB *VAR_4)
{
 int VAR_5;


 for (VAR_5 = VAR_1 - 1; VAR_5 >= 0; VAR_5--)
 {
  if (VAR_3[VAR_5] == VAR_4)
  {
   VAR_3[VAR_5] = VAR_3[VAR_1 - 1];
   VAR_2[VAR_5] = VAR_2[VAR_1 - 1];
   VAR_1--;
   return;
  }
 }
 FUNC_0(VAR_0, "no hash_seq_search scan for hash table \"%s\"",
   VAR_4->tabname);
}
