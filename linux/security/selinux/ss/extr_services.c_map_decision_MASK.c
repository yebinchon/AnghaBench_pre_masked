
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t u16 ;
struct selinux_mapping {unsigned int num_perms; int* perms; } ;
struct selinux_map {size_t size; struct selinux_mapping* mapping; } ;
struct av_decision {int allowed; int auditallow; int auditdeny; } ;



__attribute__((used)) static void FUNC_0(struct selinux_map *VAR_0,
    u16 VAR_1, struct av_decision *VAR_2,
    int VAR_3)
{
 if (VAR_1 < VAR_0->size) {
  struct selinux_mapping *VAR_4 = &VAR_0->mapping[VAR_1];
  unsigned int VAR_5, VAR_6 = VAR_4->num_perms;
  u32 VAR_7;

  for (VAR_5 = 0, VAR_7 = 0; VAR_5 < VAR_6; VAR_5++) {
   if (VAR_2->allowed & VAR_4->perms[VAR_5])
    VAR_7 |= 1<<VAR_5;
   if (VAR_3 && !VAR_4->perms[VAR_5])
    VAR_7 |= 1<<VAR_5;
  }
  VAR_2->allowed = VAR_7;

  for (VAR_5 = 0, VAR_7 = 0; VAR_5 < VAR_6; VAR_5++)
   if (VAR_2->auditallow & VAR_4->perms[VAR_5])
    VAR_7 |= 1<<VAR_5;
  VAR_2->auditallow = VAR_7;

  for (VAR_5 = 0, VAR_7 = 0; VAR_5 < VAR_6; VAR_5++) {
   if (VAR_2->auditdeny & VAR_4->perms[VAR_5])
    VAR_7 |= 1<<VAR_5;
   if (!VAR_3 && !VAR_4->perms[VAR_5])
    VAR_7 |= 1<<VAR_5;
  }





  for (; VAR_5 < (sizeof(u32)*8); VAR_5++)
   VAR_7 |= 1<<VAR_5;
  VAR_2->auditdeny = VAR_7;
 }
}
