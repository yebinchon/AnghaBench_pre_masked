
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ebt_standard_target {int verdict; } ;
struct TYPE_3__ {int name; } ;
struct ebt_entry_target {TYPE_1__ u; } ;
struct ebt_entry {scalar_t__ target_offset; scalar_t__ next_offset; } ;
struct ebt_entries {int nentries; scalar_t__ data; } ;
struct TYPE_4__ {int n; struct ebt_entry* e; struct ebt_entries* chaininfo; } ;
struct ebt_cl_stack {int from; int hookmask; TYPE_2__ cs; } ;


 int VAR_0 ;
 struct ebt_entry_target* FUNC_0 (struct ebt_entry const*) ;
 void* FUNC_1 (struct ebt_entry const*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(const struct ebt_entries *VAR_1, struct ebt_cl_stack *VAR_2,
       unsigned int VAR_3, unsigned int VAR_4, char *VAR_5)
{
 int VAR_6, VAR_7 = -1, VAR_8 = 0, VAR_9 = VAR_1->nentries, VAR_10;
 const struct ebt_entry *VAR_11 = (struct ebt_entry *)VAR_1->data;
 const struct ebt_entry_target *VAR_12;

 while (VAR_8 < VAR_9 || VAR_7 != -1) {

  if (VAR_8 == VAR_9) {

   VAR_11 = VAR_2[VAR_7].cs.e;
   if (VAR_2[VAR_7].from != -1)
    VAR_9 =
    VAR_2[VAR_2[VAR_7].from].cs.chaininfo->nentries;
   else
    VAR_9 = VAR_1->nentries;
   VAR_8 = VAR_2[VAR_7].cs.n;

   VAR_2[VAR_7].cs.n = 0;
   VAR_7 = VAR_2[VAR_7].from;
   if (VAR_8 == VAR_9)
    continue;
  }
  VAR_12 = FUNC_0(VAR_11);
  if (FUNC_2(VAR_12->u.name, VAR_0))
   goto letscontinue;
  if (VAR_11->target_offset + sizeof(struct ebt_standard_target) >
     VAR_11->next_offset)
   return -1;

  VAR_10 = ((struct ebt_standard_target *)VAR_12)->verdict;
  if (VAR_10 >= 0) {
   struct ebt_entries *VAR_13 =
      (struct ebt_entries *)(VAR_5 + VAR_10);
   for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
    if (VAR_13 == VAR_2[VAR_6].cs.chaininfo)
     break;

   if (VAR_6 == VAR_3)
    return -1;

   if (VAR_2[VAR_6].cs.n)
    return -1;

   if (VAR_2[VAR_6].hookmask & (1 << VAR_4))
    goto letscontinue;

   VAR_2[VAR_6].cs.n = VAR_8 + 1;
   VAR_8 = 0;
   VAR_2[VAR_6].cs.e = FUNC_1(VAR_11);
   VAR_11 = (struct ebt_entry *)(VAR_13->data);
   VAR_9 = VAR_13->nentries;
   VAR_2[VAR_6].from = VAR_7;
   VAR_7 = VAR_6;

   VAR_2[VAR_6].hookmask |= (1 << VAR_4);
   continue;
  }
letscontinue:
  VAR_11 = FUNC_1(VAR_11);
  VAR_8++;
 }
 return 0;
}
