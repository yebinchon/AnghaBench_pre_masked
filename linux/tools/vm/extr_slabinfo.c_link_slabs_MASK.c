
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabinfo {int refs; int name; } ;
struct aliasinfo {int ref; struct slabinfo* slab; } ;


 int VAR_0 ;
 struct aliasinfo* VAR_1 ;
 int FUNC_0 (char*,int ) ;
 struct slabinfo* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct aliasinfo *VAR_4;
 struct slabinfo *VAR_5;

 for (VAR_4 = VAR_1; VAR_4 < VAR_1 + VAR_0; VAR_4++) {

  for (VAR_5 = VAR_2; VAR_5 < VAR_2 + VAR_3; VAR_5++)
   if (FUNC_1(VAR_4->ref, VAR_5->name) == 0) {
    VAR_4->slab = VAR_5;
    VAR_5->refs++;
    break;
   }
  if (VAR_5 == VAR_2 + VAR_3)
   FUNC_0("Unresolved alias %s\n", VAR_4->ref);
 }
}
