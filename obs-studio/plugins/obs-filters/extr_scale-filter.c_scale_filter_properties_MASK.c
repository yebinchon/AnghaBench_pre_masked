
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct obs_video_info {int base_width; int base_height; } ;
typedef int obs_property_t ;
typedef int obs_properties_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 int VAR_12 ;
 char* VAR_13 ;
 char* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 char* VAR_17 ;
 char* VAR_18 ;
 char* VAR_19 ;
 char* VAR_20 ;
 char* VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (void*) ;
 char** VAR_23 ;
 double* VAR_24 ;
 int FUNC_1 (struct obs_video_info*) ;
 int FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 (int *,int ,int ,int ,int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,char*,char*) ;
 int FUNC_6 (int *,int ) ;
 int VAR_25 ;
 int FUNC_7 (char*,int,char*,int,int) ;

__attribute__((used)) static obs_properties_t *FUNC_8(void *VAR_26)
{
 obs_properties_t *VAR_27 = FUNC_4();
 struct obs_video_info VAR_28;
 obs_property_t *VAR_29;
 uint32_t VAR_30;
 uint32_t VAR_31;

 struct {
  int cx;
  int cy;
 } VAR_32[VAR_1];



 FUNC_1(&VAR_28);
 VAR_30 = VAR_28.base_width;
 VAR_31 = VAR_28.base_height;

 for (size_t VAR_33 = 0; VAR_33 < VAR_1; VAR_33++) {
  VAR_32[VAR_33].cx = (int)((double)VAR_30 / VAR_24[VAR_33]);
  VAR_32[VAR_33].cy = (int)((double)VAR_31 / VAR_24[VAR_33]);
 }

 VAR_29 = FUNC_3(VAR_27, VAR_6, VAR_16,
        VAR_4,
        VAR_2);
 FUNC_6(VAR_29, VAR_25);
 FUNC_5(VAR_29, VAR_21, VAR_11);
 FUNC_5(VAR_29, VAR_19,
         VAR_9);
 FUNC_5(VAR_29, VAR_18, VAR_8);
 FUNC_5(VAR_29, VAR_20, VAR_10);
 FUNC_5(VAR_29, VAR_17, VAR_7);



 VAR_29 = FUNC_3(VAR_27, VAR_5, VAR_15,
        VAR_3,
        VAR_2);

 FUNC_5(VAR_29, VAR_14, VAR_14);
 FUNC_5(VAR_29, VAR_13, VAR_13);

 for (size_t VAR_34 = 0; VAR_34 < VAR_0; VAR_34++)
  FUNC_5(VAR_29, VAR_23[VAR_34], VAR_23[VAR_34]);

 for (size_t VAR_35 = 0; VAR_35 < VAR_1; VAR_35++) {
  char VAR_36[32];
  FUNC_7(VAR_36, 32, "%dx%d", VAR_32[VAR_35].cx, VAR_32[VAR_35].cy);
  FUNC_5(VAR_29, VAR_36, VAR_36);
 }

 FUNC_2(VAR_27, VAR_12, VAR_22);



 FUNC_0(VAR_26);
 return VAR_27;
}
