
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct directory_entry {struct directory_entry* next; int filedir; struct directory_entry* parent_rec; } ;
struct dir_extent_link {scalar_t__ extent; struct directory_entry* de; struct dir_extent_link* next; } ;
struct TYPE_2__ {struct directory_entry* contents; } ;


 struct dir_extent_link* VAR_0 ;
 struct dir_extent_link* VAR_1 ;
 TYPE_1__* VAR_2 ;

void
FUNC_0()
{
 struct dir_extent_link *VAR_3 = VAR_1;


 for (; VAR_3; VAR_3 = VAR_3->next) {
  struct dir_extent_link *VAR_4 = VAR_0;

  for (; VAR_4; VAR_4 = VAR_4->next) {

   if (VAR_4->extent == VAR_3->extent) {

    VAR_3->de->parent_rec = VAR_4->de;
    VAR_3->de->filedir = VAR_4->de->filedir;




    if (VAR_2 != ((void*)0)) {
     struct directory_entry *VAR_5 = VAR_2->contents;

     for (; VAR_5; VAR_5 = VAR_5->next) {

      if (VAR_3->de == VAR_5) {

       VAR_3->de = ((void*)0);
      }
     }
    }
    break;
   }
  }
 }
}
