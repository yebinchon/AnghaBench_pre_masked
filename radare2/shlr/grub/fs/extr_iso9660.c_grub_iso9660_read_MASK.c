
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct grub_iso9660_data {int first_sector; TYPE_3__* disk; } ;
typedef int grub_ssize_t ;
typedef int grub_size_t ;
typedef TYPE_1__* grub_file_t ;
struct TYPE_5__ {int * read_hook; int closure; } ;
struct TYPE_4__ {int flags; int offset; int closure; int * read_hook; scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int,int ,int,char*,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static grub_ssize_t
FUNC_1 (grub_file_t VAR_2, char *VAR_3, grub_size_t VAR_4)
{
  struct grub_iso9660_data *VAR_5 =
    (struct grub_iso9660_data *) VAR_2->data;


  VAR_5->disk->read_hook = VAR_2->read_hook;
  VAR_5->disk->closure = VAR_2->closure;
  FUNC_0 (VAR_5->disk,
       VAR_5->first_sector << VAR_0,
       VAR_2->offset,
       VAR_4, VAR_3, VAR_2->flags);
  VAR_5->disk->read_hook = ((void*)0);

  if (VAR_1)
    return -1;

  return VAR_4;
}
