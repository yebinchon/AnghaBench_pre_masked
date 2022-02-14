
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct luma_wipe_info {int wipes_list; } ;
typedef int obs_property_t ;
typedef int obs_properties_t ;
typedef int obs_data_item_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (int ) ;
 char* FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ,int ,double,double,double) ;
 int * FUNC_7 (int *,int ,int ,int ,int ) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *,int ,char const*) ;

__attribute__((used)) static obs_properties_t *FUNC_10(void *VAR_8)
{
 obs_properties_t *VAR_9 = FUNC_8();
 struct luma_wipe_info *VAR_10 = VAR_8;

 obs_property_t *VAR_11;

 VAR_11 = FUNC_7(VAR_9, VAR_2, VAR_5,
        VAR_1,
        VAR_0);

 obs_data_item_t *VAR_12 = FUNC_0(VAR_10->wipes_list);

 for (; VAR_12 != ((void*)0); FUNC_3(&VAR_12)) {
  const char *VAR_13 = FUNC_1(VAR_12);
  const char *VAR_14 = FUNC_2(VAR_12);
  FUNC_9(VAR_11, FUNC_4(VAR_13), VAR_14);
 }

 FUNC_6(VAR_9, VAR_4, VAR_7, 0.0, 1.0,
     0.05);
 FUNC_5(VAR_9, VAR_3, VAR_6);

 return VAR_9;
}
