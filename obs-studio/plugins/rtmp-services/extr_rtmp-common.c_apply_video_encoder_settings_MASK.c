
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {char const* array; } ;
typedef int obs_data_t ;
typedef int obs_data_item_t ;
typedef int json_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dstr*,char const*) ;
 int FUNC_1 (struct dstr*) ;
 int FUNC_2 (struct dstr*,char const*) ;
 int FUNC_3 (struct dstr*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int *,char*) ;
 char* FUNC_8 (int *) ;
 int FUNC_9 (int *,char*) ;
 char* FUNC_10 (int *,char*) ;
 int * FUNC_11 (int *,char*) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *,char*,int) ;
 int FUNC_14 (int *,char*,char const*) ;

__attribute__((used)) static void FUNC_15(obs_data_t *VAR_1,
      json_t *VAR_2)
{
 json_t *VAR_3 = FUNC_7(VAR_2, "keyint");
 if (FUNC_5(VAR_3)) {
  int VAR_4 = (int)FUNC_4(VAR_3);
  FUNC_13(VAR_1, "keyint_sec", VAR_4);
 }

 FUNC_14(VAR_1, "rate_control", "CBR");

 VAR_3 = FUNC_7(VAR_2, "profile");
 obs_data_item_t *VAR_5 = FUNC_11(VAR_1, "profile");
 if (FUNC_6(VAR_3) &&
     FUNC_12(VAR_5) == VAR_0) {
  const char *VAR_6 = FUNC_8(VAR_3);
  FUNC_14(VAR_1, "profile", VAR_6);
 }

 VAR_3 = FUNC_7(VAR_2, "max video bitrate");
 if (FUNC_5(VAR_3)) {
  int VAR_7 = (int)FUNC_4(VAR_3);
  if (FUNC_9(VAR_1, "bitrate") > VAR_7) {
   FUNC_13(VAR_1, "bitrate", VAR_7);
   FUNC_13(VAR_1, "buffer_size", VAR_7);
  }
 }

 VAR_3 = FUNC_7(VAR_2, "bframes");
 if (FUNC_5(VAR_3))
  FUNC_13(VAR_1, "bf", 0);

 VAR_3 = FUNC_7(VAR_2, "x264opts");
 if (FUNC_6(VAR_3)) {
  const char *VAR_8 = FUNC_8(VAR_3);
  const char *VAR_9 =
   FUNC_10(VAR_1, "x264opts");
  struct dstr VAR_10;

  FUNC_2(&VAR_10, VAR_9);
  if (!FUNC_3(&VAR_10))
   FUNC_0(&VAR_10, " ");
  FUNC_0(&VAR_10, VAR_8);

  FUNC_14(VAR_1, "x264opts", VAR_10.array);
  FUNC_1(&VAR_10);
 }
}
