
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct whitelist_entry {int rhs; int lhs; scalar_t__ pathname; } ;
typedef int gimple ;
struct TYPE_3__ {int file; } ;
typedef TYPE_1__ expanded_location ;
typedef int const_tree ;


 TYPE_1__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 struct whitelist_entry* VAR_0 ;

__attribute__((used)) static bool FUNC_4(gimple VAR_1, const_tree VAR_2, const_tree VAR_3)
{
 const struct whitelist_entry *VAR_4;
 expanded_location VAR_5 = FUNC_0(FUNC_1(VAR_1));

 for (VAR_4 = VAR_0; VAR_4->pathname; VAR_4++) {
  if (!FUNC_2(VAR_5.file, VAR_4->pathname))
   continue;

  if (FUNC_3(VAR_1, VAR_2, VAR_4->lhs) && FUNC_3(VAR_1, VAR_3, VAR_4->rhs))
   return 1;
 }

 return 0;
}
