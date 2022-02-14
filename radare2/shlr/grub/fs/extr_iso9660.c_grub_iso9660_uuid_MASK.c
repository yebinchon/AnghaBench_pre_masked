
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * hundredth; int * second; int * minute; int * hour; int * day; int * month; int * year; } ;
struct TYPE_6__ {TYPE_1__ modified; } ;
struct grub_iso9660_data {TYPE_2__ voldesc; } ;
typedef int grub_err_t ;
typedef int grub_disk_t ;
typedef TYPE_3__* grub_device_t ;
struct TYPE_7__ {int disk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct grub_iso9660_data*) ;
 struct grub_iso9660_data* FUNC_4 (int ) ;
 char* FUNC_5 (char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static grub_err_t
FUNC_6 (grub_device_t VAR_3, char **VAR_4)
{
  struct grub_iso9660_data *VAR_5;
  grub_disk_t VAR_6 = VAR_3->disk;

  FUNC_0 (VAR_2);

  VAR_5 = FUNC_4 (VAR_6);
  if (VAR_5)
    {
      if (! VAR_5->voldesc.modified.year[0] && ! VAR_5->voldesc.modified.year[1]
   && ! VAR_5->voldesc.modified.year[2] && ! VAR_5->voldesc.modified.year[3]
   && ! VAR_5->voldesc.modified.month[0] && ! VAR_5->voldesc.modified.month[1]
   && ! VAR_5->voldesc.modified.day[0] && ! VAR_5->voldesc.modified.day[1]
   && ! VAR_5->voldesc.modified.hour[0] && ! VAR_5->voldesc.modified.hour[1]
   && ! VAR_5->voldesc.modified.minute[0] && ! VAR_5->voldesc.modified.minute[1]
   && ! VAR_5->voldesc.modified.second[0] && ! VAR_5->voldesc.modified.second[1]
   && ! VAR_5->voldesc.modified.hundredth[0] && ! VAR_5->voldesc.modified.hundredth[1])
 {
   FUNC_2 (VAR_0, "no creation date in filesystem to generate UUID");
   *VAR_4 = ((void*)0);
 }
      else
 {
   *VAR_4 = FUNC_5 ("%c%c%c%c-%c%c-%c%c-%c%c-%c%c-%c%c-%c%c",
     VAR_5->voldesc.modified.year[0],
     VAR_5->voldesc.modified.year[1],
     VAR_5->voldesc.modified.year[2],
     VAR_5->voldesc.modified.year[3],
     VAR_5->voldesc.modified.month[0],
     VAR_5->voldesc.modified.month[1],
     VAR_5->voldesc.modified.day[0],
     VAR_5->voldesc.modified.day[1],
     VAR_5->voldesc.modified.hour[0],
     VAR_5->voldesc.modified.hour[1],
     VAR_5->voldesc.modified.minute[0],
     VAR_5->voldesc.modified.minute[1],
     VAR_5->voldesc.modified.second[0],
     VAR_5->voldesc.modified.second[1],
     VAR_5->voldesc.modified.hundredth[0],
     VAR_5->voldesc.modified.hundredth[1]);
 }
    }
  else
    *VAR_4 = ((void*)0);

 FUNC_1 (VAR_2);

  FUNC_3 (VAR_5);

  return VAR_1;
}
