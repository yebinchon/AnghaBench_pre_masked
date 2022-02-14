
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ grub_ssize_t ;
typedef int grub_size_t ;
typedef int grub_file_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int ,char*,int) ;

grub_ssize_t
FUNC_4 (grub_file_t VAR_1, void *VAR_2, grub_size_t VAR_3, int VAR_4)
{
  grub_ssize_t VAR_5;
  grub_size_t VAR_6;
  int VAR_7;
  char *VAR_8 = VAR_2;

  if ((VAR_3 < VAR_0) || (VAR_4 == 0))
    return FUNC_3 (VAR_1, VAR_8, VAR_3);

  VAR_5 = 0;
  if (&FUNC_1)
    FUNC_1 ();

  VAR_6 = ((VAR_3 / VAR_4) + 511) & (~511);
  VAR_7 = 0;
  while (VAR_3 > 0)
    {
      grub_size_t VAR_9;
      grub_ssize_t VAR_10;

      FUNC_2 (VAR_7, VAR_4);

      VAR_9 = (VAR_3 > VAR_6) ? VAR_6 : VAR_3;
      VAR_10 = FUNC_3 (VAR_1, VAR_8, VAR_9);
      if (VAR_10 <= 0)
 {
   if (VAR_5 == 0)
     VAR_5 = -1;
   break;
 }

      VAR_8 += VAR_10;
      VAR_3 -= VAR_10;
      VAR_5 += VAR_10;
      VAR_7++;
    }

  if (&FUNC_0)
    FUNC_0 ();
  return VAR_5;
}
