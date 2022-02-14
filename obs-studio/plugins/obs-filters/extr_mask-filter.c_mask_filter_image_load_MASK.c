
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int texture; } ;
struct mask_filter_data {char* image_file; TYPE_1__ image; int target; scalar_t__ update_time_elapsed; int image_file_timestamp; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct mask_filter_data*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct mask_filter_data *VAR_0)
{
 FUNC_3(VAR_0);

 char *VAR_1 = VAR_0->image_file;

 if (VAR_1 && *VAR_1) {
  VAR_0->image_file_timestamp = FUNC_0(VAR_1);
  FUNC_1(&VAR_0->image, VAR_1);
  VAR_0->update_time_elapsed = 0;

  FUNC_4();
  FUNC_2(&VAR_0->image);
  FUNC_5();

  VAR_0->target = VAR_0->image.texture;
 }
}
