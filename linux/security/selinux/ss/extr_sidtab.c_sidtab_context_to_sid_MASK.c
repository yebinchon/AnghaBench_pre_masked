
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct sidtab_isid_entry {int context; scalar_t__ set; } ;
struct sidtab {struct sidtab_isid_entry* isids; } ;
struct context {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct context*,int *) ;
 int FUNC_1 (struct sidtab*,struct context*,size_t*) ;

int FUNC_2(struct sidtab *VAR_1, struct context *VAR_2, u32 *VAR_3)
{
 int VAR_4;
 u32 VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  struct sidtab_isid_entry *VAR_6 = &VAR_1->isids[VAR_5];

  if (VAR_6->set && FUNC_0(VAR_2, &VAR_6->context)) {
   *VAR_3 = VAR_5 + 1;
   return 0;
  }
 }

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;
 *VAR_3 += VAR_0 + 1;
 return 0;
}
