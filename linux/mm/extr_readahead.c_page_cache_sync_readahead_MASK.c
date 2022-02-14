
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_ra_state {int ra_pages; } ;
struct file {int f_mode; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct address_space*,struct file*,int ,unsigned long) ;
 int FUNC_2 (struct address_space*,struct file_ra_state*,struct file*,int,int ,unsigned long) ;

void FUNC_3(struct address_space *VAR_1,
          struct file_ra_state *VAR_2, struct file *VAR_3,
          pgoff_t VAR_4, unsigned long VAR_5)
{

 if (!VAR_2->ra_pages)
  return;

 if (FUNC_0())
  return;


 if (VAR_3 && (VAR_3->f_mode & VAR_0)) {
  FUNC_1(VAR_1, VAR_3, VAR_4, VAR_5);
  return;
 }


 FUNC_2(VAR_1, VAR_2, VAR_3, 0, VAR_4, VAR_5);
}
