
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_minix_sblock {int dummy; } ;
struct grub_minix_data {struct grub_minix_sblock sblock; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct grub_minix_data*) ;
 int FUNC_1 (struct grub_minix_data*) ;
 int FUNC_2 (struct grub_minix_data*,unsigned int) ;
 int FUNC_3 (struct grub_minix_data*) ;
 unsigned int VAR_1 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int,unsigned int,struct grub_minix_data*) ;

__attribute__((used)) static int
FUNC_6 (struct grub_minix_data *VAR_2, unsigned int VAR_3)
{
  struct grub_minix_sblock *VAR_4 = &VAR_2->sblock;
  int VAR_5;


  if (VAR_3 < 7)
    return FUNC_2 (VAR_2, VAR_3);


  VAR_3 -= 7;
  if (VAR_3 < VAR_1 / FUNC_0 (VAR_2))
    {
      VAR_5 = FUNC_5 (FUNC_3 (VAR_2), VAR_3, VAR_2);
      return VAR_5;
    }


  VAR_3 -= VAR_1 / FUNC_0 (VAR_2);
  if (VAR_3 < (VAR_1 / FUNC_0 (VAR_2))
      * (VAR_1 / FUNC_0 (VAR_2)))
    {
      VAR_5 = FUNC_5 (FUNC_1 (VAR_2),
         VAR_3 / VAR_1, VAR_2);

      VAR_5 = FUNC_5 (VAR_5, VAR_3 % VAR_1, VAR_2);

      return VAR_5;
    }


  FUNC_4 (VAR_0, "file bigger than maximum size");

  return 0;
}
