
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ grub_off_t ;
typedef TYPE_1__* grub_file_t ;
struct TYPE_3__ {scalar_t__ size; scalar_t__ offset; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

grub_off_t
FUNC_1 (grub_file_t VAR_1, grub_off_t VAR_2)
{
  grub_off_t VAR_3;

  if (VAR_2 > VAR_1->size)
    {
      FUNC_0 (VAR_0,
    "attempt to seek outside of the file");
      return -1;
    }

  VAR_3 = VAR_1->offset;
  VAR_1->offset = VAR_2;
  return VAR_3;
}
