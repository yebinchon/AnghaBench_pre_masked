
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_minix_data {scalar_t__ linknest; } ;
typedef scalar_t__ grub_err_t ;


 int VAR_0 ;
 size_t FUNC_0 (struct grub_minix_data*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,char*,...) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (struct grub_minix_data*,char*) ;
 scalar_t__ FUNC_4 (struct grub_minix_data*,int ,int ,int ,size_t,char*) ;
 scalar_t__ FUNC_5 (struct grub_minix_data*,int) ;

__attribute__((used)) static grub_err_t
FUNC_6 (struct grub_minix_data *VAR_4, int VAR_5)
{

  char VAR_6[FUNC_0 (VAR_4) + 1];



  if (++VAR_4->linknest > VAR_1)
    return FUNC_1 (VAR_0, "too deep nesting of symlinks");

  if (FUNC_4 (VAR_4, 0, 0, 0,
       FUNC_0 (VAR_4), VAR_6) < 0)
    return VAR_3;

  VAR_6[FUNC_0 (VAR_4)] = '\0';


  if (VAR_6[0] == '/')
    VAR_5 = VAR_2;


  if (FUNC_5 (VAR_4, VAR_5))
    return VAR_3;

  FUNC_3 (VAR_4, VAR_6);
  if (VAR_3)
    FUNC_1 (VAR_3, "cannot follow symlink `%s'", VAR_6);

  return VAR_3;
}
