
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int loaded; } ;
struct TYPE_6__ {TYPE_1__ image; } ;
struct image_source {char* file; TYPE_2__ if2; scalar_t__ update_time_elapsed; int file_timestamp; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static void FUNC_8(struct image_source *VAR_0)
{
 char *VAR_1 = VAR_0->file;

 FUNC_5();
 FUNC_2(&VAR_0->if2);
 FUNC_6();

 if (VAR_1 && *VAR_1) {
  FUNC_0("loading texture '%s'", VAR_1);
  VAR_0->file_timestamp = FUNC_1(VAR_1);
  FUNC_3(&VAR_0->if2, VAR_1);
  VAR_0->update_time_elapsed = 0;

  FUNC_5();
  FUNC_4(&VAR_0->if2);
  FUNC_6();

  if (!VAR_0->if2.image.loaded)
   FUNC_7("failed to load texture '%s'", VAR_1);
 }
}
