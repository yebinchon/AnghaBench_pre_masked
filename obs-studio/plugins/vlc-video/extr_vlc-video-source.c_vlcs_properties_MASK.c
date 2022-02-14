
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ num; } ;
struct vlc_source {int mutex; TYPE_1__ files; } ;
struct media_file_data {int path; } ;
struct dstr {char const* array; int member_0; } ;
typedef int obs_property_t ;
typedef int obs_properties_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 struct media_file_data* FUNC_0 (TYPE_1__) ;
 int FUNC_1 (struct dstr*,char*) ;
 int FUNC_2 (struct dstr*,struct dstr*) ;
 int FUNC_3 (struct dstr*,int ) ;
 int FUNC_4 (struct dstr*) ;
 int FUNC_5 (struct dstr*,char*,char*) ;
 int FUNC_6 (struct dstr*,int) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ,int ,int ,char const*,char const*) ;
 int FUNC_9 (int *,int ,int ,int,int,int) ;
 int * FUNC_10 (int *,int ,int ,int ,int ) ;
 int * FUNC_11 () ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 char* FUNC_16 (char const*,char) ;

__attribute__((used)) static obs_properties_t *FUNC_17(void *VAR_30)
{
 obs_properties_t *VAR_31 = FUNC_11();
 struct vlc_source *VAR_32 = VAR_30;
 struct dstr VAR_33 = {0};
 struct dstr VAR_34 = {0};
 struct dstr VAR_35 = {0};
 obs_property_t *VAR_36;

 FUNC_12(VAR_31, VAR_7);
 FUNC_7(VAR_31, VAR_12, VAR_23);
 FUNC_7(VAR_31, VAR_15, VAR_26);

 if (VAR_32) {
  FUNC_14(&VAR_32->mutex);
  if (VAR_32->files.num) {
   struct media_file_data *VAR_37 = FUNC_0(VAR_32->files);
   const char *VAR_38;

   FUNC_3(&VAR_35, VAR_37->path);
   FUNC_5(&VAR_35, "\\", "/");
   VAR_38 = FUNC_16(VAR_35.array, '/');
   if (VAR_38)
    FUNC_6(&VAR_35, VAR_38 - VAR_35.array + 1);
  }
  FUNC_15(&VAR_32->mutex);
 }

 VAR_36 = FUNC_10(VAR_31, VAR_8, VAR_19,
        VAR_5,
        VAR_4);
 FUNC_13(VAR_36, VAR_22,
         VAR_11);
 FUNC_13(VAR_36, VAR_21,
         VAR_10);
 FUNC_13(VAR_36, VAR_20,
         VAR_9);

 FUNC_1(&VAR_33, "Media Files (");
 FUNC_3(&VAR_34, VAR_1);
 FUNC_5(&VAR_34, ";", " ");
 FUNC_2(&VAR_33, &VAR_34);

 FUNC_1(&VAR_33, ");;Video Files (");
 FUNC_3(&VAR_34, VAR_3);
 FUNC_5(&VAR_34, ";", " ");
 FUNC_2(&VAR_33, &VAR_34);

 FUNC_1(&VAR_33, ");;Audio Files (");
 FUNC_3(&VAR_34, VAR_0);
 FUNC_5(&VAR_34, ";", " ");
 FUNC_2(&VAR_33, &VAR_34);

 FUNC_1(&VAR_33, ");;Playlist Files (");
 FUNC_3(&VAR_34, VAR_2);
 FUNC_5(&VAR_34, ";", " ");
 FUNC_2(&VAR_33, &VAR_34);
 FUNC_1(&VAR_33, ")");

 FUNC_8(VAR_31, VAR_14, VAR_25,
      VAR_6,
      VAR_33.array, VAR_35.array);
 FUNC_4(&VAR_35);
 FUNC_4(&VAR_33);
 FUNC_4(&VAR_34);

 FUNC_9(VAR_31, VAR_13, VAR_24, 100,
          60000, 10);
 FUNC_9(VAR_31, VAR_18, VAR_29, 1, 10, 1);
 FUNC_7(VAR_31, VAR_16, VAR_27);
 FUNC_9(VAR_31, VAR_17, VAR_28, 1, 10,
          1);

 return VAR_31;
}
