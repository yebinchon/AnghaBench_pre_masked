
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_hfsplus_catkey_internal {int parent; int name; } ;
struct grub_hfsplus_key_internal {struct grub_hfsplus_catkey_internal catkey; } ;
struct grub_hfsplus_catkey {int namelen; int* name; int parent; } ;
struct grub_hfsplus_key {struct grub_hfsplus_catkey catkey; } ;
typedef int grub_uint8_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (int *,int*,int) ;

__attribute__((used)) static int
FUNC_7 (struct grub_hfsplus_key *VAR_0,
    struct grub_hfsplus_key_internal *VAR_1)
{
  struct grub_hfsplus_catkey *VAR_2 = &VAR_0->catkey;
  struct grub_hfsplus_catkey_internal *VAR_3 = &VAR_1->catkey;
  char *VAR_4;
  int VAR_5;
  int VAR_6;

  VAR_6 = FUNC_1 (VAR_2->parent) - VAR_3->parent;
  if (VAR_6)
    return VAR_6;


  for (VAR_5 = 0; VAR_5 < FUNC_0 (VAR_2->namelen); VAR_5++)
    VAR_2->name[VAR_5] = FUNC_0 (VAR_2->name[VAR_5]);

  VAR_4 = FUNC_4 (FUNC_0 (VAR_2->namelen) + 1);

  if (! FUNC_6 ((grub_uint8_t *) VAR_4, VAR_2->name,
       FUNC_0 (VAR_2->namelen)))
    return -1;


  VAR_6 = FUNC_5 (VAR_4, VAR_3->name,
         FUNC_0 (VAR_2->namelen));

  FUNC_3 (VAR_4);



  for (VAR_5 = 0; VAR_5 < FUNC_0 (VAR_2->namelen); VAR_5++)
    VAR_2->name[VAR_5] = FUNC_2 (VAR_2->name[VAR_5]);
  return VAR_6;
}
