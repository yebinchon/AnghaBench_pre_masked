
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mask_filter_data {int image; int effect; struct mask_filter_data* image_file; } ;


 int FUNC_0 (struct mask_filter_data*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void *VAR_0)
{
 struct mask_filter_data *VAR_1 = VAR_0;

 if (VAR_1->image_file)
  FUNC_0(VAR_1->image_file);

 FUNC_3();
 FUNC_1(VAR_1->effect);
 FUNC_2(&VAR_1->image);
 FUNC_4();

 FUNC_0(VAR_1);
}
