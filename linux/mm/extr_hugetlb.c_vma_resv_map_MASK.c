
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; TYPE_1__* vm_file; } ;
struct resv_map {int dummy; } ;
struct inode {int dummy; } ;
struct address_space {struct inode* host; } ;
struct TYPE_2__ {struct address_space* f_mapping; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct vm_area_struct*) ;
 int VAR_1 ;
 int FUNC_1 (struct vm_area_struct*) ;
 struct resv_map* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct vm_area_struct*) ;

__attribute__((used)) static struct resv_map *FUNC_4(struct vm_area_struct *VAR_2)
{
 FUNC_0(!FUNC_3(VAR_2), VAR_2);
 if (VAR_2->vm_flags & VAR_1) {
  struct address_space *VAR_3 = VAR_2->vm_file->f_mapping;
  struct inode *VAR_4 = VAR_3->host;

  return FUNC_2(VAR_4);

 } else {
  return (struct resv_map *)(FUNC_1(VAR_2) &
       ~VAR_0);
 }
}
