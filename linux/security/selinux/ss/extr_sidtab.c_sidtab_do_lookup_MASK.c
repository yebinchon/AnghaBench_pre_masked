
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union sidtab_entry_inner {TYPE_3__* ptr_leaf; TYPE_1__* ptr_inner; } ;
typedef int u32 ;
struct sidtab {union sidtab_entry_inner* roots; } ;
struct context {int dummy; } ;
struct TYPE_6__ {TYPE_2__* entries; } ;
struct TYPE_5__ {struct context context; } ;
struct TYPE_4__ {union sidtab_entry_inner* entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct sidtab*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static struct context *FUNC_3(struct sidtab *VAR_4, u32 VAR_5, int VAR_6)
{
 union sidtab_entry_inner *VAR_7;
 u32 VAR_8, VAR_9, VAR_10 = VAR_5 / VAR_2;


 VAR_8 = FUNC_2(VAR_5 + 1);
 VAR_9 = VAR_8 * VAR_1;


 if (VAR_6 && FUNC_1(VAR_4, VAR_8) != 0)
  return ((void*)0);


 VAR_7 = &VAR_4->roots[VAR_8];
 while (VAR_8 != 0) {
  VAR_9 -= VAR_1;
  --VAR_8;

  VAR_7 = &VAR_7->ptr_inner->entries[VAR_10 >> VAR_9];
  VAR_10 &= ((u32)1 << VAR_9) - 1;

  if (!VAR_7->ptr_inner) {
   if (VAR_6)
    VAR_7->ptr_inner = FUNC_0(VAR_3,
          VAR_0);
   if (!VAR_7->ptr_inner)
    return ((void*)0);
  }
 }
 if (!VAR_7->ptr_leaf) {
  if (VAR_6)
   VAR_7->ptr_leaf = FUNC_0(VAR_3,
        VAR_0);
  if (!VAR_7->ptr_leaf)
   return ((void*)0);
 }
 return &VAR_7->ptr_leaf->entries[VAR_5 % VAR_2].context;
}
