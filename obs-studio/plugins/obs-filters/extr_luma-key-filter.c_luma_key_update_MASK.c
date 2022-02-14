
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct luma_key_filter_data {float luma_max; float luma_min; float luma_max_smooth; float luma_min_smooth; } ;
typedef int obs_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 double FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_4, obs_data_t *VAR_5)
{
 struct luma_key_filter_data *VAR_6 = VAR_4;

 double VAR_7 = FUNC_0(VAR_5, VAR_0);
 double VAR_8 = FUNC_0(VAR_5, VAR_2);
 double VAR_9 =
  FUNC_0(VAR_5, VAR_1);
 double VAR_10 =
  FUNC_0(VAR_5, VAR_3);

 VAR_6->luma_max = (float)VAR_7;
 VAR_6->luma_min = (float)VAR_8;
 VAR_6->luma_max_smooth = (float)VAR_9;
 VAR_6->luma_min_smooth = (float)VAR_10;
}
