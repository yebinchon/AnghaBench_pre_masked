
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct special_entry {int size; scalar_t__ sec; } ;
struct special_alt {int list; } ;
struct section {int len; int name; } ;
struct list_head {int dummy; } ;
struct elf {int dummy; } ;


 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (char*,...) ;
 struct special_entry* VAR_0 ;
 struct section* FUNC_2 (struct elf*,scalar_t__) ;
 int FUNC_3 (struct elf*,struct special_entry*,struct section*,int,struct special_alt*) ;
 int FUNC_4 (int *,struct list_head*) ;
 struct special_alt* FUNC_5 (int) ;
 int FUNC_6 (struct special_alt*,int ,int) ;

int FUNC_7(struct elf *VAR_1, struct list_head *VAR_2)
{
 struct special_entry *VAR_3;
 struct section *VAR_4;
 unsigned int VAR_5;
 struct special_alt *VAR_6;
 int VAR_7, VAR_8;

 FUNC_0(VAR_2);

 for (VAR_3 = VAR_0; VAR_3->sec; VAR_3++) {
  VAR_4 = FUNC_2(VAR_1, VAR_3->sec);
  if (!VAR_4)
   continue;

  if (VAR_4->len % VAR_3->size != 0) {
   FUNC_1("%s size not a multiple of %d",
        VAR_4->name, VAR_3->size);
   return -1;
  }

  VAR_5 = VAR_4->len / VAR_3->size;

  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
   VAR_6 = FUNC_5(sizeof(*VAR_6));
   if (!VAR_6) {
    FUNC_1("malloc failed");
    return -1;
   }
   FUNC_6(VAR_6, 0, sizeof(*VAR_6));

   VAR_8 = FUNC_3(VAR_1, VAR_3, VAR_4, VAR_7, VAR_6);
   if (VAR_8)
    return VAR_8;

   FUNC_4(&VAR_6->list, VAR_2);
  }
 }

 return 0;
}
