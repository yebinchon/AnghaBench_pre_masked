
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mask_filter_data {char* image_file; int lock_aspect; int effect; int color; } ;
typedef int obs_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mask_filter_data*) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 char* FUNC_7 (int *,int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 char* FUNC_10 (char const*) ;
 int FUNC_11 (int *,int) ;

__attribute__((used)) static void FUNC_12(void *VAR_5, obs_data_t *VAR_6)
{
 struct mask_filter_data *VAR_7 = VAR_5;

 const char *VAR_8 = FUNC_7(VAR_6, VAR_1);
 const char *VAR_9 = FUNC_7(VAR_6, VAR_4);
 uint32_t VAR_10 = (uint32_t)FUNC_6(VAR_6, VAR_0);
 int VAR_11 = (int)FUNC_6(VAR_6, VAR_2);
 char *VAR_12;

 if (VAR_7->image_file)
  FUNC_0(VAR_7->image_file);
 VAR_7->image_file = FUNC_1(VAR_8);

 VAR_10 &= 0xFFFFFF;
 VAR_10 |= (uint32_t)(((double)VAR_11) * 2.55) << 24;

 FUNC_11(&VAR_7->color, VAR_10);
 FUNC_4(VAR_7);
 VAR_7->lock_aspect = !FUNC_5(VAR_6, VAR_3);

 FUNC_8();

 VAR_12 = FUNC_10(VAR_9);
 FUNC_3(VAR_7->effect);
 VAR_7->effect = FUNC_2(VAR_12, ((void*)0));
 FUNC_0(VAR_12);

 FUNC_9();
}
