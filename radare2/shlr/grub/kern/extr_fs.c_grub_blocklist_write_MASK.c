
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int grub_ssize_t ;
typedef int grub_size_t ;
typedef TYPE_1__* grub_file_t ;
struct TYPE_4__ {int * fs; } ;


 int VAR_0 ;
 int FUNC_0 (int,TYPE_1__*,char*,int ) ;

grub_ssize_t
FUNC_1 (grub_file_t VAR_1, const char *VAR_2, grub_size_t VAR_3)
{
  return (VAR_1->fs != &VAR_0) ? -1 :
    FUNC_0 (1, VAR_1, (char *) VAR_2, VAR_3);
}
