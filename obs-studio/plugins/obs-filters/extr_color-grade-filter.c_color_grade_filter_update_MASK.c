
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int texture; } ;
struct lut_filter_data {char* file; float clut_amount; int effect; TYPE_1__ image; int target; } ;
typedef int obs_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char const*) ;
 int FUNC_6 (TYPE_1__*) ;
 double FUNC_7 (int *,int ) ;
 char* FUNC_8 (int *,int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 char* FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(void *VAR_2, obs_data_t *VAR_3)
{
 struct lut_filter_data *VAR_4 = VAR_2;

 const char *VAR_5 = FUNC_8(VAR_3, VAR_1);
 double VAR_6 = FUNC_7(VAR_3, VAR_0);

 FUNC_0(VAR_4->file);
 if (VAR_5)
  VAR_4->file = FUNC_1(VAR_5);
 else
  VAR_4->file = ((void*)0);

 FUNC_9();
 FUNC_4(&VAR_4->image);
 FUNC_10();

 FUNC_5(&VAR_4->image, VAR_5);

 FUNC_9();

 FUNC_6(&VAR_4->image);

 VAR_4->target = VAR_4->image.texture;
 VAR_4->clut_amount = (float)VAR_6;

 char *VAR_7 = FUNC_11("color_grade_filter.effect");
 FUNC_3(VAR_4->effect);
 VAR_4->effect = FUNC_2(VAR_7, ((void*)0));
 FUNC_0(VAR_7);

 FUNC_10();
}
