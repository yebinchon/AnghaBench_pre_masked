
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct sidtab {TYPE_2__* roots; } ;
struct TYPE_4__ {TYPE_1__* ptr_inner; void* ptr_leaf; } ;
struct TYPE_3__ {TYPE_2__* entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct sidtab *VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 if (!VAR_3->roots[0].ptr_leaf) {
  VAR_3->roots[0].ptr_leaf = FUNC_0(VAR_2,
            VAR_1);
  if (!VAR_3->roots[0].ptr_leaf)
   return -VAR_0;
 }
 for (VAR_5 = 1; VAR_5 <= VAR_4; ++VAR_5)
  if (!VAR_3->roots[VAR_5].ptr_inner) {
   VAR_3->roots[VAR_5].ptr_inner = FUNC_0(VAR_2,
       VAR_1);
   if (!VAR_3->roots[VAR_5].ptr_inner)
    return -VAR_0;
   VAR_3->roots[VAR_5].ptr_inner->entries[0] = VAR_3->roots[VAR_5 - 1];
  }
 return 0;
}
