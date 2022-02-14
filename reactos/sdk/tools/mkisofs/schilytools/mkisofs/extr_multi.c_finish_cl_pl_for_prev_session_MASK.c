
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct directory_entry {int de_flags; int total_rr_attr_size; int rr_attributes; struct directory_entry* parent_rec; TYPE_2__* filedir; } ;
struct directory {int extent; TYPE_1__* contents; struct directory* next; struct directory_entry* self; } ;
struct dir_extent_link {struct dir_extent_link* next; struct directory_entry* de; } ;
struct TYPE_6__ {struct directory* subdir; } ;
struct TYPE_5__ {int extent; } ;
struct TYPE_4__ {struct directory_entry* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 struct dir_extent_link* VAR_2 ;
 int FUNC_1 (int ,int ) ;
 char* FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (struct dir_extent_link*) ;
 struct dir_extent_link* VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_4 (char*,int ) ;

void
FUNC_5()
{
 struct dir_extent_link *VAR_5 = VAR_3;


 VAR_5 = VAR_3;
 for (; VAR_5; VAR_5 = VAR_5->next) {
  if (VAR_5->de != ((void*)0)) {




   struct directory_entry *VAR_6 = VAR_5->de;
   struct directory_entry *VAR_7;
   struct directory *VAR_8 = VAR_4->subdir;


   if (VAR_6->de_flags & VAR_1) {
    continue;
   }
   while (VAR_8) {
    if (VAR_8->self == VAR_6)
     break;
    VAR_8 = VAR_8->next;
   }
   if (!VAR_8) {
    FUNC_1(VAR_0, FUNC_0("Unable to locate directory parent\n"));
   }

   if (VAR_6->filedir != ((void*)0) && VAR_6->parent_rec != ((void*)0)) {
    char *VAR_9;





    VAR_7 = VAR_8->contents->next;
    VAR_9 = FUNC_2(VAR_7->rr_attributes,
     VAR_7->total_rr_attr_size, "PL");
    if (VAR_9 != ((void*)0))
     FUNC_4(VAR_9 + 4, VAR_6->filedir->extent);


    VAR_7 = VAR_6->parent_rec;

    VAR_9 = FUNC_2(VAR_7->rr_attributes,
     VAR_7->total_rr_attr_size, "CL");
    if (VAR_9 != ((void*)0))
     FUNC_4(VAR_9 + 4, VAR_8->extent);
   }
  }
 }

 VAR_5 = VAR_3;
 while (VAR_5) {
  struct dir_extent_link *VAR_10 = VAR_5->next;

  FUNC_3(VAR_5);
  VAR_5 = VAR_10;
 }
 VAR_5 = VAR_2;
 while (VAR_5) {
  struct dir_extent_link *VAR_11 = VAR_5->next;

  FUNC_3(VAR_5);
  VAR_5 = VAR_11;
 }
}
