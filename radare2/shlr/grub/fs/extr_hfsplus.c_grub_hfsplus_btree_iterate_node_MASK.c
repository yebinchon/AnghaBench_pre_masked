
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_hfsplus_btree {int nodesize; int file; } ;
struct grub_hfsplus_btnode {int next; int count; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (struct grub_hfsplus_btree*,struct grub_hfsplus_btnode*,int) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int ,int,int,char*) ;

__attribute__((used)) static int
FUNC_4 (struct grub_hfsplus_btree *VAR_0,
     struct grub_hfsplus_btnode *VAR_1,
     int VAR_2,
     int (*VAR_3) (void *VAR_4, void *VAR_5),
     void *VAR_6)
{
  int VAR_7;

  if (VAR_3)
  for (;;)
    {
      char *VAR_8 = (char *) VAR_1;

      if (!VAR_1) {
        return 0;
      }

      for (VAR_7 = VAR_2; VAR_7 < FUNC_0 (VAR_1->count); VAR_7++)
 {
   if (VAR_3 (FUNC_2 (VAR_0, VAR_1, VAR_7), VAR_6))
     return 1;
 }

      if (! VAR_1->next)
 break;

      if (FUNC_3 (&VAR_0->file, 0, 0, 0,
      (FUNC_1 (VAR_1->next)
       * VAR_0->nodesize),
      VAR_0->nodesize, VAR_8) <= 0)
 return 1;


      VAR_2 = 0;
    }

  return 0;
}
