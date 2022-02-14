
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ num; } ;
struct slideshow {int mutex; TYPE_1__ files; } ;
struct obs_video_info {scalar_t__ base_height; scalar_t__ base_width; } ;
struct image_file_data {int path; } ;
struct dstr {char const* array; int member_0; } ;
typedef int obs_property_t ;
typedef int obs_properties_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 char* VAR_14 ;
 char* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 char* VAR_20 ;
 char* VAR_21 ;
 char* VAR_22 ;
 char* VAR_23 ;
 int VAR_24 ;
 char* VAR_25 ;
 char* VAR_26 ;
 char* VAR_27 ;
 int VAR_28 ;
 char* VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 char* VAR_34 ;
 char* VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 char* VAR_39 ;
 char* VAR_40 ;
 char* VAR_41 ;
 int VAR_42 ;
 char* VAR_43 ;
 char** VAR_44 ;
 struct image_file_data* FUNC_0 (TYPE_1__) ;
 int FUNC_1 (struct dstr*,int ) ;
 int FUNC_2 (struct dstr*) ;
 int FUNC_3 (struct dstr*,char*,char*) ;
 int FUNC_4 (struct dstr*,int) ;
 int VAR_45 ;
 int FUNC_5 (struct obs_video_info*) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ,int ,int ,int ,char const*) ;
 int FUNC_8 (int *,int ,int ,int,int,int) ;
 int * FUNC_9 (int *,int ,int ,int ,int ) ;
 int * FUNC_10 () ;
 int FUNC_11 (int *,char*,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*,int,char*,int,int) ;
 char* FUNC_15 (char const*,char) ;

__attribute__((used)) static obs_properties_t *FUNC_16(void *VAR_46)
{
 obs_properties_t *VAR_47 = FUNC_10();
 struct slideshow *VAR_48 = VAR_46;
 struct obs_video_info VAR_49;
 struct dstr VAR_50 = {0};
 obs_property_t *VAR_51;
 int VAR_52;
 int VAR_53;



 FUNC_5(&VAR_49);
 VAR_52 = (int)VAR_49.base_width;
 VAR_53 = (int)VAR_49.base_height;



 VAR_51 = FUNC_9(VAR_47, VAR_5, VAR_24,
        VAR_3,
        VAR_1);
 FUNC_11(VAR_51, VAR_25,
         VAR_6);
 FUNC_11(VAR_51, VAR_27,
         VAR_8);
 FUNC_11(VAR_51, VAR_26,
         VAR_7);

 VAR_51 = FUNC_9(VAR_47, VAR_13, VAR_33, VAR_3,
        VAR_1);
 FUNC_11(VAR_51, VAR_34, VAR_14);
 FUNC_11(VAR_51, VAR_35, VAR_15);

 VAR_51 = FUNC_9(VAR_47, VAR_18, VAR_38,
        VAR_3,
        VAR_1);
 FUNC_11(VAR_51, VAR_39, VAR_20);
 FUNC_11(VAR_51, VAR_40, VAR_21);
 FUNC_11(VAR_51, VAR_43, VAR_23);
 FUNC_11(VAR_51, VAR_41, VAR_22);

 FUNC_8(VAR_47, VAR_17, VAR_37, 50, 3600000,
          50);
 FUNC_8(VAR_47, VAR_19, VAR_42, 0, 3600000, 50);
 FUNC_6(VAR_47, VAR_12, VAR_32);
 FUNC_6(VAR_47, VAR_11, VAR_31);
 FUNC_6(VAR_47, VAR_16, VAR_36);

 VAR_51 = FUNC_9(VAR_47, VAR_9, VAR_28,
        VAR_2,
        VAR_1);

 FUNC_11(VAR_51, VAR_29, VAR_29);

 for (size_t VAR_54 = 0; VAR_54 < VAR_0; VAR_54++)
  FUNC_11(VAR_51, VAR_44[VAR_54], VAR_44[VAR_54]);

 char VAR_55[32];
 FUNC_14(VAR_55, 32, "%dx%d", VAR_52, VAR_53);
 FUNC_11(VAR_51, VAR_55, VAR_55);

 if (VAR_48) {
  FUNC_12(&VAR_48->mutex);
  if (VAR_48->files.num) {
   struct image_file_data *VAR_56 = FUNC_0(VAR_48->files);
   const char *VAR_57;

   FUNC_1(&VAR_50, VAR_56->path);
   FUNC_3(&VAR_50, "\\", "/");
   VAR_57 = FUNC_15(VAR_50.array, '/');
   if (VAR_57)
    FUNC_4(&VAR_50, VAR_57 - VAR_50.array + 1);
  }
  FUNC_13(&VAR_48->mutex);
 }

 FUNC_7(VAR_47, VAR_10, VAR_30,
      VAR_4,
      VAR_45, VAR_50.array);
 FUNC_2(&VAR_50);

 return VAR_47;
}
